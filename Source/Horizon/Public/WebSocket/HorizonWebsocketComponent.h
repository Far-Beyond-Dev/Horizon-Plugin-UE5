#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/Engine.h"
#include "Core/HorizonDelegates.h"
#include "HorizonWebSocketComponent.generated.h"

/**
 * @file HorizonWebSocketComponent.h
 * @brief Actor component for easy WebSocket integration in Unreal Engine
 * 
 * This component provides a simple way to add WebSocket functionality to any Actor
 * in your game. It handles connection management, event delegation, and provides
 * a clean Blueprint interface for WebSocket operations.
 */

// Forward declarations
class UHorizonWebSocketClient;
enum class EHorizonWebSocketState : uint8;

/**
 * @class UHorizonWebSocketComponent
 * @brief Actor component that provides WebSocket functionality to any Actor
 * 
 * This component acts as a convenient wrapper around the Horizon WebSocket client,
 * providing easy-to-use Blueprint nodes and automatic connection management.
 * It's designed to be dropped onto any Actor and configured through the editor.
 * 
 * Key Features:
 * - Auto-connection on BeginPlay with configurable delay
 * - Complete Blueprint integration with event delegates
 * - Automatic cleanup on component destruction
 * - Connection and heartbeat settings for reliable operation
 * - Direct access to underlying WebSocket client for advanced use
 * 
 * Usage in Blueprint:
 * 1. Add this component to your Actor
 * 2. Configure connection settings in the editor
 * 3. Bind to events for handling WebSocket messages
 * 4. Use Send Message node to send data
 * 
 * Usage in C++:
 * @code{.cpp}
 * // Create and configure the component
 * WebSocketComponent = CreateDefaultSubobject<UHorizonWebSocketComponent>(TEXT("WebSocketComponent"));
 * WebSocketComponent->bAutoConnect = true;
 * WebSocketComponent->AutoConnectURL = TEXT("ws://localhost:8080");
 * 
 * // Bind to events
 * WebSocketComponent->OnConnected.AddDynamic(this, &AMyActor::OnWebSocketConnected);
 * WebSocketComponent->OnMessage.AddDynamic(this, &AMyActor::OnWebSocketMessage);
 * @endcode
 * 
 * @note This component uses the global Horizon subsystem for connection management
 * @see UHorizonWebSocketClient for the underlying WebSocket implementation
 * @see UHorizonSubsystem for global WebSocket management
 */
UCLASS(BlueprintType, Blueprintable, ClassGroup=(Horizon), meta=(BlueprintSpawnableComponent))
class HORIZON_API UHorizonWebSocketComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/**
	 * Default constructor
	 * Initializes the component with default settings optimized for simple WebSocket use
	 */
	UHorizonWebSocketComponent();

