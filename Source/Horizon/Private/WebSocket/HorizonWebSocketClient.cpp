#include "WebSocket/HorizonWebSocketClient.h"
#include "WebSocket/HorizonWebSocketComponent.h"
#include "Protocol/HorizonWebSocketProtocol.h"
#include "WebSocket/HorizonMessage.h"
#include "Core/Horizon.h"
#include "Utils/HorizonUtility.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "HAL/PlatformProcess.h"
#include "Misc/DateTime.h"
#include "Async/Async.h"
#include "Misc/Base64.h"
#include "Misc/Guid.h"
#include "HAL/UnrealMemory.h"
#include "Misc/SecureHash.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include <atomic>

UHorizonWebSocketClient::UHorizonWebSocketClient()
    : ConnectionState(EHorizonWebSocketState::Disconnected)
      , bConnectionEstablished(false)
      , CurrentReconnectAttempts(0)
      , bShouldShutdown(false)
      , bCleaningUp(false)
      , LastHeartbeatTime(0.0)
      , LastMessageReceivedTime(0.0)
      , Socket(nullptr)
      , ServerPort(0)
      , bIsSecureConnection(false)
      , OwningComponent(nullptr)
{
    // Initialize with current time
    LastHeartbeatTime = FPlatformTime::Seconds();
    LastMessageReceivedTime = LastHeartbeatTime;
}

UHorizonWebSocketClient::~UHorizonWebSocketClient()
{
    CleanupWebSocket();
}

void UHorizonWebSocketClient::SetOwningComponent(UHorizonWebSocketComponent* Component)
{
    OwningComponent = Component;
}

void UHorizonWebSocketClient::Initialize()
{
    // Don't initialize if shutting down
    if (bShouldShutdown)
    {
        return;
    }

    // Initialize extensions flags
    ExtensionFlags = Horizon::Protocol::FWebSocketProtocol::FExtensionFlags();
    
    UE_LOG(LogHorizon, Log, TEXT("HorizonWebSocketClient initialized (simplified)"));
}

void UHorizonWebSocketClient::BeginDestroy()
{
    // Set shutdown flag to prevent any new operations
    bShouldShutdown = true;
    
    // Cleanup if not already cleaning up
    if (!bCleaningUp)
    {
        CleanupWebSocket();
    }
    
    Super::BeginDestroy();
}

UWorld* UHorizonWebSocketClient::GetWorld() const
{
    if (IsValid(GetOuter()))
    {
        return GetOuter()->GetWorld();
    }
    return nullptr;
}

void UHorizonWebSocketClient::Tick(float DeltaTime)
{
    // Simple heartbeat check (removed complex reconnection scheduling)
    if (bEnableHeartbeat && IsConnected())
    {
        double CurrentTime = FPlatformTime::Seconds();
        double TimeSinceLastMessage = CurrentTime - LastMessageReceivedTime;
        double TimeoutThreshold = HeartbeatIntervalSeconds * 3.0; // 3x heartbeat interval

        if (TimeSinceLastMessage > TimeoutThreshold)
        {
            LogMessage(FString::Printf(TEXT("Connection timeout detected (%.1fs since last message)"), TimeSinceLastMessage), true);
            // Simple reconnection - just try again immediately if enabled
            if (bAutoReconnect && CurrentReconnectAttempts < MaxReconnectAttempts)
            {
                CurrentReconnectAttempts++;
                LogMessage(FString::Printf(TEXT("Auto-reconnecting (attempt %d/%d)"), CurrentReconnectAttempts, MaxReconnectAttempts));
                CleanupWebSocket();
                Connect(ServerURL, ServerProtocol);
            }
            else
            {
                SetConnectionState(EHorizonWebSocketState::Failed);
                CleanupWebSocket();
            }
        }
        // Send heartbeat if needed
        else if (CurrentTime - LastHeartbeatTime >= HeartbeatIntervalSeconds)
        {
            SendHeartbeat();
            LastHeartbeatTime = CurrentTime;
        }
    }
}

TStatId UHorizonWebSocketClient::GetStatId() const
{
    RETURN_QUICK_DECLARE_CYCLE_STAT(UHorizonWebSocketClient, STATGROUP_Tickables);
}

