#include "Config/HorizonSettings.h"
#include "Core/Horizon.h"

#define LOCTEXT_NAMESPACE "HorizonSettings"

UHorizonSettings::UHorizonSettings()
{
	CategoryName = TEXT("Plugins");
	SectionName = TEXT("Horizon");

	// Validate settings on construction
	ValidateSettings();
}

FName UHorizonSettings::GetCategoryName() const
{
	return FName(TEXT("Plugins"));
}

FText UHorizonSettings::GetSectionText() const
{
	return LOCTEXT("HorizonSettingsName", "Horizon");
}

FText UHorizonSettings::GetSectionDescription() const
{
	return LOCTEXT("HorizonSettingsDescription", "Configure the Horizon plugin settings including WebSocket connection parameters, logging, performance options, and future features. Horizon is designed for massive expansion beyond WebSocket functionality.");
}

#if WITH_EDITOR
void UHorizonSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	ValidateSettings();

	// Save config after validation
	SaveConfig();

	UE_LOG(LogHorizon, Log, TEXT("Horizon plugin settings updated"));
}
#endif

void UHorizonSettings::ValidateSettings()
{
	// Clamp values to valid ranges
	DefaultHeartbeatInterval = FMath::Clamp(DefaultHeartbeatInterval, 5.0f, 300.0f);
	DefaultMaxReconnectAttempts = FMath::Clamp(DefaultMaxReconnectAttempts, 1, 10);
	DefaultReconnectDelay = FMath::Clamp(DefaultReconnectDelay, 1.0f, 60.0f);
	ConnectionTimeout = FMath::Clamp(ConnectionTimeout, 5.0f, 120.0f);
	MaxMessageSize = FMath::Clamp(MaxMessageSize, 1024, 16777216); // 1KB to 16MB

	// Validate heartbeat message
	if (DefaultHeartbeatMessage.IsEmpty())
	{
		DefaultHeartbeatMessage = TEXT("ping");
	}

	// Clean up debug server URLs
	for (int32 i = DebugServerURLs.Num() - 1; i >= 0; --i)
	{
		if (DebugServerURLs[i].IsEmpty())
		{
			DebugServerURLs.RemoveAt(i);
		}
	}

	// Ensure we have at least one debug URL if debug mode is enabled
	if (bEnableDebugMode && DebugServerURLs.Num() == 0)
	{
		DebugServerURLs.Add(TEXT("wss://echo.websocket.org"));
	}
}

UHorizonSettings* UHorizonSettings::GetHorizonSettings()
{
	return GetMutableDefault<UHorizonSettings>();
}

bool UHorizonSettings::GetDefaultHeartbeatEnabled()
{
	const UHorizonSettings* Settings = GetDefault<UHorizonSettings>();
	return Settings ? Settings->bDefaultHeartbeatEnabled : true;
}

float UHorizonSettings::GetDefaultHeartbeatInterval()
{
	const UHorizonSettings* Settings = GetDefault<UHorizonSettings>();
	return Settings ? Settings->DefaultHeartbeatInterval : 30.0f;
}

int32 UHorizonSettings::GetDefaultMaxReconnectAttempts()
{
	const UHorizonSettings* Settings = GetDefault<UHorizonSettings>();
	return Settings ? Settings->DefaultMaxReconnectAttempts : 3;
}

bool UHorizonSettings::GetDefaultAutoReconnect()
{
	const UHorizonSettings* Settings = GetDefault<UHorizonSettings>();
	return Settings ? Settings->bDefaultAutoReconnect : true;
}

FString UHorizonSettings::GetDefaultHeartbeatMessage()
{
	const UHorizonSettings* Settings = GetDefault<UHorizonSettings>();
	return Settings ? Settings->DefaultHeartbeatMessage : TEXT("ping");
}

bool UHorizonSettings::IsVerboseLoggingEnabled()
{
	const UHorizonSettings* Settings = GetDefault<UHorizonSettings>();
	return Settings ? Settings->bEnableVerboseLogging : false;
}

bool UHorizonSettings::IsDebugModeEnabled()
{
	const UHorizonSettings* Settings = GetDefault<UHorizonSettings>();
	return Settings ? Settings->bEnableDebugMode : false;
}

#undef LOCTEXT_NAMESPACE