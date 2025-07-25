#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "HAL/ThreadSafeBool.h"
#include "HAL/CriticalSection.h"
#include "Containers/Queue.h"
#include "Tickable.h"
#include "WebSocket/HorizonMessage.h"
#include "Protocol/HorizonWebSocketProtocol.h"
#include "Core/HorizonDelegates.h"
#include <atomic>

#include "HorizonWebSocketClient.generated.h"

UENUM(BlueprintType)
enum class EHorizonWebSocketState : uint8
{
	Disconnected,
	Connecting,
	Connected,
	Closing,
	Closed,
	Failed,
	Reconnecting
};

// Forward declarations
class UHorizonWebSocketComponent;
class FSocket;

namespace Horizon
{
	namespace WebSocket
	{
		class FHorizonMessage;
	}
}

/**
 * @class UHorizonWebSocketClient
 * @brief Simple WebSocket client for UE5 applications
 * 
 * The HorizonWebSocketClient provides a WebSocket implementation for real-time 
 * communication with custom servers. It features a simplified architecture.
 * 
 * Key Features:
 * - Simple connection management
 * - Automatic reconnection (configurable)
 * - Heartbeat mechanism for connection health
 * - Blueprint and C++ API support
 * - Direct message sending for low latency
 * 
 * Usage Example:
 * @code
 * // Create and configure client
 * UHorizonWebSocketClient* Client = Subsystem->CreateWebSocket();
 * Client->Connect("ws://localhost:8080", "my-protocol");
 * 
 * // Send message
 * Client->SendMessage("Hello Server");
 * 
 * // Send message using utility
 * FString ChatMessage = UHorizonUtility::MakeChatMessage("Player1", "Hello World", "general");
 * Client->SendMessage(ChatMessage);
 * @endcode
 * 
 * @see UHorizonWebSocketComponent for Blueprint integration
 * @see UHorizonUtility for message creation
 */
