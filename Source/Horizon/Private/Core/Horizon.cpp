#include "Core/Horizon.h"
#include "Config/HorizonSettings.h"

#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#include <winsock2.h>
#include <ws2tcpip.h>
#include "Windows/HideWindowsPlatformTypes.h"
#endif

#define LOCTEXT_NAMESPACE "FHorizonModule"

DEFINE_LOG_CATEGORY(LogHorizon);

void FHorizonModule::StartupModule()
{
	UE_LOG(LogHorizon, Log, TEXT("Horizon Module v%s starting up"), *GetVersion());
	
	bWebSocketInitialized = false;
	
	// Initialize subsystems in order
	InitializeWebSocket();
	
	UE_LOG(LogHorizon, Log, TEXT("Horizon Module initialized successfully"));
}

void FHorizonModule::ShutdownModule()
{
	UE_LOG(LogHorizon, Log, TEXT("Horizon Module shutting down"));
	
	// Shutdown in reverse order
	ShutdownWebSocket();
	
	UE_LOG(LogHorizon, Log, TEXT("Horizon Module shutdown complete"));
}

void FHorizonModule::InitializeWebSocket()
{
	// Initialize platform-specific networking
#if PLATFORM_WINDOWS
	WSADATA WsaData;
	int Result = WSAStartup(MAKEWORD(2, 2), &WsaData);
	if (Result != 0)
	{
		UE_LOG(LogHorizon, Error, TEXT("WSAStartup failed with error: %d"), Result);
		bWebSocketInitialized = false;
		return;
	}
#endif

	bWebSocketInitialized = true;
	UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket system initialized"));
}

void FHorizonModule::ShutdownWebSocket()
{
	if (bWebSocketInitialized)
	{
#if PLATFORM_WINDOWS
		WSACleanup();
#endif
		bWebSocketInitialized = false;
		UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket system shutdown"));
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FHorizonModule, Horizon)