// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SocketIOClientComponent.h"
#include "SIOJsonValue.h"
#include "SIOJsonObject.h"
#include "ServerManager.generated.h"

/**
 * Structure to hold Socket.IO event binding information.
 * Used to track and manage event listeners for Socket.IO connections.
 */
USTRUCT(BlueprintType)
struct FSocketEventBinding
{
    GENERATED_BODY()

    /** Name of the event to bind to */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket Event")
    FString EventName;

    /** Namespace for the Socket.IO event, defaults to root namespace "/" */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Socket Event")
    FString Namespace;

    /** Default constructor */
    FSocketEventBinding()
        : EventName(TEXT(""))
        , Namespace(TEXT("/"))
    {}

    /** 
     * Constructor with parameters
     * @param InEventName - Name of the event to bind
     * @param InNamespace - Namespace for the event, defaults to root "/"
     */
    FSocketEventBinding(const FString& InEventName, const FString& InNamespace = TEXT("/"))
        : EventName(InEventName)
        , Namespace(InNamespace)
    {}

    /** Equality operator for finding events in containers */
    bool operator==(const FSocketEventBinding& Other) const
    {
        return EventName == Other.EventName && Namespace == Other.Namespace;
    }
};

/** Delegate for successful Socket.IO connection */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FConnectionEstablishedDelegate);

/** Delegate for Socket.IO connection errors */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConnectionErrorDelegate, const FString&, Error);

/**
 * ServerManager component handles Socket.IO connections and event management.
 * This component provides functionality to connect to a Socket.IO server,
 * manage event listeners, and handle connection states.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class HORIZON_API UServerManager : public UActorComponent
{
    GENERATED_BODY()

public:    
    /** Sets default values for this component */
    UServerManager();

    //~ Begin UActorComponent Interface
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    //~ End UActorComponent Interface

    /**
     * Adds a new event listener for Socket.IO events
     * @param EventName - Name of the event to listen for
     * @param Namespace - Socket.IO namespace for the event (optional)
     */
    UFUNCTION(BlueprintCallable, Category = "Server|Events")
    void AddEventListener(const FString& EventName, const FString& Namespace = TEXT("/"));

    /**
     * Removes an existing event listener
     * @param EventName - Name of the event to stop listening for
     * @param Namespace - Socket.IO namespace for the event (optional)
     */
    UFUNCTION(BlueprintCallable, Category = "Server|Events")
    void RemoveEventListener(const FString& EventName, const FString& Namespace = TEXT("/"));

    /** Removes all event listeners */
    UFUNCTION(BlueprintCallable, Category = "Server|Events")
    void ClearEventListeners();

    /** Returns the current list of event listeners */
    UFUNCTION(BlueprintPure, Category = "Server|Events")
    TArray<FSocketEventBinding> GetEventListeners() const;

    /**
     * Connects to a Socket.IO server
     * @param InURL - URL of the Socket.IO server
     * @param bInUseSecure - Whether to use secure connection (WSS/HTTPS)
     * @param bInUseLocalhost - Whether to use localhost connection
     */
    UFUNCTION(BlueprintCallable, Category = "Server|Connection")
    void ConnectToServer(const FString& InURL, bool bInUseSecure = false, bool bInUseLocalhost = false);

    /** Disconnects from the current Socket.IO server */
    UFUNCTION(BlueprintCallable, Category = "Server|Connection")
    void DisconnectFromServer();

    /** Returns whether the component is currently connected to a server */
    UFUNCTION(BlueprintPure, Category = "Server|Connection")
    bool IsConnected() const;

    /** If true, will override server URL with localhost */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server|Config")
    bool bUseLocalhostOverride;

    /** URL to use when localhost override is enabled */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server|Config")
    FString LocalhostURL;

    /**
     * Default event bindings configured in editor
     * Each event requires a corresponding HANDLE_EventName function in the owner actor
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server|Events", 
        meta=(DisplayName="Default Event Bindings", 
              ToolTip="Events listed here will be automatically bound on BeginPlay. Each event requires a corresponding HANDLE_EventName function in the owner actor."))
    TArray<FSocketEventBinding> DefaultEventBindings;

    /** Called when connection to Socket.IO server is established */
    UPROPERTY(BlueprintAssignable, Category = "Server|Events")
    FConnectionEstablishedDelegate OnConnectionEstablished;

    /** Called when a connection error occurs */
    UPROPERTY(BlueprintAssignable, Category = "Server|Events")
    FConnectionErrorDelegate OnConnectionError;

protected:
    /** Socket.IO client component instance */
    UPROPERTY()
    USocketIOClientComponent* SocketIOComponent;

    /** Current server URL */
    FString CurrentURL;

    /** Whether to use secure connection */
    bool bUseSecure;

    /** Whether to use localhost */
    bool bUseLocalhost;

    /** Runtime storage for event bindings */
    UPROPERTY()
    TArray<FSocketEventBinding> EventBindings;

    /**
     * Handles successful Socket.IO connection
     * @param SocketId - ID of the connected socket
     * @param SessionId - Session ID from the server
     * @param bIsReconnection - Whether this is a reconnection
     */
    UFUNCTION()
    void HandleSocketConnected(FString SocketId, FString SessionId, bool bIsReconnection);

    /**
     * Handles Socket.IO connection errors
     * @param Attempts - Number of connection attempts
     * @param NextAttemptInMs - Time until next attempt in milliseconds
     * @param TimeSinceConnected - Time since last successful connection
     */
    UFUNCTION()
    void HandleSocketConnectionError(int32 Attempts, int32 NextAttemptInMs, float TimeSinceConnected);

    /** Initializes the Socket.IO component */
    void InitializeSocketIO();

    /** Binds all registered events to their handlers */
    void BindAllEvents();
}; 