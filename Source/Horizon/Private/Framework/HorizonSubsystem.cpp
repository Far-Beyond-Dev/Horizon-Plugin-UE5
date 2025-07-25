#include "Framework/HorizonSubsystem.h"
#include "WebSocket/HorizonWebSocketClient.h"
#include "Core/Horizon.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

void UHorizonSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	UE_LOG(LogHorizon, Log, TEXT("Horizon Subsystem initialized"));
}

void UHorizonSubsystem::Deinitialize()
{
	// Clean up the client
	if (ManagedClient)
	{
		if (ManagedClient->IsConnected())
		{
			ManagedClient->Disconnect();
		}
		UnregisterClientEventHandlers(ManagedClient);
		ManagedClient = nullptr;
	}
	
	UE_LOG(LogHorizon, Log, TEXT("Horizon Subsystem deinitialized"));
	
	Super::Deinitialize();
}

UHorizonWebSocketClient* UHorizonSubsystem::CreateWebSocket()
{
	// Only allow one client per subsystem
	if (ManagedClient)
	{
		UE_LOG(LogHorizon, Warning, TEXT("WebSocket client already exists. Returning existing client."));
		return ManagedClient;
	}

	ManagedClient = NewObject<UHorizonWebSocketClient>(this);
	
	// Initialize the client
	ManagedClient->Initialize();
	
	// Register event handlers
	RegisterClientEventHandlers(ManagedClient);
	
	UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket client created"));
	
	return ManagedClient;
}

UHorizonWebSocketClient* UHorizonSubsystem::GetWebSocket() const
{
	return ManagedClient;
}

bool UHorizonSubsystem::IsConnected() const
{
	return ManagedClient && ManagedClient->IsConnected();
}

FString UHorizonSubsystem::GetHorizonStatus() const
{
	if (!ManagedClient)
	{
		return TEXT("No WebSocket client created");
	}
	
	FString Status = FString::Printf(TEXT("WebSocket Status: %s"), 
		ManagedClient->IsConnected() ? TEXT("Connected") : TEXT("Disconnected"));
	
	return Status;
}

FString UHorizonSubsystem::GetGlobalPerformanceStats(bool bIncludeDetailedStats) const
{
	if (ManagedClient)
	{
		return FString::Printf(TEXT("Connected: %s, State: %s"), 
			ManagedClient->IsConnected() ? TEXT("true") : TEXT("false"),
			*UEnum::GetValueAsString(ManagedClient->GetConnectionState()));
	}
	
	return TEXT("No WebSocket client created");
}

void UHorizonSubsystem::RegisterClientEventHandlers(UHorizonWebSocketClient* Client)
{
	if (!Client)
	{
		return;
	}
	
	// Bind to client events
	Client->OnConnected.AddDynamic(this, &UHorizonSubsystem::HandleClientConnected);
	Client->OnConnectionError.AddDynamic(this, &UHorizonSubsystem::HandleClientConnectionError);
	Client->OnClosed.AddDynamic(this, &UHorizonSubsystem::HandleClientClosed);
}

void UHorizonSubsystem::UnregisterClientEventHandlers(UHorizonWebSocketClient* Client)
{
	if (!Client)
	{
		return;
	}
	
	// Unbind from client events
	Client->OnConnected.RemoveDynamic(this, &UHorizonSubsystem::HandleClientConnected);
	Client->OnConnectionError.RemoveDynamic(this, &UHorizonSubsystem::HandleClientConnectionError);
	Client->OnClosed.RemoveDynamic(this, &UHorizonSubsystem::HandleClientClosed);
}

void UHorizonSubsystem::HandleClientConnected(bool bSuccess)
{
	if (bSuccess)
	{
		UE_LOG(LogHorizon, Log, TEXT("WebSocket client connected successfully"));
		OnClientConnected.Broadcast(true);
	}
	else
	{
		UE_LOG(LogHorizon, Error, TEXT("WebSocket client failed to connect"));
		OnClientConnected.Broadcast(false);
	}
}

void UHorizonSubsystem::HandleClientConnectionError(const FString& ErrorMessage)
{
	UE_LOG(LogHorizon, Error, TEXT("WebSocket client connection error: %s"), *ErrorMessage);
	OnClientConnectionError.Broadcast(ErrorMessage);
}

void UHorizonSubsystem::HandleClientClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	UE_LOG(LogHorizon, Log, TEXT("WebSocket client closed - Code: %d, Reason: %s, Clean: %s"), 
		StatusCode, *Reason, bWasClean ? TEXT("Yes") : TEXT("No"));
	OnClientClosed.Broadcast(StatusCode, Reason, bWasClean);
} 