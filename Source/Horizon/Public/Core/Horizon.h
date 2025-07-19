#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/**
 * @file Horizon.h
 * @brief Core module definition for the Horizon WebSocket plugin
 * 
 * This file defines the main module interface for the Horizon plugin, which provides
 * high-performance WebSocket communication capabilities for Unreal Engine 5 projects.
 */

/** 
 * Main log category for the Horizon plugin
 * Use UE_LOG(LogHorizon, LogLevel, TEXT("Message")) for logging throughout the plugin
 */
HORIZON_API DECLARE_LOG_CATEGORY_EXTERN(LogHorizon, Log, All);

/**
 * @class FHorizonModule
 * @brief Core module class for the Horizon WebSocket plugin
 * 
 * This module provides a complete WebSocket communication system optimized for single-client
 * scenarios in Unreal Engine 5. It manages initialization and shutdown of all plugin subsystems
 * including WebSocket connections, thread pools, and high-performance features.
 * 
 * Key Features:
 * - Single WebSocket client per game instance (optimized for single-player games)
 * - Multithreaded message processing with configurable thread pools
 * - High-performance batch and immediate message sending
 * - Full Blueprint and C++ integration
 * 
 * @see UHorizonSubsystem for game-level WebSocket management
 * @see UHorizonUtility for Blueprint integration
 */
class HORIZON_API FHorizonModule : public IModuleInterface
{
public:
	/**
	 * Called when the module is loaded during engine startup
	 * Initializes all plugin subsystems in the correct order
	 */
	virtual void StartupModule() override;

	/**
	 * Called when the module is unloaded during engine shutdown
	 * Cleanly shuts down all plugin subsystems and releases resources
	 */
	virtual void ShutdownModule() override;

	/**
	 * Gets the current plugin version string
	 * @return Version string in format "Major.Minor.Patch"
	 */
	static FString GetVersion() { return TEXT("1.0.0"); }
	
	/**
	 * Checks if the Horizon module is currently loaded and available
	 * @return True if module is loaded, false otherwise
	 */
	static bool IsAvailable() 
	{ 
		return FModuleManager::Get().IsModuleLoaded("Horizon"); 
	}
	
	/**
	 * Gets the singleton instance of the Horizon module
	 * @return Reference to the module instance
	 * @warning Only call this if IsAvailable() returns true
	 */
	static FHorizonModule& Get()
	{
		return FModuleManager::GetModuleChecked<FHorizonModule>("Horizon");
	}

	/**
	 * Checks if WebSocket functionality is available and initialized
	 * @return True if WebSocket system is ready for use
	 */
	bool IsWebSocketAvailable() const { return bWebSocketInitialized; }

	/**
	 * Checks if high-performance features are available and initialized
	 * @return True if high-performance features are ready for use
	 */
	bool IsHighPerformanceAvailable() const { return bHighPerformanceInitialized; }

private:
	/**
	 * @name Subsystem Initialization Functions
	 * These functions handle the startup and shutdown of individual plugin subsystems
	 * @{
	 */

	/** Initialize WebSocket core functionality */
	void InitializeWebSocket();
	/** Shutdown WebSocket core functionality */
	void ShutdownWebSocket();
	
	/** Initialize high-performance messaging features */
	void InitializeHighPerformance();
	/** Shutdown high-performance messaging features */
	void ShutdownHighPerformance();

	/** @} */

	/**
	 * @name Module State Flags
	 * These flags track the initialization state of each plugin subsystem
	 * @{
	 */

	/** True if WebSocket core is initialized and ready */
	bool bWebSocketInitialized = false;
	/** True if high-performance features are initialized and ready */
	bool bHighPerformanceInitialized = false;

	/** @} */
};