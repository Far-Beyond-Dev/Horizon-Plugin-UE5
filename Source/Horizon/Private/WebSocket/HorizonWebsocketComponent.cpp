#include "WebSocket/HorizonWebSocketComponent.h"
#include "WebSocket/HorizonWebSocketClient.h"
#include "Core/Horizon.h"
#include "Engine/World.h"
#include "TimerManager.h"

UHorizonWebSocketComponent::UHorizonWebSocketComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	bWantsInitializeComponent = true;
	WebSocket = nullptr;
}

void UHorizonWebSocketComponent::BeginPlay()
{
	Super::BeginPlay();
	
	InitializeWebSocket();
	
	if (bAutoConnect && !AutoConnectURL.IsEmpty())
	{
		if (AutoConnectDelay > 0.0f)
		{
			// Schedule auto-connection with delay
			if (UWorld* World = GetWorld())
			{
				World->GetTimerManager().SetTimer(AutoConnectTimer, this, &UHorizonWebSocketComponent::PerformAutoConnect, AutoConnectDelay, false);
			}
		}
		else
		{
			// Connect immediately
			PerformAutoConnect();
		}
	}
}

void UHorizonWebSocketComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Clear auto-connect timer
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(AutoConnectTimer);
	}

	// Clean up WebSocket client
	if (WebSocket)
	{
		UnbindWebSocketEvents();
		WebSocket->Disconnect();
		WebSocket = nullptr;
	}

	Super::EndPlay(EndPlayReason);
}

bool UHorizonWebSocketComponent::Connect(const FString& URL, const FString& Protocol)
{
	if (!WebSocket)
	{
		UE_LOG(LogHorizon, Error, TEXT("WebSocket client is not initialized"));
		return false;
	}

	return WebSocket->Connect(URL, Protocol);
}

void UHorizonWebSocketComponent::Disconnect()
{
	if (WebSocket)
	{
		WebSocket->Disconnect();
	}
}

bool UHorizonWebSocketComponent::SendMessage(const FString& Message)
{
	if (!WebSocket)
	{
		return false;
	}

	return WebSocket->SendMessage(Message);
}

bool UHorizonWebSocketComponent::IsConnected() const
{
	return WebSocket ? WebSocket->IsConnected() : false;
}

UHorizonWebSocketClient* UHorizonWebSocketComponent::GetWebSocketClient() const
{
	return WebSocket;
}

EHorizonWebSocketState UHorizonWebSocketComponent::GetConnectionState() const
{
	return WebSocket ? WebSocket->GetConnectionState() : EHorizonWebSocketState::Disconnected;
}

FString UHorizonWebSocketComponent::GetServerURL() const
{
	return WebSocket ? WebSocket->GetServerURL() : FString();
}

FString UHorizonWebSocketComponent::GetServerProtocol() const
{
	return WebSocket ? WebSocket->GetServerProtocol() : FString();
}

int32 UHorizonWebSocketComponent::GetCurrentReconnectAttempts() const
{
	return WebSocket ? WebSocket->GetCurrentReconnectAttempts() : 0;
}

void UHorizonWebSocketComponent::ForceReconnect()
{
	if (WebSocket)
	{
		WebSocket->ForceReconnect();
	}
}

void UHorizonWebSocketComponent::SendHeartbeat()
{
	if (WebSocket)
	{
		WebSocket->SendHeartbeat();
	}
}

// Configuration methods
void UHorizonWebSocketComponent::SetHeartbeatEnabled(bool bEnabled)
{
	if (WebSocket)
	{
		WebSocket->bEnableHeartbeat = bEnabled;
	}
}

void UHorizonWebSocketComponent::SetHeartbeatInterval(float IntervalSeconds)
{
	if (WebSocket)
	{
		WebSocket->HeartbeatIntervalSeconds = FMath::Clamp(IntervalSeconds, 5.0f, 300.0f);
	}
}

void UHorizonWebSocketComponent::SetMaxReconnectAttempts(int32 MaxAttempts)
{
	if (WebSocket)
	{
		WebSocket->MaxReconnectAttempts = FMath::Clamp(MaxAttempts, 1, 10);
	}
}

void UHorizonWebSocketComponent::SetAutoReconnect(bool bEnabled)
{
	if (WebSocket)
	{
		WebSocket->bAutoReconnect = bEnabled;
	}
}

void UHorizonWebSocketComponent::SetVerboseLogging(bool bEnabled)
{
	if (WebSocket)
	{
		WebSocket->bVerboseLogging = bEnabled;
	}
}