bool UHorizonWebSocketClient::Connect(const FString& URL, const FString& Protocol)
{
    if (bShouldShutdown)
    {
        LogMessage(TEXT("Cannot connect: WebSocket is shutting down"), true);
        return false;
    }

    if (URL.IsEmpty())
    {
        LogMessage(TEXT("Cannot connect: URL is empty"), true);
        return false;
    }

    // Clean up existing connection if any (but not if already shutting down)
    if (!bShouldShutdown)
    {
        CleanupWebSocket();
    }
    
    // Reset shutdown state for new connection
    bShouldShutdown = false;
    bCleaningUp = false;
    
    // Make sure thread pool is initialized
    Initialize();

    ServerURL = URL;
    ServerProtocol = Protocol;

    // Parse URL
    if (!ParseURL(URL, ServerHost, ServerPort, ServerPath, bIsSecureConnection))
    {
        LogMessage(TEXT("Invalid WebSocket URL format"), true);
        SetConnectionState(EHorizonWebSocketState::Failed);
        return false;
    }

    SetConnectionState(EHorizonWebSocketState::Connecting);
    LogMessage(FString::Printf(TEXT("Connecting to %s:%d%s (Secure: %s, Protocol: %s)"),
        *ServerHost, ServerPort, *ServerPath, bIsSecureConnection ? TEXT("Yes") : TEXT("No"), *Protocol));

    // Create socket
    ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
    if (!SocketSubsystem)
    {
        LogMessage(TEXT("Failed to get socket subsystem"), true);
        SetConnectionState(EHorizonWebSocketState::Failed);
        CleanupWebSocket();
        return false;
    }
    
    // Create TCP socket
    Socket = SocketSubsystem->CreateSocket(NAME_Stream, TEXT("HorizonWebSocketClient"), bIsSecureConnection);
    if (!Socket)
    {
        LogMessage(TEXT("Failed to create socket"), true);
        SetConnectionState(EHorizonWebSocketState::Failed);
        CleanupWebSocket();
        return false;
    }

    // Set socket options
    Socket->SetNonBlocking(true);
    Socket->SetNoDelay(true);
    
    // Resolve server address
    TSharedPtr<FInternetAddr> ServerAddr = SocketSubsystem->CreateInternetAddr();
    bool bIsValid = false;
    
    if (ServerHost.IsNumeric())
    {
        ServerAddr->SetIp(*ServerHost, bIsValid);
    }
    else
    {
        // Resolve hostname
        FAddressInfoResult Result = SocketSubsystem->GetAddressInfo(
            *ServerHost, 
            nullptr, 
            EAddressInfoFlags::AllResultsWithMapping | EAddressInfoFlags::OnlyUsableAddresses,
            NAME_None,
            ESocketType::SOCKTYPE_Unknown);
            
        if (Result.ReturnCode != SE_NO_ERROR || Result.Results.Num() == 0)
        {
            LogMessage(TEXT("Failed to resolve hostname"), true);
            SetConnectionState(EHorizonWebSocketState::Failed);
            CleanupWebSocket();
            return false;
        }
        
        ServerAddr = Result.Results[0].Address;
        bIsValid = true;
    }
    
    // Set port
    ServerAddr->SetPort(ServerPort);
    
    if (!bIsValid)
    {
        LogMessage(TEXT("Invalid server address"), true);
        SetConnectionState(EHorizonWebSocketState::Failed);
        CleanupWebSocket();
        return false;
    }
    
    // Connect to server
    bool bConnected = Socket->Connect(*ServerAddr);
    if (!bConnected && SocketSubsystem->GetLastErrorCode() != SE_EWOULDBLOCK)
    {
        LogMessage(FString::Printf(TEXT("Failed to connect to server: %d"), SocketSubsystem->GetLastErrorCode()), true);
        SetConnectionState(EHorizonWebSocketState::Failed);
        CleanupWebSocket();
        return false;
    }
    
    // Generate WebSocket key
    WebSocketKey = Horizon::Protocol::FWebSocketProtocol::GenerateWebSocketKey();
    
    // Submit handshake task with connection wait (simplified approach)
    AsyncTask(ENamedThreads::AnyThread, [this]() {
        // Wait for socket connection to complete (for non-blocking sockets)
        if (WaitForSocketConnection())
        {
            PerformHandshake();
        }
        else
        {
            LogMessage(TEXT("Socket connection failed"), true);
            AsyncTask(ENamedThreads::GameThread, [this]() {
                if (IsValid(this))
                {
                    OnWebSocketConnectionError(TEXT("Socket connection failed"));
                }
            });
        }
    });

    return true;
}

void UHorizonWebSocketClient::Disconnect()
{
    LogMessage(TEXT("Disconnecting WebSocket"));
    SetConnectionState(EHorizonWebSocketState::Closing);
    bShouldShutdown = true;
    CleanupWebSocket();
}