protected:
	/**
	 * Called when the component begins play
	 * Handles auto-connection if enabled
	 */
	virtual void BeginPlay() override;

	/**
	 * Called when the component ends play
	 * Ensures proper cleanup of WebSocket connections
	 * @param EndPlayReason The reason why play is ending
	 */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	/**
	 * @name Auto-Connection Settings
	 * Settings for automatic WebSocket connection on component initialization
	 * @{
	 */

	/** Whether to automatically connect to a WebSocket server on BeginPlay */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Auto Connection", meta = (ToolTip = "Whether to automatically connect to a WebSocket server when the component starts"))
	bool bAutoConnect = false;

	/** URL to connect to when auto-connection is enabled */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Auto Connection", meta = (EditCondition = "bAutoConnect", ToolTip = "WebSocket server URL to connect to (e.g., ws://localhost:8080)"))
	FString AutoConnectURL = TEXT("ws://localhost:8080");

	/** Protocol to use for auto-connection (optional) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Auto Connection", meta = (EditCondition = "bAutoConnect", ToolTip = "Optional WebSocket protocol to use for the connection"))
	FString AutoConnectProtocol = TEXT("");

	/** Delay in seconds before attempting auto-connection */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Auto Connection", meta = (EditCondition = "bAutoConnect", ToolTip = "Delay in seconds before attempting auto-connection (0 = immediate)"))
	float AutoConnectDelay = 0.0f;

	/** @} */

	/**
	 * @name Performance Settings
	 * Settings for optimizing WebSocket performance
	 * @{
	 */

	/** @} */

	/**
	 * @name WebSocket Client Instance
	 * The underlying WebSocket client used by this component
	 * @{
	 */

	/** The WebSocket client instance managed by this component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Horizon|WebSocket", meta = (ToolTip = "The WebSocket client instance managed by this component"))
	UHorizonWebSocketClient* WebSocket;

	/** @} */

	/**
	 * @name Event Delegates
	 * Blueprint-bindable events for WebSocket connection and messaging
	 * @{
	 */

	/** Event fired when WebSocket connection is established or fails */
	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketConnected OnConnected;

	/** Event fired when WebSocket connection encounters an error */
	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketConnectionError OnConnectionError;

	/** Event fired when WebSocket connection is closed */
	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketClosed OnClosed;

	/** Event fired when a text message is received */
	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketMessage OnMessage;

	/** Event fired when binary data is received */
	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketRawMessage OnRawMessage;

	/** Event fired when a message has been successfully sent */
	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketMessageSent OnMessageSent;

	/** @} */

	/**
	 * @name Connection Management
	 * Functions for managing WebSocket connections
	 * @{
	 */

	/**
	 * Connects to a WebSocket server
	 * @param URL The WebSocket server URL (e.g., "ws://localhost:8080")
	 * @param Protocol Optional WebSocket protocol to use
	 * @return True if connection attempt was initiated successfully
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection", meta = (ToolTip = "Connects to a WebSocket server"))
	bool Connect(const FString& URL, const FString& Protocol = TEXT(""));

	/**
	 * Disconnects from the WebSocket server
	 * Closes the connection cleanly if connected
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection", meta = (ToolTip = "Disconnects from the WebSocket server"))
	void Disconnect();

	/** @} */

	/**
	 * @name Messaging
	 * Functions for sending and receiving WebSocket messages
	 * @{
	 */

	/**
	 * Sends a text message over the WebSocket connection
	 * @param Message The text message to send
	 * @return True if the message was queued for sending successfully
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messaging", meta = (ToolTip = "Sends a text message over the WebSocket connection"))
	bool SendMessage(const FString& Message);

	/** @} */

	/**
	 * @name Advanced Access
	 * Functions for advanced WebSocket operations
	 * @{
	 */

	/**
	 * Gets the underlying WebSocket client for direct access
	 * Use this for advanced operations not exposed through the component interface
	 * @return The WebSocket client instance
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Advanced", meta = (ToolTip = "Gets the underlying WebSocket client for direct access"))
	UHorizonWebSocketClient* GetWebSocketClient() const;

	/** @} */

	/**
	 * @name Status Information
	 * Functions for checking WebSocket connection status
	 * @{
	 */

	/**
	 * Checks if the WebSocket is currently connected
	 * @return True if connected, false otherwise
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status", meta = (ToolTip = "Checks if the WebSocket is currently connected"))
	bool IsConnected() const;

	/**
	 * Gets the current connection state
	 * @return The current WebSocket connection state
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status", meta = (ToolTip = "Gets the current WebSocket connection state"))
	EHorizonWebSocketState GetConnectionState() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	FString GetServerURL() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	FString GetServerProtocol() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	int32 GetCurrentReconnectAttempts() const;

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	void ForceReconnect();

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Heartbeat")
	void SendHeartbeat();

	// Configuration access
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Configuration")
	void SetHeartbeatEnabled(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Configuration")
	void SetHeartbeatInterval(float IntervalSeconds);

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Configuration")
	void SetMaxReconnectAttempts(int32 MaxAttempts);

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Configuration")
	void SetAutoReconnect(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Configuration")
	void SetVerboseLogging(bool bEnabled);

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Configuration")
	bool GetHeartbeatEnabled() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Configuration")
	float GetHeartbeatInterval() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Configuration")
	int32 GetMaxReconnectAttempts() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Configuration")
	bool GetAutoReconnect() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Configuration")
	bool GetVerboseLogging() const;

	// Performance configuration (simplified)
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Performance")
	FString GetPerformanceStats(bool bIncludeDetailedStats = false) const;

protected:

private:
	void InitializeWebSocket();
	void BindWebSocketEvents();
	void UnbindWebSocketEvents();
	void PerformAutoConnect();
	// Event handlers - forward WebSocket client events to component delegates
	UFUNCTION()
	void HandleOnConnected(bool bSuccess);
	
	UFUNCTION()
	void HandleOnConnectionError(const FString& ErrorMessage);
	
	UFUNCTION()
	void HandleOnClosed(int32 StatusCode, const FString& Reason, bool bWasClean);
	
	UFUNCTION()
	void HandleOnMessage(const FString& Message);
	
	UFUNCTION()
	void HandleOnRawMessage(const TArray<uint8>& Data, int32 Size, int32 BytesRemaining);
	
	UFUNCTION()
	void HandleOnMessageSent(const FString& Message);

	FTimerHandle AutoConnectTimer;
};