bool UHorizonWebSocketComponent::GetHeartbeatEnabled() const
{
	return WebSocket ? WebSocket->bEnableHeartbeat : false;
}

float UHorizonWebSocketComponent::GetHeartbeatInterval() const
{
	return WebSocket ? WebSocket->HeartbeatIntervalSeconds : 0.0f;
}

int32 UHorizonWebSocketComponent::GetMaxReconnectAttempts() const
{
	return WebSocket ? WebSocket->MaxReconnectAttempts : 0;
}

bool UHorizonWebSocketComponent::GetAutoReconnect() const
{
	return WebSocket ? WebSocket->bAutoReconnect : false;
}

bool UHorizonWebSocketComponent::GetVerboseLogging() const
{
	return WebSocket ? WebSocket->bVerboseLogging : false;
}

FString UHorizonWebSocketComponent::GetPerformanceStats(bool bIncludeDetailedStats) const
{
	if (WebSocket)
	{
		return FString::Printf(TEXT("Connected: %s, State: %s"), 
			WebSocket->IsConnected() ? TEXT("true") : TEXT("false"),
			*UEnum::GetValueAsString(WebSocket->GetConnectionState()));
	}
	return TEXT("No WebSocket client available");
}



// Private methods
void UHorizonWebSocketComponent::InitializeWebSocket()
{
	if (!WebSocket)
	{
		WebSocket = NewObject<UHorizonWebSocketClient>(this);
		
		// Set the component reference so the client can call our events directly
		WebSocket->SetOwningComponent(this);
		
		// Initialize the client with default settings
		WebSocket->Initialize();
		
		BindWebSocketEvents();
		
		UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket client initialized for component"));
	}
}

void UHorizonWebSocketComponent::BindWebSocketEvents()
{
	if (WebSocket)
	{
		// Bind WebSocket client delegates to component delegates
		WebSocket->OnConnected.AddDynamic(this, &UHorizonWebSocketComponent::HandleOnConnected);
		WebSocket->OnConnectionError.AddDynamic(this, &UHorizonWebSocketComponent::HandleOnConnectionError);
		WebSocket->OnClosed.AddDynamic(this, &UHorizonWebSocketComponent::HandleOnClosed);
		WebSocket->OnMessage.AddDynamic(this, &UHorizonWebSocketComponent::HandleOnMessage);
		WebSocket->OnRawMessage.AddDynamic(this, &UHorizonWebSocketComponent::HandleOnRawMessage);
		WebSocket->OnMessageSent.AddDynamic(this, &UHorizonWebSocketComponent::HandleOnMessageSent);
		
		UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket events bound to component"));
	}
}

void UHorizonWebSocketComponent::UnbindWebSocketEvents()
{
	if (WebSocket)
	{
		// Unbind WebSocket client delegates from component delegates
		WebSocket->OnConnected.RemoveAll(this);
		WebSocket->OnConnectionError.RemoveAll(this);
		WebSocket->OnClosed.RemoveAll(this);
		WebSocket->OnMessage.RemoveAll(this);
		WebSocket->OnRawMessage.RemoveAll(this);
		WebSocket->OnMessageSent.RemoveAll(this);
		
		UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket events unbound from component"));
	}
}

void UHorizonWebSocketComponent::PerformAutoConnect()
{
	UE_LOG(LogHorizon, Log, TEXT("Performing auto-connect to %s"), *AutoConnectURL);
	Connect(AutoConnectURL, AutoConnectProtocol);
}

// Event handlers - forward WebSocket client events to component delegates and Blueprint events
void UHorizonWebSocketComponent::HandleOnConnected(bool bSuccess)
{
	// Broadcast component delegate
	OnConnected.Broadcast(bSuccess);
}

void UHorizonWebSocketComponent::HandleOnConnectionError(const FString& ErrorMessage)
{
	// Broadcast component delegate
	OnConnectionError.Broadcast(ErrorMessage);
}

void UHorizonWebSocketComponent::HandleOnClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	// Broadcast component delegate
	OnClosed.Broadcast(StatusCode, Reason, bWasClean);
}

void UHorizonWebSocketComponent::HandleOnMessage(const FString& Message)
{
	// Broadcast component delegate
	OnMessage.Broadcast(Message);
}

void UHorizonWebSocketComponent::HandleOnRawMessage(const TArray<uint8>& Data, int32 Size, int32 BytesRemaining)
{
	// Broadcast component delegate
	OnRawMessage.Broadcast(Data, Size, BytesRemaining);
}

void UHorizonWebSocketComponent::HandleOnMessageSent(const FString& Message)
{
	// Broadcast component delegate
	OnMessageSent.Broadcast(Message);
}