bool UHorizonWebSocketClient::SendMessage(const FString& Message, bool bHighPriority)
{
    if (!IsConnected())
    {
        LogMessage(TEXT("Cannot send message: not connected"), true);
        return false;
    }
    
    // Check if message is already in JSON format (contains "namespace" and "event")
    FString MessageToSend;
    if (Message.Contains(TEXT("\"namespace\"")) && Message.Contains(TEXT("\"event\"")))
    {
        // Already formatted, send as-is
        MessageToSend = Message;
    }
    else
    {
        // Wrap in default game message format for server compatibility
        TMap<FString, FString> MessageData;
        MessageData.Add(TEXT("content"), Message);
        MessageToSend = UHorizonUtility::MakeJSONMessage(TEXT("game"), TEXT("message"), MessageData);
    }
    
    // Send immediately using Async task (simplified approach)
    AsyncTask(ENamedThreads::AnyThread, [this, MessageToSend]()
    {
        // Create WebSocket text frame and send
        TArray<uint8> FrameData = Horizon::Protocol::FWebSocketProtocol::CreateWebSocketFrame(MessageToSend, true);
        SendSocketData(FrameData);
    });
    
    return true;
}


bool UHorizonWebSocketClient::SendBinaryMessage(const TArray<uint8>& Data, bool bHighPriority)
{
    if (!IsConnected())
    {
        LogMessage(TEXT("Cannot send binary message: not connected"), true);
        return false;
    }
    
    // Send immediately using Async task (simplified approach)
    AsyncTask(ENamedThreads::AnyThread, [this, Data]()
    {
        // Create WebSocket binary frame and send
        TArray<uint8> FrameData = Horizon::Protocol::FWebSocketProtocol::CreateBinaryFrame(Data, true);
        SendSocketData(FrameData);
    });
    
    return true;
}


bool UHorizonWebSocketClient::IsConnected() const
{
    // Use the thread-safe flag instead of checking socket directly
    return bConnectionEstablished;
}

EHorizonWebSocketState UHorizonWebSocketClient::GetConnectionState() const
{
    FScopeLock Lock(&StateMutex);
    return ConnectionState;
}

void UHorizonWebSocketClient::ForceReconnect()
{
    if (bShouldShutdown)
    {
        return;
    }

    LogMessage(TEXT("Force reconnecting (simplified)..."));
    // Simple immediate reconnection
    HandleReconnection();
}

void UHorizonWebSocketClient::SendHeartbeat()
{
    if (!IsConnected())
    {
        return;
    }

    if (bVerboseLogging)
    {
        LogMessage(FString::Printf(TEXT("Sending heartbeat: %s"), *HeartbeatMessage));
    }

    // Send heartbeat using high priority
    SendMessage(HeartbeatMessage, true);
    
    // Update last heartbeat time
    LastHeartbeatTime = FPlatformTime::Seconds();
}

FString UHorizonWebSocketClient::GetServerURL() const
{
    return ServerURL;
}

FString UHorizonWebSocketClient::GetServerProtocol() const
{
    return ServerProtocol;
}

int32 UHorizonWebSocketClient::GetCurrentReconnectAttempts() const
{
    return CurrentReconnectAttempts;
}

void UHorizonWebSocketClient::CleanupWebSocket()
{
    // Prevent reentrant cleanup calls
    if (bCleaningUp)
    {
        return;
    }
    
    bCleaningUp = true;
    bConnectionEstablished = false;

    // Clean up socket
    {
        FScopeLock Lock(&SocketMutex);
        if (Socket)
        {
            try
            {
                Socket->Close();
                if (ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM))
                {
                    SocketSubsystem->DestroySocket(Socket);
                }
            }
            catch (...)
            {
                UE_LOG(LogHorizon, Warning, TEXT("Exception during socket cleanup"));
            }
            Socket = nullptr;
        }
    }

    // Clear message queues safely
    try
    {
        // Simple cleanup (queues removed for simplification)
    }
    catch (...)
    {
        UE_LOG(LogHorizon, Warning, TEXT("Exception during cleanup"));
    }
    
    // Reset state
    FrameBuffer.Empty();
    
    UE_LOG(LogHorizon, Log, TEXT("WebSocket cleanup complete"));
    
    SetConnectionState(EHorizonWebSocketState::Disconnected);
    CurrentReconnectAttempts = 0;
    
    bCleaningUp = false;
}

