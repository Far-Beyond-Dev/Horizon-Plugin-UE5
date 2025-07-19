#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Core/HorizonDelegates.h"
#include "HorizonSubsystem.generated.h"

// Forward declarations
class UHorizonWebSocketClient;
enum class EHorizonWebSocketState : uint8;

/**
 * @class UHorizonSubsystem
 * @brief Game instance subsystem for managing Horizon WebSocket functionality
 * 
 * The HorizonSubsystem provides centralized management of WebSocket connectivity
 * for a single player/client. It handles the lifecycle of the WebSocket client,
 * forwards events to interested parties, and provides a clean interface for
 * WebSocket operations.
 * 
 * Architecture:
 * - One subsystem per game instance
 * - One WebSocket client per subsystem (single player focus)
 * - Automatic event forwarding and lifecycle management
 * - Clean separation between low-level WebSocket operations and game logic
 * 
 * Lifecycle:
 * 1. Subsystem initializes when game instance starts
 * 2. WebSocket client is created on demand via CreateWebSocket()
 * 3. Client connects to server and handles all communication
 * 4. Subsystem forwards events to Blueprint and C++ listeners
 * 5. Cleanup happens automatically when game instance shuts down
 * 
 * Usage Example:
 * @code
 * // Get the subsystem
 * UHorizonSubsystem* Subsystem = GetGameInstance()->GetSubsystem<UHorizonSubsystem>();
 * 
 * // Create WebSocket client
 * UHorizonWebSocketClient* Client = Subsystem->CreateWebSocket();
 * 
 * // Connect to server
 * Client->Connect("ws://localhost:8080", "my-protocol");
 * 
 * // Send messages
* Client->SendMessage(UHorizonUtility::MakeChatMessage("Player1", "Hello!", "general"));
 * @endcode
 * 
 * @see UHorizonWebSocketClient for detailed client functionality
 * @see UHorizonWebSocketComponent for actor-based integration
 */
UCLASS(BlueprintType, meta = (DisplayName = "Horizon Subsystem"))
class HORIZON_API UHorizonSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	// USubsystem Interface
	
	/**
	 * Called when the subsystem is initialized
	 * Sets up internal state and prepares for WebSocket operations
	 * @param Collection The subsystem collection this belongs to
	 */
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
	/**
	 * Called when the subsystem is being shut down
	 * Ensures proper cleanup of WebSocket connections and resources
	 */
	virtual void Deinitialize() override;

	// WebSocket Management
	
	/**
	 * Creates the WebSocket client for this game instance
	 * 
	 * This function creates and configures the WebSocket client that will handle
	 * all server communication for this player. Only one client is supported per
	 * subsystem, reflecting the single-player-per-instance architecture.
	 * 
	 * The created client is automatically configured with:
	 * - Event handlers that forward to subsystem events
	 * - Default connection and heartbeat settings
	 * - Performance optimizations enabled
	 * 
	 * @return The WebSocket client instance, or existing client if already created
	 * 
	 * @see GetWebSocket() to retrieve the existing client
	 * @see UHorizonWebSocketClient for client configuration options
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Subsystem", meta = (DisplayName = "Create WebSocket Client"))
	UHorizonWebSocketClient* CreateWebSocket();

	/**
	 * Gets the existing WebSocket client
	 * 
	 * Returns the WebSocket client if it has been created, otherwise returns nullptr.
	 * Use this to check if a client exists or to access an existing client.
	 * 
	 * @return The WebSocket client instance, or nullptr if not created yet
	 * 
	 * @see CreateWebSocket() to create the client
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|Subsystem", meta = (DisplayName = "Get WebSocket Client"))
	UHorizonWebSocketClient* GetWebSocket() const;

	// Status Information
	
	/**
	 * Checks if the WebSocket is connected and ready for communication
	 * 
	 * @return true if the WebSocket client exists and is connected to the server
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|Subsystem|Status", meta = (DisplayName = "Is Connected"))
	bool IsConnected() const;

	// Event Delegates
	// These events are automatically fired when the WebSocket client experiences connection changes
	
	/**
	 * Event fired when the WebSocket client successfully connects to the server
	 * 
	 * This event provides a centralized way to respond to connection establishment
	 * across your entire game. Use this to:
	 * - Update UI to show connected status
	 * - Start sending queued messages
	 * - Initialize game-specific protocols
	 * 
	 * @param bSuccess true if connection was successful, false if connection failed
	 */
	UPROPERTY(BlueprintAssignable, Category = "Horizon|Subsystem|Events", meta = (DisplayName = "On Client Connected"))
	FOnHorizonWebSocketConnected OnClientConnected;

	/**
	 * Event fired when the WebSocket client encounters a connection error
	 * 
	 * This event is triggered for various connection problems including:
	 * - Server unreachable
	 * - Network timeouts
	 * - Authentication failures
	 * - Protocol errors
	 * 
	 * @param ErrorMessage Description of the connection error
	 */
	UPROPERTY(BlueprintAssignable, Category = "Horizon|Subsystem|Events", meta = (DisplayName = "On Client Connection Error"))
	FOnHorizonWebSocketConnectionError OnClientConnectionError;

	/**
	 * Event fired when the WebSocket connection is closed
	 * 
	 * This event is triggered both for graceful disconnections and unexpected
	 * connection loss. Use this to:
	 * - Update UI to show disconnected status
	 * - Trigger reconnection logic
	 * - Clean up connection-dependent resources
	 * 
	 * @param StatusCode WebSocket close status code
	 * @param Reason Human-readable reason for closure
	 * @param bWasClean true if the connection was closed gracefully
	 */
	UPROPERTY(BlueprintAssignable, Category = "Horizon|Subsystem|Events", meta = (DisplayName = "On Client Closed"))
	FOnHorizonWebSocketClosed OnClientClosed;

	// Status and Information
	
	/**
	 * Gets a human-readable status string for the Horizon system
	 * 
	 * Provides a summary of the current WebSocket state including:
	 * - Whether a client has been created
	 * - Current connection status
	 * - Basic configuration information
	 * 
	 * @return Formatted status string for debugging and display purposes
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|Subsystem|Status", meta = (DisplayName = "Get Horizon Status"))
	FString GetHorizonStatus() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|Subsystem|Performance")
	FString GetGlobalPerformanceStats(bool bIncludeDetailedStats = false) const;

private:
	// Client event handlers
	void RegisterClientEventHandlers(UHorizonWebSocketClient* Client);
	void UnregisterClientEventHandlers(UHorizonWebSocketClient* Client);

	UFUNCTION()
	void HandleClientConnected(bool bSuccess);

	UFUNCTION()
	void HandleClientConnectionError(const FString& ErrorMessage);

	UFUNCTION()
	void HandleClientClosed(int32 StatusCode, const FString& Reason, bool bWasClean);

	// The WebSocket client for this player
	UPROPERTY()
	UHorizonWebSocketClient* ManagedClient;
};
