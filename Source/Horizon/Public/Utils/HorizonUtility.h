#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HorizonUtility.generated.h"

// Forward declarations
class UHorizonWebSocketClient;
class UHorizonSubsystem;

UCLASS()
class HORIZON_API UHorizonUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// WebSocket Creation

	/**
	 * Create a WebSocket client
	 * @param WorldContext World context for subsystem access
	 * @return WebSocket client instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket", meta = (WorldContext = "WorldContext"))
	static UHorizonWebSocketClient* CreateWebSocket(const UObject* WorldContext);

	/**
	 * Get performance statistics for the Horizon WebSocket system
	 * @param WorldContext World context for subsystem access
	 * @param bIncludeDetailedStats Whether to include detailed statistics
	 * @return Performance statistics as a string
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket", meta = (WorldContext = "WorldContext"))
	static FString GetPerformanceStatistics(const UObject* WorldContext, bool bIncludeDetailedStats = false);

	/**
	 * Get the Horizon plugin version
	 * @return Version string
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Information")
	static FString GetHorizonVersion();

	/**
	 * Check if a specific Horizon feature is available
	 * @param FeatureName The name of the feature to check
	 * @return True if the feature is available
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Information")
	static bool IsHorizonFeatureAvailable(const FString& FeatureName);

	// URL and Basic Utilities
	/**
	 * Parse a WebSocket URL to extract components
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities")
	static bool ParseWebSocketURL(const FString& URL, FString& OutProtocol, FString& OutHost, int32& OutPort, FString& OutPath);

	/**
	 * Validate a WebSocket URL format
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities")
	static bool IsValidWebSocketURL(const FString& URL);

	/**
	 * Make a JSON message string from key-value pairs
	 * This is the main function for creating structured messages for the server.
	 * Automatically adds UUID and timestamp if not provided.
	 * 
	 * @param Namespace The message namespace (e.g., "chat", "game", "system")
	 * @param Event The event type (e.g., "message", "join", "update", "player_action")
	 * @param Data Key-value pairs of data to include
	 * @param bAutoAddUUID If true, automatically adds a "uuid" field if not present
	 * @param bAutoAddTimestamp If true, automatically adds a "timestamp" field if not present
	 * @return Formatted JSON string ready to send to server
	 * 
	 * Example usage:
	 *   // Chat message
	 *   TMap<FString, FString> ChatData;
	 *   ChatData.Add("player_id", "player123");
	 *   ChatData.Add("message", "Hello world!");
	 *   ChatData.Add("channel", "general");
	 *   FString Message = UHorizonUtility::MakeJSONMessage("chat", "message", ChatData);
	 *   
	 *   // Game action
	 *   TMap<FString, FString> GameData;
	 *   GameData.Add("action", "jump");
	 *   GameData.Add("player_id", "player123");
	 *   FString Action = UHorizonUtility::MakeJSONMessage("game", "player_action", GameData);
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Make JSON Message"))
	static FString MakeJSONMessage(const FString& Namespace, const FString& Event, const TMap<FString, FString>& Data, bool bAutoAddUUID = true, bool bAutoAddTimestamp = true);

	/**
	 * Parse a JSON message string to extract type and parameters
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Parse JSON Message"))
	static bool ParseJSONMessage(const FString& JSONMessage, FString& OutNamespace, FString& OutEvent, FString& OutData);

	/**
	 * Convert string to byte array for binary messages
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "String to Byte Array"))
	static TArray<uint8> StringToByteArray(const FString& StringData);

	/**
	 * Convert byte array to string
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Byte Array to String"))
	static FString ByteArrayToString(const TArray<uint8>& ByteData);

	/**
	 * Generate a unique client ID for identification
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Generate Client ID"))
	static FString GenerateClientID();

	// High-Performance Utilities

	/**
	 * Format bytes to human-readable string (KB, MB, etc.)
	 * @param Bytes Number of bytes
	 * @return Formatted string
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Format Bytes"))
	static FString FormatBytes(int64 Bytes);

	/**
	 * Make a chat message with proper formatting
	 * @param PlayerID The player's unique identifier
	 * @param Message The chat message content
	 * @param Channel The chat channel (default: "general")
	 * @return Formatted JSON chat message
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Make Chat Message"))
	static FString MakeChatMessage(const FString& PlayerID, const FString& Message, const FString& Channel = TEXT("general"));

	/**
	 * Make a game action message
	 * @param PlayerID The player's unique identifier
	 * @param Action The action being performed
	 * @param AdditionalData Optional additional data for the action
	 * @return Formatted JSON game action message
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Make Game Action Message"))
	static FString MakeGameActionMessage(const FString& PlayerID, const FString& Action, const TMap<FString, FString>& AdditionalData);

	/**
	 * Make a system message
	 * @param MessageType The type of system message
	 * @param Data The system message data
	 * @return Formatted JSON system message
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Make System Message"))
	static FString MakeSystemMessage(const FString& MessageType, const TMap<FString, FString>& Data);

	/**
	 * Make a player status message
	 * @param PlayerID The player's unique identifier
	 * @param Status The player status (e.g., "online", "offline", "away")
	 * @param AdditionalData Optional additional status data
	 * @return Formatted JSON player status message
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Make Player Status Message"))
	static FString MakePlayerStatusMessage(const FString& PlayerID, const FString& Status, const TMap<FString, FString>& AdditionalData);



private:
	// Helper functions
	static class UHorizonSubsystem* GetHorizonSubsystem(const UObject* WorldContext);

public:
	// C++ convenience overloads with default parameters (not exposed to Blueprint)
	
	/**
	 * Make a game action message with default empty additional data
	 * @param PlayerID The player's unique identifier
	 * @param Action The action being performed
	 * @return Formatted JSON game action message
	 */
	static FString MakeGameActionMessage(const FString& PlayerID, const FString& Action)
	{
		return MakeGameActionMessage(PlayerID, Action, TMap<FString, FString>());
	}

	/**
	 * Make a player status message with default empty additional data
	 * @param PlayerID The player's unique identifier
	 * @param Status The player status (e.g., "online", "offline", "away")
	 * @return Formatted JSON player status message
	 */
	static FString MakePlayerStatusMessage(const FString& PlayerID, const FString& Status)
	{
		return MakePlayerStatusMessage(PlayerID, Status, TMap<FString, FString>());
	}


};