void UHorizonWebSocketClient::SetConnectionState(EHorizonWebSocketState NewState)
{
    FScopeLock Lock(&StateMutex);

    if (ConnectionState != NewState)
    {
        EHorizonWebSocketState OldState = ConnectionState;
        ConnectionState = NewState;

        LogMessage(FString::Printf(TEXT("State changed from %d to %d"), (int32)OldState, (int32)NewState));
    }
}

void UHorizonWebSocketClient::HandleReconnection()
{
    // Simplified reconnection - just attempt immediate reconnect (SocketIOClient style)
    if (bShouldShutdown || !bAutoReconnect)
    {
        return;
    }

    if (CurrentReconnectAttempts >= MaxReconnectAttempts)
    {
        LogMessage(FString::Printf(TEXT("Max reconnect attempts reached (%d)"), MaxReconnectAttempts), true);
        SetConnectionState(EHorizonWebSocketState::Failed);
        return;
    }

    CurrentReconnectAttempts++;
    LogMessage(FString::Printf(TEXT("Attempting simple reconnection (attempt %d/%d)"), CurrentReconnectAttempts, MaxReconnectAttempts));
    
    // Simple immediate reconnection - no complex scheduling or backoff
    CleanupWebSocket();
    Connect(ServerURL, ServerProtocol);
}

void UHorizonWebSocketClient::LogMessage(const FString& Message, bool bIsError) const
{
    if (bIsError || bVerboseLogging)
    {
        if (bIsError)
        {
            UE_LOG(LogHorizon, Error, TEXT("[WebSocket] %s"), *Message);
        }
        else
        {
            UE_LOG(LogHorizon, Log, TEXT("[WebSocket] %s"), *Message);
        }
    }
}

