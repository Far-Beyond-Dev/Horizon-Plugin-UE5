// Copyright Epic Games, Inc. All Rights Reserved.

#include "ServerManager.h"
#include "SocketIOClientComponent.h"
#include "SIOJsonValue.h"
#include "SIOJConvert.h"

/**
 * Sets default values for the component's properties
 */
UServerManager::UServerManager()
{
    // Disable tick by default as we don't need it
    PrimaryComponentTick.bCanEverTick = false;

    // Initialize member variables with safe defaults
    SocketIOComponent = nullptr;
    bUseLocalhostOverride = false;
    LocalhostURL = TEXT("http://localhost:3000");
    CurrentURL = TEXT("");
    bUseSecure = false;
    bUseLocalhost = false;
}

/**
 * Called when the game starts or when spawned
 * Initializes Socket.IO connection and binds default events
 */
void UServerManager::BeginPlay()
{
    Super::BeginPlay();

    // Add default event bindings to runtime bindings
    for (const FSocketEventBinding& Binding : DefaultEventBindings)
    {
        AddEventListener(Binding.EventName, Binding.Namespace);
    }

    // Initialize Socket.IO connection
    InitializeSocketIO();
}

/**
 * Called when the game ends or when destroyed
 * Ensures proper cleanup of Socket.IO connection
 */
void UServerManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    DisconnectFromServer();
}

/**
 * Initializes the Socket.IO component and sets up connection handlers
 */
void UServerManager::InitializeSocketIO()
{
    // Create Socket.IO component if it doesn't exist
    if (!SocketIOComponent)
    {
        SocketIOComponent = NewObject<USocketIOClientComponent>(this);
        SocketIOComponent->RegisterComponent();

        // Bind to Socket.IO connection events
        SocketIOComponent->OnConnected.AddDynamic(this, &UServerManager::HandleSocketConnected);
        SocketIOComponent->OnConnectionProblems.AddDynamic(this, &UServerManager::HandleSocketConnectionError);

        // Bind all registered events
        BindAllEvents();
    }
}

/**
 * Establishes connection to a Socket.IO server
 * @param InURL - The server URL to connect to
 * @param bInUseSecure - Whether to use secure WebSocket connection
 * @param bInUseLocalhost - Whether to use localhost connection
 */
void UServerManager::ConnectToServer(const FString& InURL, bool bInUseSecure, bool bInUseLocalhost)
{
    // Store connection parameters
    CurrentURL = InURL;
    bUseSecure = bInUseSecure;
    bUseLocalhost = bInUseLocalhost;

    // Apply localhost override if enabled
    if (bUseLocalhostOverride)
    {
        CurrentURL = LocalhostURL;
        bUseSecure = false;
    }

    // Ensure Socket.IO component exists
    InitializeSocketIO();

    // Configure Socket.IO connection parameters
    SocketIOComponent->bShouldAutoConnect = false;
    SocketIOComponent->bWantsInitializeComponent = true;
    SocketIOComponent->bForceTLS = bUseSecure;
    SocketIOComponent->URLParams.AddressAndPort = CurrentURL;

    // Initiate connection
    SocketIOComponent->Connect(CurrentURL);
}

/**
 * Disconnects from the current Socket.IO server
 */
void UServerManager::DisconnectFromServer()
{
    if (SocketIOComponent)
    {
        SocketIOComponent->Disconnect();
    }
}

/**
 * Checks if currently connected to a Socket.IO server
 * @return bool - True if connected, false otherwise
 */
bool UServerManager::IsConnected() const
{
    return SocketIOComponent && SocketIOComponent->bIsConnected;
}

/**
 * Handles successful Socket.IO connection
 * Binds events and broadcasts connection success
 */
void UServerManager::HandleSocketConnected(FString SocketId, FString SessionId, bool bIsReconnection)
{
    UE_LOG(LogTemp, Warning, TEXT("Socket Connected - ID: %s, Session: %s"), *SocketId, *SessionId);

    // Bind events only after connection is established
    GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
    {
        UE_LOG(LogTemp, Warning, TEXT("Binding events after connection..."));
        BindAllEvents();
        OnConnectionEstablished.Broadcast();
    });
}

