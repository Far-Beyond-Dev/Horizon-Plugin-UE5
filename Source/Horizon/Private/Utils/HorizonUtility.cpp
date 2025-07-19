#include "Utils/HorizonUtility.h"
#include "WebSocket/HorizonWebSocketClient.h"
#include "Framework/HorizonSubsystem.h"
#include "Core/Horizon.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Misc/Guid.h"
#include "Misc/Base64.h"
#include "HAL/PlatformMisc.h"
#include "HAL/PlatformProcess.h"
#include "Misc/Paths.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"

bool UHorizonUtility::ParseWebSocketURL(const FString& URL, FString& OutProtocol, FString& OutHost, int32& OutPort, FString& OutPath)
{
	if (!IsValidWebSocketURL(URL))
	{
		return false;
	}

	// Extract protocol (ws:// or wss://)
	int32 ProtocolEnd = URL.Find(TEXT("://"));
	if (ProtocolEnd != INDEX_NONE)
	{
		OutProtocol = URL.Left(ProtocolEnd);
		
		// Default port based on protocol
		OutPort = OutProtocol.Equals(TEXT("wss"), ESearchCase::IgnoreCase) ? 443 : 80;
		
		// Extract host, port, and path
		FString HostPortPath = URL.Mid(ProtocolEnd + 3);
		
		// Extract path
		int32 PathStart = HostPortPath.Find(TEXT("/"));
		if (PathStart != INDEX_NONE)
		{
			OutPath = HostPortPath.Mid(PathStart);
			HostPortPath = HostPortPath.Left(PathStart);
		}
		else
		{
			OutPath = TEXT("/");
		}
		
		// Extract port if specified
		int32 PortStart = HostPortPath.Find(TEXT(":"));
		if (PortStart != INDEX_NONE)
		{
			FString PortStr = HostPortPath.Mid(PortStart + 1);
			OutHost = HostPortPath.Left(PortStart);
			
			if (PortStr.IsNumeric())
			{
				OutPort = FCString::Atoi(*PortStr);
			}
		}
		else
		{
			OutHost = HostPortPath;
		}
		
		return true;
	}
	
	return false;
}

bool UHorizonUtility::IsValidWebSocketURL(const FString& URL)
{
	// Basic validation: must start with ws:// or wss://
	if (URL.StartsWith(TEXT("ws://"), ESearchCase::IgnoreCase) || 
		URL.StartsWith(TEXT("wss://"), ESearchCase::IgnoreCase))
	{
		return true;
	}
	
	return false;
}

FString UHorizonUtility::MakeJSONMessage(const FString& Namespace, const FString& Event, const TMap<FString, FString>& Data, bool bAutoAddUUID, bool bAutoAddTimestamp)
{
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	
	// Add namespace and event
	JsonObject->SetStringField(TEXT("namespace"), Namespace);
	JsonObject->SetStringField(TEXT("event"), Event);
	
	// Create a copy of the data to potentially add UUID and timestamp
	TMap<FString, FString> DataWithExtras = Data;
	
	// Automatically add UUID if not present and requested
	if (bAutoAddUUID && !DataWithExtras.Contains(TEXT("uuid")))
	{
		DataWithExtras.Add(TEXT("uuid"), FGuid::NewGuid().ToString());
	}
	
	// Automatically add timestamp if not present and requested
	if (bAutoAddTimestamp && !DataWithExtras.Contains(TEXT("timestamp")))
	{
		DataWithExtras.Add(TEXT("timestamp"), FString::Printf(TEXT("%lld"), FDateTime::Now().ToUnixTimestamp() * 1000));
	}
	
	// Add data as nested object
	TSharedPtr<FJsonObject> DataObject = MakeShareable(new FJsonObject);
	for (const auto& Pair : DataWithExtras)
	{
		DataObject->SetStringField(Pair.Key, Pair.Value);
	}
	
	JsonObject->SetObjectField(TEXT("data"), DataObject);
	
	// Serialize to string
	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	
	return OutputString;
}

bool UHorizonUtility::ParseJSONMessage(const FString& JSONMessage, FString& OutNamespace, FString& OutEvent, FString& OutData)
{
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JSONMessage);
	
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		// Extract namespace and event
		if (JsonObject->HasField(TEXT("namespace")) && JsonObject->HasField(TEXT("event")))
		{
			OutNamespace = JsonObject->GetStringField(TEXT("namespace"));
			OutEvent = JsonObject->GetStringField(TEXT("event"));
			
			// Extract data object as a string
			if (JsonObject->HasField(TEXT("data")))
			{
				TSharedPtr<FJsonObject> DataObject = JsonObject->GetObjectField(TEXT("data"));
				FString DataString;
				TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&DataString);
				FJsonSerializer::Serialize(DataObject.ToSharedRef(), Writer);
				
				OutData = DataString;
				return true;
			}
		}
	}
	
	return false;
}

TArray<uint8> UHorizonUtility::StringToByteArray(const FString& StringData)
{
	TArray<uint8> ByteArray;
	ByteArray.AddUninitialized(StringData.Len());
	
	StringToBytes(StringData, ByteArray.GetData(), StringData.Len());
	
	return ByteArray;
}