bool UHorizonWebSocketClient::ParseURL(const FString& URL, FString& OutHost, int32& OutPort, FString& OutPath, bool& bOutIsSecure)
{
    // Reset output parameters
    OutHost.Empty();
    OutPort = 0;
    OutPath.Empty();
    bOutIsSecure = false;

    if (URL.IsEmpty())
    {
        return false;
    }

    FString WorkingURL = URL;

    // Extract protocol
    int32 ProtocolEnd = WorkingURL.Find(TEXT("://"));
    if (ProtocolEnd == INDEX_NONE)
    {
        return false;
    }

    FString Protocol = WorkingURL.Left(ProtocolEnd).ToLower();
    if (Protocol == TEXT("wss"))
    {
        bOutIsSecure = true;
        OutPort = 443; // Default HTTPS port
    }
    else if (Protocol == TEXT("ws"))
    {
        bOutIsSecure = false;
        OutPort = 80; // Default HTTP port
    }
    else
    {
        return false;
    }

    WorkingURL = WorkingURL.Mid(ProtocolEnd + 3);

    // Extract path (everything after the first '/')
    int32 PathStart = WorkingURL.Find(TEXT("/"));
    if (PathStart != INDEX_NONE)
    {
        OutPath = WorkingURL.Mid(PathStart);
        WorkingURL = WorkingURL.Left(PathStart);
    }
    else
    {
        OutPath = TEXT("/");
    }

    // Extract port (everything after the last ':')
    int32 PortStart = WorkingURL.Find(TEXT(":"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
    if (PortStart != INDEX_NONE)
    {
        FString PortString = WorkingURL.Mid(PortStart + 1);
        OutPort = FCString::Atoi(*PortString);
        OutHost = WorkingURL.Left(PortStart);
    }
    else
    {
        OutHost = WorkingURL;
    }

    return !OutHost.IsEmpty() && OutPort > 0;
}

// Event handlers (called from worker thread, dispatched to game thread)
void UHorizonWebSocketClient::OnWebSocketConnected()
{
    LogMessage(TEXT("WebSocket connected successfully"));
    SetConnectionState(EHorizonWebSocketState::Connected);
    bConnectionEstablished = true;
    CurrentReconnectAttempts = 0;
    LastMessageReceivedTime = FPlatformTime::Seconds();

    // Broadcast delegate on game thread
    AsyncTask(ENamedThreads::GameThread, [this]()
        {
            if (IsValid(this))
            {
                // Only broadcast the delegate - the component will handle the rest
                OnConnected.Broadcast(true);
            }
        });
}

void UHorizonWebSocketClient::OnWebSocketConnectionError(const FString& Error)
{
    LogMessage(FString::Printf(TEXT("Connection error: %s"), *Error), true);
    SetConnectionState(EHorizonWebSocketState::Failed);
    bConnectionEstablished = false;

    // Broadcast delegate on game thread
    AsyncTask(ENamedThreads::GameThread, [this, Error]()
        {
            if (IsValid(this))
            {
                // Only broadcast the delegate - the component will handle the rest
                OnConnectionError.Broadcast(Error);
            }
        });

    // Handle reconnection if enabled
    if (bAutoReconnect && !bShouldShutdown)
    {
        HandleReconnection();
    }
}

void UHorizonWebSocketClient::OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
    LogMessage(FString::Printf(TEXT("WebSocket closed - Code: %d, Reason: %s, Clean: %s"),
        StatusCode, *Reason, bWasClean ? TEXT("Yes") : TEXT("No")));

    SetConnectionState(EHorizonWebSocketState::Disconnected);
    bConnectionEstablished = false;

    // Broadcast delegate on game thread
    AsyncTask(ENamedThreads::GameThread, [this, StatusCode, Reason, bWasClean]()
        {
            if (IsValid(this))
            {
                // Only broadcast the delegate - the component will handle the rest
                OnClosed.Broadcast(StatusCode, Reason, bWasClean);
            }
        });

    // Handle reconnection if it wasn't a clean close and reconnection is enabled
    if (!bWasClean && bAutoReconnect && !bShouldShutdown)
    {
        HandleReconnection();
    }
}

void UHorizonWebSocketClient::OnWebSocketMessage(const FString& Message)
{
    LastMessageReceivedTime = FPlatformTime::Seconds();
    LogMessage(FString::Printf(TEXT("Received message: %s"), *Message));

    // Broadcast delegate on game thread
    AsyncTask(ENamedThreads::GameThread, [this, Message]()
        {
            if (IsValid(this))
            {
                // Only broadcast the delegate - the component will handle the rest
                OnMessage.Broadcast(Message);
            }
        });
}

void UHorizonWebSocketClient::OnWebSocketRawMessage(const TArray<uint8>& Data)
{
    LastMessageReceivedTime = FPlatformTime::Seconds();
    LogMessage(FString::Printf(TEXT("Received raw message: %d bytes"), Data.Num()));

    // Broadcast delegate on game thread
    AsyncTask(ENamedThreads::GameThread, [this, Data]()
        {
            if (IsValid(this))
            {
                // Only broadcast the delegate - the component will handle the rest
                OnRawMessage.Broadcast(Data, Data.Num(), 0);
            }
        });
}

void UHorizonWebSocketClient::OnWebSocketMessageSent(const FString& Message)
{
    LastHeartbeatTime = FPlatformTime::Seconds();
    LogMessage(FString::Printf(TEXT("Message sent: %s"), *Message));

    // Broadcast delegate on game thread
    AsyncTask(ENamedThreads::GameThread, [this, Message]()
        {
            if (IsValid(this))
            {
                // Only broadcast the delegate - the component will handle the rest
                OnMessageSent.Broadcast(Message);
            }
        });
}

bool UHorizonWebSocketClient::SendSocketData(const TArray<uint8>& Data)
{
    FScopeLock Lock(&SocketMutex);
    
    if (!Socket)
    {
        LogMessage(TEXT("Cannot send data: socket not initialized"), true);
        return false;
    }

    int32 BytesSent = 0;
    bool bSuccess = Socket->Send(Data.GetData(), Data.Num(), BytesSent);
    
    if (!bSuccess || BytesSent != Data.Num())
    {
        LogMessage(FString::Printf(TEXT("Failed to send data: %d of %d bytes sent"), BytesSent, Data.Num()), true);
        return false;
    }
    
    return true;
}

bool UHorizonWebSocketClient::ReceiveSocketData(TArray<uint8>& OutData)
{
    // Check shutdown flag first
    if (bShouldShutdown)
    {
        return false;
    }

    FScopeLock Lock(&SocketMutex);
    
    if (!Socket || bShouldShutdown)
    {
        LogMessage(TEXT("Cannot receive data: socket not initialized or shutting down"), true);
        return false;
    }

    uint32 PendingDataSize = 0;
    if (!Socket->HasPendingData(PendingDataSize) || PendingDataSize == 0)
    {
        return false; // No data available
    }
    
    // Resize buffer to fit incoming data
    OutData.SetNumUninitialized(PendingDataSize);
    
    int32 BytesRead = 0;
    bool bSuccess = Socket->Recv(OutData.GetData(), OutData.Num(), BytesRead);
    
    if (!bSuccess || BytesRead <= 0)
    {
        OutData.Empty();
        LogMessage(TEXT("Failed to receive data from socket"), true);
            return false;
        }

    // Resize buffer to actual bytes read
    if (BytesRead < OutData.Num())
    {
        OutData.SetNum(BytesRead);
    }
    
    return true;
}

void UHorizonWebSocketClient::ProcessReceivedMessage(TSharedPtr<Horizon::WebSocket::FHorizonMessage> Message)
{
    if (!Message.IsValid())
    {
        return;
    }

    // Handle different message types
    switch (Message->GetType())
    {
        case Horizon::WebSocket::FHorizonMessage::EType::Text:
        {
            FString TextMessage = Message->GetTextPayload();
            
            // Handle ping/pong for WebSocket protocol
            if (TextMessage == TEXT("ping"))
            {
                // Respond to ping with pong
                SendMessage(TEXT("pong"), true);
                return;
            }
            else if (TextMessage == TEXT("pong"))
            {
                // Pong received, update last message time
                LastMessageReceivedTime = FPlatformTime::Seconds();
                return;
            }
            
            // Broadcast message received event
            OnWebSocketMessage(TextMessage);
            break;
        }
        case Horizon::WebSocket::FHorizonMessage::EType::Binary:
        {
            // Broadcast binary message received event
            OnWebSocketRawMessage(Message->GetBinaryPayload());
            break;
        }
        case Horizon::WebSocket::FHorizonMessage::EType::Ping:
        {
            // Respond to ping with pong
            TSharedPtr<Horizon::WebSocket::FHorizonMessage> PongMessage = Horizon::WebSocket::FHorizonMessage::CreatePongMessage();
            
            // Convert to WebSocket frame and send directly using correct opcode
            TArray<uint8> FrameData = Horizon::Protocol::FWebSocketProtocol::CreatePongFrame(Message->GetBinaryPayload(), true);
            SendSocketData(FrameData);
            break;
        }
        case Horizon::WebSocket::FHorizonMessage::EType::Pong:
        {
            // Pong received, update last message time
            LastMessageReceivedTime = FPlatformTime::Seconds();
            break;
        }
        case Horizon::WebSocket::FHorizonMessage::EType::Close:
        {
            // Close message received
            uint16 StatusCode = 1000; // Normal closure
            FString Reason = TEXT("Remote endpoint closed connection");
            
            // Extract status code and reason if available
            const TArray<uint8>& Payload = Message->GetBinaryPayload();
            if (Payload.Num() >= 2)
            {
                StatusCode = (static_cast<uint16>(Payload[0]) << 8) | Payload[1];
                
                if (Payload.Num() > 2)
                {
                    // Convert remaining bytes to UTF-8 string
                    Reason = FString(Payload.Num() - 2, reinterpret_cast<const char*>(Payload.GetData() + 2));
                }
            }
            
            // Handle close
            OnWebSocketClosed(StatusCode, Reason, true);
            break;
        }
    }
    
    // Update last message received time
    LastMessageReceivedTime = FPlatformTime::Seconds();
}

void UHorizonWebSocketClient::LogSocketMessage(const FString& Message, bool bIsError) const
{
    LogMessage(Message, bIsError);
}

bool UHorizonWebSocketClient::PerformHandshake()
{
    // Check shutdown flag
    if (bShouldShutdown)
    {
        return false;
    }

    // Send WebSocket handshake request
    if (!SendHandshakeRequest())
    {
        LogMessage(TEXT("Failed to send WebSocket handshake request"), true);
        SetConnectionState(EHorizonWebSocketState::Failed);
        return false;
    }
    
    LogMessage(TEXT("WebSocket handshake request sent, waiting for response..."));
    
    // Wait for handshake response with timeout
    const double StartTime = FPlatformTime::Seconds();
    const double TimeoutSeconds = 15.0; // 10 second timeout
    FString HandshakeResponse;
    TArray<uint8> ResponseBuffer;
    
    while (FPlatformTime::Seconds() - StartTime < TimeoutSeconds && !bShouldShutdown)
    {
        // Check if socket is ready for reading
        TArray<uint8> NewData;
        if (ReceiveSocketData(NewData) && NewData.Num() > 0)
        {
            ResponseBuffer.Append(NewData);
            
            LogMessage(FString::Printf(TEXT("Received %d bytes of handshake data"), NewData.Num()));
            
            // Convert to string and append - ensure null termination
            FString NewDataString;
            if (NewData.Num() > 0)
            {
                // Add null terminator for safe string conversion
                NewData.Add(0);
                NewDataString = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(NewData.GetData())));
                HandshakeResponse.Append(NewDataString);
            }
            
            // Check if we have a complete response (ends with double CRLF)
            if (HandshakeResponse.Contains(TEXT("\r\n\r\n")))
            {
                LogMessage(FString::Printf(TEXT("Complete handshake response received (%d chars)"), HandshakeResponse.Len()));
                // Process handshake response
                if (ProcessHandshakeResponse(HandshakeResponse))
                {
                    return true;
                }
                else
                {
                    LogMessage(TEXT("Invalid handshake response"), true);
                    SetConnectionState(EHorizonWebSocketState::Failed);
                    return false;
                }
            }
        }
        
        // Sleep to avoid busy waiting
        FPlatformProcess::Sleep(0.01f);
    }
    
    // Timeout
    LogMessage(FString::Printf(TEXT("Handshake timeout after %.1f seconds. Response so far: %s"), 
        FPlatformTime::Seconds() - StartTime, *HandshakeResponse), true);
    SetConnectionState(EHorizonWebSocketState::Failed);
    return false;
}