UCLASS(BlueprintType, Blueprintable, meta = (DisplayName = "Horizon WebSocket Client"))
class HORIZON_API UHorizonWebSocketClient : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:
	/** Default constructor - initializes default values and connection state */
	UHorizonWebSocketClient();
	
	/** Destructor - ensures proper cleanup of connections */
	virtual ~UHorizonWebSocketClient();
	
	/**
	 * Associates this client with a component for automatic event forwarding
	 * @param Component The UHorizonWebSocketComponent that owns this client
	 */
	void SetOwningComponent(class UHorizonWebSocketComponent* Component);
	
	/**
	 * Sends a heartbeat message to maintain connection health
	 * Called automatically by the heartbeat timer when enabled
	 */
	void SendHeartbeat();

	// UObject interface
	
	/**
	 * Called when the object is being destroyed
	 * Ensures proper cleanup of network connections
	 */
	virtual void BeginDestroy() override;
	
	/**
	 * Gets the world context for this client
	 * @return The UWorld instance this client belongs to
	 */
	virtual UWorld* GetWorld() const override;

	// FTickableGameObject interface
	
	/**
	 * Main tick function - processes queued messages and handles connection state
	 * @param DeltaTime Time elapsed since last tick
	 */
	virtual void Tick(float DeltaTime) override;
	
	/**
	 * Gets the stat ID for profiling
	 * @return TStatId for performance tracking
	 */
	virtual TStatId GetStatId() const override;
	
	/**
	 * Determines if this object should be ticked
	 * @return true if the client is active and should receive tick updates
	 */
	virtual bool IsTickable() const override { return !bShouldShutdown; }

	/**
	 * Initializes the WebSocket client with current configuration
	 * Sets up connection state and heartbeat settings
	 * Must be called before attempting to connect
	 */
	void Initialize();

	// Connection Information
	
	/**
	 * Gets the current server URL
	 * @return The WebSocket URL this client is connected to or attempting to connect to
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|WebSocket|Info")
	FString GetServerURL() const;
	
	/**
	 * Gets the current WebSocket protocol
	 * @return The protocol string used for this connection
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|WebSocket|Info")
	FString GetServerProtocol() const;
	
	/**
	 * Gets the current number of reconnection attempts
	 * @return Number of times reconnection has been attempted
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|WebSocket|Info")
	int32 GetCurrentReconnectAttempts() const;

	// Connection Management
	
	/**
	 * Initiates a WebSocket connection to the specified server
	 * @param URL The WebSocket URL (ws:// or wss://)
	 * @param Protocol Optional protocol string for the WebSocket handshake
	 * @return true if the connection attempt was initiated successfully
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	bool Connect(const FString& URL, const FString& Protocol = TEXT(""));

	/**
	 * Gracefully closes the WebSocket connection
	 * Sends a close frame and waits for server acknowledgment
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	void Disconnect();

	/**
	 * Forces an immediate reconnection attempt
	 * Closes the current connection and initiates a new one
	 * Use this when you need to reset the connection state
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	void ForceReconnect();

	// Message Transmission
	
	/**
	 * Sends a message through the WebSocket connection
	 * 
	 * Messages are sent immediately using simple async tasks.
	 * Plain text messages are automatically wrapped in JSON format.
	 * 
	 * @param Message The message content (plain text or JSON string)
	 * @param bHighPriority Unused parameter (kept for API compatibility)
	 * @return true if the message was successfully sent
	 * 
	 * @see UHorizonUtility::MakeChatMessage() for chat messages
	 * @see UHorizonUtility::MakeGameActionMessage() for game events
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messages")
	bool SendMessage(const FString& Message, bool bHighPriority = false);



	/**
	 * Sends binary data through the WebSocket connection
	 * 
	 * Binary messages are sent as WebSocket binary frames.
	 * 
	 * @param Data The binary data to send
	 * @param bHighPriority Unused parameter (kept for API compatibility)
	 * @return true if the binary message was successfully sent
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messages")
	bool SendBinaryMessage(const TArray<uint8>& Data, bool bHighPriority = false);



	// Connection Status
	
	/**
	 * Checks if the WebSocket is currently connected
	 * @return true if connected and ready to send/receive messages
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|WebSocket|Status")
	bool IsConnected() const;

	/**
	 * Gets the current connection state
	 * @return Current state of the WebSocket connection
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|WebSocket|Status")
	EHorizonWebSocketState GetConnectionState() const;

	// Connection Configuration
	
	/**
	 * Enable or disable automatic reconnection
	 * When enabled, the client will automatically attempt to reconnect
	 * after connection loss with simple retry logic
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Connection")
	bool bAutoReconnect = true;

	/**
	 * Maximum number of reconnection attempts before giving up
	 * Set to 0 for unlimited attempts
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Connection", meta = (ClampMin = "0", ClampMax = "20"))
	int32 MaxReconnectAttempts = 5;

	/**
	 * Delay between reconnection attempts in seconds
	 * Simple delay used between reconnection attempts
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Connection", meta = (ClampMin = "0.5", ClampMax = "60.0"))
	float ReconnectDelaySeconds = 2.0f;

	// Heartbeat Configuration
	
	/**
	 * Enable heartbeat messages to maintain connection health
	 * Heartbeats help detect connection issues and prevent timeouts
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Heartbeat")
	bool bEnableHeartbeat = true;

	/**
	 * Interval between heartbeat messages in seconds
	 * Shorter intervals provide faster disconnect detection but use more bandwidth
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Heartbeat", meta = (ClampMin = "5.0", ClampMax = "300.0"))
	float HeartbeatIntervalSeconds = 30.0f;
	
	/**
	 * Message content for heartbeat packets
	 * Will be sent as a structured system/ping message using UHorizonUtility
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Heartbeat")
	FString HeartbeatMessage = TEXT("ping");
	
	/**
	 * Timeout for waiting for pong response in seconds
	 * If no pong is received within this time, the connection is considered lost
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Heartbeat", meta = (ClampMin = "10.0", ClampMax = "300.0"))
	float HeartbeatTimeoutSeconds = 60.0f;
	
	// Logging Configuration
	
	/**
	 * Enable detailed logging for debugging
	 * Shows connection events, message flow, and error details
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Logging")
	bool bVerboseLogging = false;
	
	// Internal Interface Methods
	
	/**
	 * Internal method for sending raw socket data
	 * @param Data The raw byte data to send
	 * @return true if data was sent successfully
	 */
	bool SendSocketData(const TArray<uint8>& Data);
	
	/**
	 * Internal method for receiving raw socket data
	 * @param OutData Array to store received data
	 * @return true if data was received
	 */
	bool ReceiveSocketData(TArray<uint8>& OutData);
	
	/**
	 * Internal method for logging socket messages
	 * @param Message The message to log
	 * @param bIsError Whether this is an error message
	 */
	void LogSocketMessage(const FString& Message, bool bIsError = false) const;
	
	// Event delegates - Blueprint bindable
	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketConnected OnConnected;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketConnectionError OnConnectionError;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketClosed OnClosed;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketMessage OnMessage;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketRawMessage OnRawMessage;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketMessageSent OnMessageSent;
	
	// WebSocket frame methods
	TArray<uint8> CreateWebSocketFrame(const FString& Message);
	TArray<uint8> CreateBinaryFrame(const TArray<uint8>& Data);
	TArray<uint8> CreatePingFrame();
	TArray<uint8> CreatePongFrame();
	TArray<uint8> CreateCloseFrame(uint16 Code = 1000, const FString& Reason = TEXT(""));
	
	// Socket connection helper
	bool WaitForSocketConnection();
	
	// Friend classes for access
	friend class UHorizonWebSocketComponent;

