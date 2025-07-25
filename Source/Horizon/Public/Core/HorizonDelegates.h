
#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/Engine.h"
#include "HorizonDelegates.generated.h"

/**
 * @file HorizonDelegates.h
 * @brief Centralized delegate declarations for Horizon WebSocket plugin
 * 
 * This file contains all Blueprint-compatible delegate declarations used throughout
 * the Horizon plugin. Centralizing delegates prevents redefinition issues and
 * provides a single point of reference for all WebSocket event signatures.
 */

/**
 * Delegate fired when a WebSocket connection is established or fails
 * @param bSuccess True if connection was successful, false otherwise
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonWebSocketConnected, bool, bSuccess);

/**
 * Delegate fired when a WebSocket connection encounters an error
 * @param ErrorMessage Human-readable error description
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonWebSocketConnectionError, const FString&, ErrorMessage);

/**
 * Delegate fired when a WebSocket connection is closed
 * @param StatusCode WebSocket close status code (1000 = normal closure)
 * @param Reason Human-readable reason for closure
 * @param bWasClean True if connection was closed cleanly, false if it was abrupt
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHorizonWebSocketClosed, int32, StatusCode, const FString&, Reason, bool, bWasClean);

/**
 * Delegate fired when a text message is received via WebSocket
 * @param Message The received text message content
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonWebSocketMessage, const FString&, Message);

/**
 * Delegate fired when binary data is received via WebSocket
 * @param Data The received binary data as byte array
 * @param Size The size of the received data in bytes
 * @param BytesRemaining Number of bytes remaining in multi-part messages (0 if complete)
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHorizonWebSocketRawMessage, const TArray<uint8>&, Data, int32, Size, int32, BytesRemaining);

/**
 * Delegate fired when a message has been successfully sent via WebSocket
 * @param Message The message that was sent (for confirmation/logging purposes)
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonWebSocketMessageSent, const FString&, Message);

/**
 * @class UHorizonDelegateContainer
 * @brief Container class to ensure Unreal Header Tool processes delegate declarations
 * 
 * This class exists solely to trigger UHT processing of the delegate declarations above.
 * UHT requires at least one UCLASS in a file to process DECLARE_DYNAMIC_MULTICAST_DELEGATE macros.
 * This container serves no functional purpose beyond compilation requirements.
 */
UCLASS()
class HORIZON_API UHorizonDelegateContainer : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Default constructor
	 * This class is never instantiated and serves only as a compilation requirement
	 */
	UHorizonDelegateContainer() {}
};