bool UHorizonWebSocketClient::SendHandshakeRequest()
{
    // Create handshake request
    FString Request = Horizon::Protocol::FWebSocketProtocol::CreateHandshakeRequest(
        ServerHost,
        ServerPort,
        bIsSecureConnection,
        ServerPath,
        WebSocketKey,
        ServerProtocol,
        TArray<FString>()
    );
    
    LogMessage(FString::Printf(TEXT("Sending handshake request:\n%s"), *Request));
    
    // Convert to UTF-8
    FTCHARToUTF8 UTF8Request(*Request);
    TArray<uint8> RequestData;
    RequestData.Append((uint8*)UTF8Request.Get(), UTF8Request.Length());
    
    // Send handshake request
    bool bResult = SendSocketData(RequestData);
    LogMessage(FString::Printf(TEXT("Handshake request sent: %s (%d bytes)"), 
        bResult ? TEXT("SUCCESS") : TEXT("FAILED"), RequestData.Num()));
    
    return bResult;
}

bool UHorizonWebSocketClient::ProcessHandshakeResponse(const FString& Response)
{
    LogMessage(FString::Printf(TEXT("Processing handshake response:\n%s"), *Response));
    
    // Validate handshake
    if (!Horizon::Protocol::FWebSocketProtocol::ValidateHandshakeResponse(Response, WebSocketKey))
    {
        LogMessage(TEXT("Invalid WebSocket handshake response"), true);
        return false;
    }
    
    LogMessage(TEXT("Handshake response validation passed"));
    
    // Extract accepted protocol
    FString AcceptedProtocol = Horizon::Protocol::FWebSocketProtocol::ExtractAcceptedProtocol(Response);
    if (!AcceptedProtocol.IsEmpty())
    {
        ServerProtocol = AcceptedProtocol;
    }
    
    // Extract accepted extensions
    AcceptedExtensions = Horizon::Protocol::FWebSocketProtocol::ExtractAcceptedExtensions(Response);
    
    // Connection successful
    LogMessage(FString::Printf(TEXT("WebSocket connected to %s (Protocol: %s)"),
        *ServerURL, ServerProtocol.IsEmpty() ? TEXT("None") : *ServerProtocol));
    
    // Update state
    bConnectionEstablished = true;
    SetConnectionState(EHorizonWebSocketState::Connected);
    
    // Reset reconnect attempts
    CurrentReconnectAttempts = 0;
    LastMessageReceivedTime = FPlatformTime::Seconds();
    
    // Track connection
    
    // Call connected callback on game thread
    AsyncTask(ENamedThreads::GameThread, [this]() {
        if (IsValid(this))
        {
            OnWebSocketConnected();
        }
    });
    
    // Start receiving task (simplified approach)
    AsyncTask(ENamedThreads::AnyThread, [this]() {
        while (IsConnected() && !bShouldShutdown && IsValid(this))
        {
            TArray<uint8> ReceivedData;
            if (ReceiveSocketData(ReceivedData) && ReceivedData.Num() > 0)
            {
                // Double-check we're still valid before processing
                if (!bShouldShutdown && IsValid(this))
                {
                    // Process data directly (simplified SocketIOClient-style approach)
                    FrameBuffer.Append(ReceivedData);
                    
                    // Process complete frames directly
                    bool bIsFinal;
                    uint8 Opcode;
                    TArray<uint8> Payload;
                    while (Horizon::Protocol::FWebSocketProtocol::ProcessWebSocketFrame(FrameBuffer, bIsFinal, Opcode, Payload))
                    {
                        // Process frame on game thread for safety
                        AsyncTask(ENamedThreads::GameThread, [this, bIsFinal, Opcode, Payload]() {
                            if (IsValid(this) && !bShouldShutdown)
                            {
                                ProcessReceivedFrame(bIsFinal, Opcode, Payload);
                            }
                        });
                    }
                }
            }
            else
            {
                // No data available, sleep briefly to avoid busy waiting
                FPlatformProcess::Sleep(0.001f); // 1ms sleep
            }
        }
    });
    
    return true;
}