FString UHorizonUtility::ByteArrayToString(const TArray<uint8>& ByteData)
{
	if (ByteData.Num() <= 0)
	{
		return FString();
	}
	
	// Create a null-terminated string
	TArray<ANSICHAR> AnsiBuffer;
	AnsiBuffer.AddUninitialized(ByteData.Num() + 1);
	FMemory::Memcpy(AnsiBuffer.GetData(), ByteData.GetData(), ByteData.Num());
	AnsiBuffer[ByteData.Num()] = '\0';
	
	return FString(ANSI_TO_TCHAR(AnsiBuffer.GetData()));
}

FString UHorizonUtility::GenerateClientID()
{
	FGuid Guid = FGuid::NewGuid();
	return Guid.ToString(EGuidFormats::DigitsWithHyphens);
}

FString UHorizonUtility::FormatBytes(int64 Bytes)
{
	const int64 KB = 1024;
	const int64 MB = KB * 1024;
	const int64 GB = MB * 1024;
	
	if (Bytes >= GB)
	{
		return FString::Printf(TEXT("%.2f GB"), (float)Bytes / GB);
	}
	else if (Bytes >= MB)
	{
		return FString::Printf(TEXT("%.2f MB"), (float)Bytes / MB);
	}
	else if (Bytes >= KB)
	{
		return FString::Printf(TEXT("%.2f KB"), (float)Bytes / KB);
	}
	else
	{
		return FString::Printf(TEXT("%lld bytes"), Bytes);
	}
}

FString UHorizonUtility::MakeChatMessage(const FString& PlayerID, const FString& Message, const FString& Channel)
{
	TMap<FString, FString> ChatData;
	ChatData.Add(TEXT("player_id"), PlayerID);
	ChatData.Add(TEXT("message"), Message);
	ChatData.Add(TEXT("channel"), Channel);
	
	return MakeJSONMessage(TEXT("chat"), TEXT("message"), ChatData);
}

FString UHorizonUtility::MakeGameActionMessage(const FString& PlayerID, const FString& Action, const TMap<FString, FString>& AdditionalData)
{
	TMap<FString, FString> GameData;
	GameData.Add(TEXT("player_id"), PlayerID);
	GameData.Add(TEXT("action"), Action);
	
	// Add any additional data
	for (const auto& Pair : AdditionalData)
	{
		GameData.Add(Pair.Key, Pair.Value);
	}
	
	return MakeJSONMessage(TEXT("game"), TEXT("player_action"), GameData);
}

FString UHorizonUtility::MakeSystemMessage(const FString& MessageType, const TMap<FString, FString>& Data)
{
	TMap<FString, FString> SystemData;
	SystemData.Add(TEXT("message_type"), MessageType);
	
	// Add provided data
	for (const auto& Pair : Data)
	{
		SystemData.Add(Pair.Key, Pair.Value);
	}
	
	return MakeJSONMessage(TEXT("system"), MessageType, SystemData);
}

FString UHorizonUtility::MakePlayerStatusMessage(const FString& PlayerID, const FString& Status, const TMap<FString, FString>& AdditionalData)
{
	TMap<FString, FString> StatusData;
	StatusData.Add(TEXT("player_id"), PlayerID);
	StatusData.Add(TEXT("status"), Status);
	
	// Add any additional status data
	for (const auto& Pair : AdditionalData)
	{
		StatusData.Add(Pair.Key, Pair.Value);
	}
	
	return MakeJSONMessage(TEXT("player"), TEXT("status_update"), StatusData);
}



// WebSocket Creation Functions

UHorizonWebSocketClient* UHorizonUtility::CreateWebSocket(const UObject* WorldContext)
{
	UHorizonSubsystem* Subsystem = GetHorizonSubsystem(WorldContext);
	if (!Subsystem)
	{
		return nullptr;
	}

	UHorizonWebSocketClient* Client = Subsystem->CreateWebSocket();
	if (Client)
	{
		UE_LOG(LogHorizon, Log, TEXT("Created WebSocket client"));
	}

	return Client;
}

FString UHorizonUtility::GetPerformanceStatistics(const UObject* WorldContext, bool bIncludeDetailedStats)
{
	return TEXT("Performance monitoring has been removed");
}

FString UHorizonUtility::GetHorizonVersion()
{
	return FHorizonModule::GetVersion();
}

bool UHorizonUtility::IsHorizonFeatureAvailable(const FString& FeatureName)
{
	if (FeatureName.Equals(TEXT("WebSocket"), ESearchCase::IgnoreCase))
	{
		return FHorizonModule::IsAvailable();
	}
	else if (FeatureName.Equals(TEXT("Threading"), ESearchCase::IgnoreCase))
	{
		return true;
	}
	else if (FeatureName.Equals(TEXT("PerformanceMonitoring"), ESearchCase::IgnoreCase))
	{
		return false;
	}
	else if (FeatureName.Equals(TEXT("BatchSending"), ESearchCase::IgnoreCase))
	{
		return true;
	}
	
	return false;
}

// Helper Functions

UHorizonSubsystem* UHorizonUtility::GetHorizonSubsystem(const UObject* WorldContext)
{
	if (!WorldContext)
	{
		return nullptr;
	}

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		return nullptr;
	}

	UGameInstance* GameInstance = World->GetGameInstance();
	if (!GameInstance)
	{
		return nullptr;
	}

	return GameInstance->GetSubsystem<UHorizonSubsystem>();
}