protected:
	// Component reference for direct event callbacks
	UPROPERTY()
	class UHorizonWebSocketComponent* OwningComponent;

	// Internal connection state - FIXED: Using std::atomic for thread safety
	mutable FCriticalSection StateMutex;
	std::atomic<EHorizonWebSocketState> ConnectionState;
	std::atomic<bool> bConnectionEstablished;

	// Reconnection handling (simplified)
	int32 CurrentReconnectAttempts;
	FThreadSafeBool bShouldShutdown;
	FThreadSafeBool bCleaningUp;
	double LastHeartbeatTime;
	double LastMessageReceivedTime;

	// Ping/Pong tracking for proper heartbeat
	std::atomic<bool> bWaitingForPong;
	std::atomic<double> LastPingTime;

	// Socket and networking
	mutable FCriticalSection SocketMutex;
	FSocket* Socket;
	FString ServerURL;
	FString ServerHost;
	FString ServerPath;
	FString ServerProtocol;
	int32 ServerPort;
	bool bIsSecureConnection;
	
	// Handshake data
	FString WebSocketKey;
	Horizon::Protocol::FWebSocketProtocol::FExtensionFlags ExtensionFlags;
	TArray<FString> AcceptedExtensions;

	// Frame buffer for WebSocket frame processing
	TArray<uint8> FrameBuffer;
	
	// Internal methods
	void CleanupWebSocket();
	void SetConnectionState(EHorizonWebSocketState NewState);
	void HandleReconnection();
	void LogMessage(const FString& Message, bool bIsError = false) const;
	bool ParseURL(const FString& URL, FString& OutHost, int32& OutPort, FString& OutPath, bool& bOutIsSecure);
	
	// Connection methods
	bool PerformHandshake();
	bool SendHandshakeRequest();
	bool ProcessHandshakeResponse(const FString& Response);
	
	// Simple message handling
	void ProcessReceivedFrame(bool bFinal, uint8 Opcode, const TArray<uint8>& Payload);
	void ProcessReceivedMessage(TSharedPtr<Horizon::WebSocket::FHorizonMessage> Message);
	
	// Event handlers
	void OnWebSocketConnected();
	void OnWebSocketConnectionError(const FString& Error);
	void OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean);
	void OnWebSocketMessage(const FString& Message);
	void OnWebSocketRawMessage(const TArray<uint8>& Data);
	void OnWebSocketMessageSent(const FString& Message);
};

/**
 * Simplified WebSocket Message API
 * 
 * This WebSocket client uses a simple, direct approach for sending messages:
 * - Use SendMessage() for all message types (text/JSON)
 * - Messages are sent immediately for low latency
 * - Plain text is automatically wrapped in JSON format for server compatibility
 * - For structured messages, use UHorizonUtility helper functions
 * 
 * Example usage:
 *   // Simple text message
 *   Client->SendMessage("Hello World");
 *   
 *   // Chat message using UHorizonUtility
 *   FString ChatMsg = UHorizonUtility::MakeChatMessage("player123", "Hello!", "general");
 *   Client->SendMessage(ChatMsg);
 *   
 *   // Custom structured message
 *   TMap<FString, FString> CustomData;
 *   CustomData.Add("custom_field", "value");
 *   FString CustomMsg = UHorizonUtility::MakeJSONMessage("custom", "event", CustomData);
 *   Client->SendMessage(CustomMsg);
 */