void UHorizonWebSocketClient::ProcessReceivedFrame(bool bFinal, uint8 Opcode, const TArray<uint8>& Payload)
{
    // Create message based on opcode
    TSharedPtr<Horizon::WebSocket::FHorizonMessage> Message;
    
    switch (Opcode)
    {
        case 0x1: // Text frame
            {
                FString Text = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(Payload.GetData())));
                Message = Horizon::WebSocket::FHorizonMessage::CreateTextMessage(Text);
                break;
            }
        case 0x2: // Binary frame
            {
                Message = Horizon::WebSocket::FHorizonMessage::CreateBinaryMessage(Payload);
                break;
            }
        case 0x8: // Close frame
            {
                uint16 CloseCode = 1000;
                FString CloseReason;
                
                if (Payload.Num() >= 2)
                {
                    CloseCode = (Payload[0] << 8) | Payload[1];
                    if (Payload.Num() > 2)
                    {
                        CloseReason = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(Payload.GetData() + 2)));
                    }
                }
                
                Message = Horizon::WebSocket::FHorizonMessage::CreateCloseMessage(CloseCode, CloseReason);
                break;
            }
        case 0x9: // Ping frame
            {
                Message = Horizon::WebSocket::FHorizonMessage::CreatePingMessage();
                if (Payload.Num() > 0)
                {
                    Message->SetData(Payload);
                }
                break;
            }
        case 0xA: // Pong frame
            {
                Message = Horizon::WebSocket::FHorizonMessage::CreatePongMessage();
                if (Payload.Num() > 0)
                {
                    Message->SetData(Payload);
                }
                break;
            }
        default:
            {
                LogMessage(FString::Printf(TEXT("Unknown WebSocket opcode: %d"), Opcode), true);
                return;
            }
    }
    
    // Process the message
    if (Message.IsValid())
    {
        ProcessReceivedMessage(Message);
    }
}