/**
 * Handles Socket.IO connection errors
 * Broadcasts error information to listeners
 */
void UServerManager::HandleSocketConnectionError(int32 Attempts, int32 NextAttemptInMs, float TimeSinceConnected)
{
    FString ErrorMessage = FString::Printf(TEXT("Connection Error - Attempt: %d, Next Attempt In: %dms"), Attempts, NextAttemptInMs);
    OnConnectionError.Broadcast(ErrorMessage);
}

/**
 * Adds a new event listener to the Socket.IO connection
 * @param EventName - The name of the event to listen for
 * @param Namespace - The Socket.IO namespace for the event
 */
void UServerManager::AddEventListener(const FString& EventName, const FString& Namespace)
{
    // Create new binding
    FSocketEventBinding NewBinding(EventName, Namespace);

    // Check if binding already exists
    if (!EventBindings.Contains(NewBinding))
    {
        UE_LOG(LogTemp, Warning, TEXT("Adding event listener for: %s on namespace: %s"), *EventName, *Namespace);
        EventBindings.Add(NewBinding);
        
        // Only bind immediately if we're already connected
        if (IsConnected())
        {
            UE_LOG(LogTemp, Warning, TEXT("Socket connected, binding event now"));
            SocketIOComponent->UnbindEvent(EventName, Namespace);
            
            // Create the handler function name and bind
            FString HandlerFunctionName = FString::Printf(TEXT("HANDLE_%s"), *EventName);
            SocketIOComponent->BindEventToFunction(EventName, HandlerFunctionName, GetOwner(), Namespace);
        }
    }
}

/**
 * Removes an event listener from the Socket.IO connection
 * @param EventName - The name of the event to stop listening for
 * @param Namespace - The Socket.IO namespace for the event
 */
void UServerManager::RemoveEventListener(const FString& EventName, const FString& Namespace)
{
    FSocketEventBinding BindingToRemove(EventName, Namespace);
    
    // Remove from our tracking array
    EventBindings.Remove(BindingToRemove);

    // Unbind from socket if it exists
    if (SocketIOComponent)
    {
        SocketIOComponent->UnbindEvent(EventName, Namespace);
    }
}

/**
 * Removes all event listeners from the Socket.IO connection
 */
void UServerManager::ClearEventListeners()
{
    // Unbind all events if socket exists
    if (SocketIOComponent)
    {
        for (const FSocketEventBinding& Binding : EventBindings)
        {
            SocketIOComponent->UnbindEvent(Binding.EventName, Binding.Namespace);
        }
    }

    // Clear the array
    EventBindings.Empty();
}

/**
 * Gets the current list of event listeners
 * @return TArray<FSocketEventBinding> - Array of current event bindings
 */
TArray<FSocketEventBinding> UServerManager::GetEventListeners() const
{
    return EventBindings;
}

/**
 * Binds all registered events to their corresponding handler functions
 * Each event will be bound to a function named HANDLE_EventName in the owner actor
 */
void UServerManager::BindAllEvents()
{
    if (!SocketIOComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("Cannot bind events - SocketIOComponent is null"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("Starting to bind all events..."));

    // Bind each specific event
    for (const FSocketEventBinding& Binding : EventBindings)
    {
        UE_LOG(LogTemp, Warning, TEXT("Binding event: %s on namespace: %s"), *Binding.EventName, *Binding.Namespace);
        
        // Unbind first to prevent duplicates
        SocketIOComponent->UnbindEvent(Binding.EventName, Binding.Namespace);
        
        // Create the handler function name
        FString HandlerFunctionName = FString::Printf(TEXT("HANDLE_%s"), *Binding.EventName);
        
        // Bind directly to the handler function
        SocketIOComponent->BindEventToFunction(Binding.EventName, HandlerFunctionName, GetOwner(), Binding.Namespace);
    }

    UE_LOG(LogTemp, Warning, TEXT("Finished binding %d events"), EventBindings.Num());

    // Log connection status
    if (SocketIOComponent->bIsConnected)
    {
        UE_LOG(LogTemp, Warning, TEXT("Socket is connected and ready to receive events"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Socket is NOT connected - events may not be received"));
    }
}
