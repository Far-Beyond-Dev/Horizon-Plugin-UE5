#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "HAL/ThreadSafeBool.h"
#include "HAL/Thread.h"
#include "HorizonSettings.generated.h"

/**
 * @file HorizonSettings.h
 * @brief Configuration settings for the Horizon WebSocket plugin
 * 
 * This file contains the main configuration class for the Horizon plugin,
 * allowing users to customize WebSocket behavior, performance settings,
 * and debugging options through the Project Settings UI.
 */



/**
 * @class UHorizonSettings
 * @brief Global configuration settings for the Horizon WebSocket plugin
 * 
 * This class provides comprehensive configuration options for the Horizon plugin,
 * accessible through Project Settings > Plugins > Horizon. Settings are organized
 * into logical categories covering WebSocket defaults, performance tuning, logging,
 * security, and development features.
 * 
 * All settings are automatically saved to the project's configuration files and
 * can be accessed at runtime through static getter functions. Settings changes
 * in the editor are validated and applied immediately.
 * 
 * @note Settings changes require editor restart for some advanced options
 * @see Project Settings > Plugins > Horizon for the settings UI
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Horizon"))
class HORIZON_API UHorizonSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	/**
	 * Default constructor - initializes all settings to their default values
	 */
	UHorizonSettings();

	/**
	 * @name UDeveloperSettings Interface
	 * @{
	 */

	/**
	 * Gets the category name for organizing settings in the Project Settings UI
	 * @return The category name for this settings class
	 */
	virtual FName GetCategoryName() const;

	/**
	 * Gets the display text for the settings section
	 * @return Localized display text for the settings section
	 */
	virtual FText GetSectionText() const;

	/**
	 * Gets the description text for the settings section
	 * @return Localized description of what these settings control
	 */
	virtual FText GetSectionDescription() const;