TArray<uint8> UHorizonWebSocketClient::CreateWebSocketFrame(const FString& Message)
{
    return Horizon::Protocol::FWebSocketProtocol::CreateWebSocketFrame(Message, true);
}

TArray<uint8> UHorizonWebSocketClient::CreateBinaryFrame(const TArray<uint8>& Data)
{
    return Horizon::Protocol::FWebSocketProtocol::CreateBinaryFrame(Data, true);
}

TArray<uint8> UHorizonWebSocketClient::CreatePingFrame()
{
    return Horizon::Protocol::FWebSocketProtocol::CreatePingFrame(TArray<uint8>(), true);
}

TArray<uint8> UHorizonWebSocketClient::CreatePongFrame()
{
    return Horizon::Protocol::FWebSocketProtocol::CreatePongFrame(TArray<uint8>(), true);
}

TArray<uint8> UHorizonWebSocketClient::CreateCloseFrame(uint16 Code, const FString& Reason)
{
    return Horizon::Protocol::FWebSocketProtocol::CreateCloseFrame(Code, Reason, true);
}

bool UHorizonWebSocketClient::WaitForSocketConnection()
{
    // Wait for socket connection to complete (for non-blocking sockets)
    const double StartTime = FPlatformTime::Seconds();
    const double TimeoutSeconds = 10.0; // 10 second timeout
    
    while (FPlatformTime::Seconds() - StartTime < TimeoutSeconds && !bShouldShutdown)
    {
        // Check if socket connection is established
        FScopeLock Lock(&SocketMutex);
        if (!Socket)
        {
            LogMessage(TEXT("Socket was destroyed during connection wait"), true);
            return false;
        }
        
        // Check socket state
        ESocketConnectionState SocketState = Socket->GetConnectionState();
        if (SocketState == SCS_Connected)
        {
            LogMessage(TEXT("Socket connection established"));
            return true;
        }
        else if (SocketState == SCS_ConnectionError)
        {
            LogMessage(TEXT("Socket connection error"), true);
            return false;
        }
        
        // Sleep to avoid busy waiting
        FPlatformProcess::Sleep(0.01f); // 10ms sleep
    }
    
    // Timeout
    LogMessage(TEXT("Socket connection timeout"), true);
    return false;
}