#if WITH_EDITOR
	/**
	 * Called when a property is changed in the editor
	 * Validates settings and applies changes immediately
	 * @param PropertyChangedEvent Details about the property change
	 */
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	/** @} */

	/**
	 * @name WebSocket Default Connection Settings
	 * These settings define the default behavior for new WebSocket connections
	 * @{
	 */

	/** Enable heartbeat/ping messages to keep connections alive */
	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Heartbeat Enabled", ToolTip = "Whether new WebSocket connections should send heartbeat messages by default"))
	bool bDefaultHeartbeatEnabled = true;

	/** Interval between heartbeat messages in seconds */
	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Heartbeat Interval", ClampMin = "5.0", ClampMax = "300.0", Units = "s", ToolTip = "Time between heartbeat messages in seconds"))
	float DefaultHeartbeatInterval = 30.0f;

	/** Maximum number of automatic reconnection attempts */
	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Max Reconnect Attempts", ClampMin = "1", ClampMax = "10", ToolTip = "Maximum number of times to attempt reconnection after connection loss"))
	int32 DefaultMaxReconnectAttempts = 3;

	/** Delay between reconnection attempts in seconds */
	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Reconnect Delay", ClampMin = "1.0", ClampMax = "60.0", Units = "s", ToolTip = "Time to wait between reconnection attempts"))
	float DefaultReconnectDelay = 5.0f;

	/** Enable automatic reconnection after connection loss */
	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Auto Reconnect", ToolTip = "Whether connections should automatically attempt to reconnect after being lost"))
	bool bDefaultAutoReconnect = true;

	/** Default message content for heartbeat/ping messages */
	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Heartbeat Message", ToolTip = "Default content for heartbeat messages sent to keep connections alive"))
	FString DefaultHeartbeatMessage = TEXT("ping");

	/** @} */

	/**
	 * @name Logging Settings
	 * Control what events are logged by the Horizon plugin
	 * @{
	 */

	/** Enable detailed verbose logging for debugging */
	UPROPERTY(Config, EditAnywhere, Category = "Logging", meta = (DisplayName = "Enable Verbose Logging", ToolTip = "Enable detailed logging for debugging purposes (may impact performance)"))
	bool bEnableVerboseLogging = false;

	/** Log WebSocket connection and disconnection events */
	UPROPERTY(Config, EditAnywhere, Category = "Logging", meta = (DisplayName = "Log Connection Events", ToolTip = "Log when WebSocket connections are established or lost"))
	bool bLogConnectionEvents = true;

	/** Log message send and receive events */
	UPROPERTY(Config, EditAnywhere, Category = "Logging", meta = (DisplayName = "Log Message Events", ToolTip = "Log when messages are sent or received (may generate a lot of log entries)"))
	bool bLogMessageEvents = false;

	/** Log heartbeat/ping message events */
	UPROPERTY(Config, EditAnywhere, Category = "Logging", meta = (DisplayName = "Log Heartbeat Events", ToolTip = "Log heartbeat/ping message events (may generate frequent log entries)"))
	bool bLogHeartbeatEvents = false;

	/**
	 * @name Security Settings
	 * Security and connection validation settings
	 * @{
	 */

	/** Allow connections to insecure WebSocket servers (ws:// instead of wss://) */
	UPROPERTY(Config, EditAnywhere, Category = "Security", meta = (DisplayName = "Allow Insecure Connections (ws://)", ToolTip = "Allow connections to insecure WebSocket servers (ws:// instead of wss://)"))
	bool bAllowInsecureConnections = true;

	/** Verify SSL certificates for secure connections */
	UPROPERTY(Config, EditAnywhere, Category = "Security", meta = (DisplayName = "Verify SSL Certificates", ToolTip = "Verify SSL certificates for secure WebSocket connections (wss://)"))
	bool bVerifySSLCertificates = true;

	/** Timeout for establishing WebSocket connections */
	UPROPERTY(Config, EditAnywhere, Category = "Security", meta = (DisplayName = "Connection Timeout", ClampMin = "5.0", ClampMax = "120.0", Units = "s", ToolTip = "Timeout for establishing WebSocket connections in seconds"))
	float ConnectionTimeout = 30.0f;

	/** Maximum size of incoming messages in bytes */
	UPROPERTY(Config, EditAnywhere, Category = "Security", meta = (DisplayName = "Max Message Size (bytes)", ClampMin = "1024", ClampMax = "16777216", ToolTip = "Maximum size of incoming messages in bytes"))
	int32 MaxMessageSize = 1048576; // 1MB default

	/** @} */

	/**
	 * @name Advanced Settings
	 * Advanced plugin features and behaviors
	 * @{
	 */

	/** Enable automatic cleanup of unused resources */
	UPROPERTY(Config, EditAnywhere, Category = "Advanced", meta = (DisplayName = "Enable Auto Cleanup", ToolTip = "Enable automatic cleanup of unused resources"))
	bool bEnableAutoCleanup = true;

	/** Enable broadcasting of events to all listeners */
	UPROPERTY(Config, EditAnywhere, Category = "Advanced", meta = (DisplayName = "Enable Global Event Broadcasting", ToolTip = "Enable broadcasting of events to all listeners"))
	bool bEnableGlobalEventBroadcasting = true;

	/** @} */

	/**
	 * @name Development Settings
	 * Development and debugging features (only visible in development builds)
	 * @{
	 */

	/** Enable debug mode with additional logging and validation */
	UPROPERTY(Config, EditAnywhere, Category = "Development", meta = (DisplayName = "Enable Debug Mode", ToolTip = "Enable debug mode with additional logging and validation"))
	bool bEnableDebugMode = false;

	/** List of server URLs for development and testing */
	UPROPERTY(Config, EditAnywhere, Category = "Development", meta = (DisplayName = "Debug Server URLs", EditCondition = "bEnableDebugMode", ToolTip = "List of server URLs for development and testing"))
	TArray<FString> DebugServerURLs = {
		TEXT("ws://localhost:8080"),
		TEXT("ws://localhost:3000"),
		TEXT("wss://echo.websocket.org"),
		TEXT("wss://ws.postman-echo.com/raw")
	};

	/** Automatically connect to the first debug server when playing in editor */
	UPROPERTY(Config, EditAnywhere, Category = "Development", meta = (DisplayName = "Auto Connect in PIE", EditCondition = "bEnableDebugMode", ToolTip = "Automatically connect to the first debug server when playing in editor"))
	bool bAutoConnectInPIE = false;

	/** Simulate connection failures for testing error handling */
	UPROPERTY(Config, EditAnywhere, Category = "Development", meta = (DisplayName = "Force Connection Failures for Testing", EditCondition = "bEnableDebugMode", ToolTip = "Simulate connection failures for testing error handling"))
	bool bSimulateConnectionFailures = false;

	/** @} */

	/**
	 * @name Future Features
	 * Placeholder settings for upcoming features
	 * @{
	 */

	/** Enable HTTP client functionality (coming in future updates) */
	UPROPERTY(Config, EditAnywhere, Category = "Future Features", meta = (DisplayName = "Enable HTTP Client (Coming Soon)", ToolTip = "Enable HTTP client functionality (coming in future updates)"))
	bool bEnableHTTPClient = false;

	/** Enable TCP client functionality (coming in future updates) */
	UPROPERTY(Config, EditAnywhere, Category = "Future Features", meta = (DisplayName = "Enable TCP Client (Coming Soon)", ToolTip = "Enable TCP client functionality (coming in future updates)"))
	bool bEnableTCPClient = false;

	/** Enable UDP client functionality (coming in future updates) */
	UPROPERTY(Config, EditAnywhere, Category = "Future Features", meta = (DisplayName = "Enable UDP Client (Coming Soon)", ToolTip = "Enable UDP client functionality (coming in future updates)"))
	bool bEnableUDPClient = false;

	/** @} */

	/**
	 * @name Runtime Settings Access
	 * Static functions to access settings from Blueprint and C++
	 * @{
	 */

	/** Get the global Horizon settings instance */
	UFUNCTION(BlueprintPure, Category = "Horizon|Settings", meta = (CallInEditor = "true"))
	static UHorizonSettings* GetHorizonSettings();

	/** Get the default heartbeat enabled setting */
	UFUNCTION(BlueprintPure, Category = "Horizon|Settings", meta = (CallInEditor = "true"))
	static bool GetDefaultHeartbeatEnabled();

	/** Get the default heartbeat interval setting */
	UFUNCTION(BlueprintPure, Category = "Horizon|Settings", meta = (CallInEditor = "true"))
	static float GetDefaultHeartbeatInterval();

	/** Get the default maximum reconnect attempts setting */
	UFUNCTION(BlueprintPure, Category = "Horizon|Settings", meta = (CallInEditor = "true"))
	static int32 GetDefaultMaxReconnectAttempts();

	/** Get the default auto reconnect setting */
	UFUNCTION(BlueprintPure, Category = "Horizon|Settings", meta = (CallInEditor = "true"))
	static bool GetDefaultAutoReconnect();

	/** Get the default heartbeat message setting */
	UFUNCTION(BlueprintPure, Category = "Horizon|Settings", meta = (CallInEditor = "true"))
	static FString GetDefaultHeartbeatMessage();

	/** Check if verbose logging is enabled */
	UFUNCTION(BlueprintPure, Category = "Horizon|Settings", meta = (CallInEditor = "true"))
	static bool IsVerboseLoggingEnabled();

	/** Check if debug mode is enabled */
	UFUNCTION(BlueprintPure, Category = "Horizon|Settings", meta = (CallInEditor = "true"))
	static bool IsDebugModeEnabled();

	/** @} */

protected:
	/**
	 * Validates all settings and ensures they are within acceptable ranges
	 * Called automatically when settings are changed
	 */
	void ValidateSettings();
};