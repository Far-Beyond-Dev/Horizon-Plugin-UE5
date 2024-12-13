// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Horizon/Public/ServerManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
HORIZON_API UClass* Z_Construct_UClass_UServerManager();
HORIZON_API UClass* Z_Construct_UClass_UServerManager_NoRegister();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_ConnectionEstablishedDelegate__DelegateSignature();
HORIZON_API UScriptStruct* Z_Construct_UScriptStruct_FSocketEventBinding();
SOCKETIOCLIENT_API UClass* Z_Construct_UClass_USocketIOClientComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Horizon();
// End Cross Module References

// Begin ScriptStruct FSocketEventBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SocketEventBinding;
class UScriptStruct* FSocketEventBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SocketEventBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SocketEventBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocketEventBinding, (UObject*)Z_Construct_UPackage__Script_Horizon(), TEXT("SocketEventBinding"));
	}
	return Z_Registration_Info_UScriptStruct_SocketEventBinding.OuterSingleton;
}
template<> HORIZON_API UScriptStruct* StaticStruct<FSocketEventBinding>()
{
	return FSocketEventBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSocketEventBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure to hold Socket.IO event binding information.\n * Used to track and manage event listeners for Socket.IO connections.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to hold Socket.IO event binding information.\nUsed to track and manage event listeners for Socket.IO connections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "Category", "Socket Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the event to bind to */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the event to bind to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "Category", "Socket Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Namespace for the Socket.IO event, defaults to root namespace \"/\" */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Namespace for the Socket.IO event, defaults to root namespace \"/\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocketEventBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocketEventBinding_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketEventBinding, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocketEventBinding_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketEventBinding, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocketEventBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketEventBinding_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketEventBinding_Statics::NewProp_Namespace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketEventBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocketEventBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Horizon,
	nullptr,
	&NewStructOps,
	"SocketEventBinding",
	Z_Construct_UScriptStruct_FSocketEventBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketEventBinding_Statics::PropPointers),
	sizeof(FSocketEventBinding),
	alignof(FSocketEventBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketEventBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSocketEventBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSocketEventBinding()
{
	if (!Z_Registration_Info_UScriptStruct_SocketEventBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SocketEventBinding.InnerSingleton, Z_Construct_UScriptStruct_FSocketEventBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SocketEventBinding.InnerSingleton;
}
// End ScriptStruct FSocketEventBinding

// Begin Delegate FConnectionEstablishedDelegate
struct Z_Construct_UDelegateFunction_Horizon_ConnectionEstablishedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for successful Socket.IO connection */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for successful Socket.IO connection" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Horizon_ConnectionEstablishedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Horizon, nullptr, "ConnectionEstablishedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_ConnectionEstablishedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Horizon_ConnectionEstablishedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Horizon_ConnectionEstablishedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Horizon_ConnectionEstablishedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FConnectionEstablishedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ConnectionEstablishedDelegate)
{
	ConnectionEstablishedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FConnectionEstablishedDelegate

// Begin Delegate FConnectionErrorDelegate
struct Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics
{
	struct _Script_Horizon_eventConnectionErrorDelegate_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for Socket.IO connection errors */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for Socket.IO connection errors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Horizon_eventConnectionErrorDelegate_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Horizon, nullptr, "ConnectionErrorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::_Script_Horizon_eventConnectionErrorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::_Script_Horizon_eventConnectionErrorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FConnectionErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& ConnectionErrorDelegate, const FString& Error)
{
	struct _Script_Horizon_eventConnectionErrorDelegate_Parms
	{
		FString Error;
	};
	_Script_Horizon_eventConnectionErrorDelegate_Parms Parms;
	Parms.Error=Error;
	ConnectionErrorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FConnectionErrorDelegate

// Begin Class UServerManager Function AddEventListener
struct Z_Construct_UFunction_UServerManager_AddEventListener_Statics
{
	struct ServerManager_eventAddEventListener_Parms
	{
		FString EventName;
		FString Namespace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Server|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Adds a new event listener for Socket.IO events\n     * @param EventName - Name of the event to listen for\n     * @param Namespace - Socket.IO namespace for the event (optional)\n     */" },
#endif
		{ "CPP_Default_Namespace", "/" },
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a new event listener for Socket.IO events\n@param EventName - Name of the event to listen for\n@param Namespace - Socket.IO namespace for the event (optional)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerManager_AddEventListener_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerManager_eventAddEventListener_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerManager_AddEventListener_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerManager_eventAddEventListener_Parms, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerManager_AddEventListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_AddEventListener_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_AddEventListener_Statics::NewProp_Namespace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_AddEventListener_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerManager_AddEventListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerManager, nullptr, "AddEventListener", nullptr, nullptr, Z_Construct_UFunction_UServerManager_AddEventListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_AddEventListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerManager_AddEventListener_Statics::ServerManager_eventAddEventListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_AddEventListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerManager_AddEventListener_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerManager_AddEventListener_Statics::ServerManager_eventAddEventListener_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerManager_AddEventListener()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerManager_AddEventListener_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerManager::execAddEventListener)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Namespace);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddEventListener(Z_Param_EventName,Z_Param_Namespace);
	P_NATIVE_END;
}
// End Class UServerManager Function AddEventListener

// Begin Class UServerManager Function ClearEventListeners
struct Z_Construct_UFunction_UServerManager_ClearEventListeners_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Server|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes all event listeners */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes all event listeners" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerManager_ClearEventListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerManager, nullptr, "ClearEventListeners", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_ClearEventListeners_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerManager_ClearEventListeners_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerManager_ClearEventListeners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerManager_ClearEventListeners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerManager::execClearEventListeners)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearEventListeners();
	P_NATIVE_END;
}
// End Class UServerManager Function ClearEventListeners

// Begin Class UServerManager Function ConnectToServer
struct Z_Construct_UFunction_UServerManager_ConnectToServer_Statics
{
	struct ServerManager_eventConnectToServer_Parms
	{
		FString InURL;
		bool bInUseSecure;
		bool bInUseLocalhost;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Server|Connection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Connects to a Socket.IO server\n     * @param InURL - URL of the Socket.IO server\n     * @param bInUseSecure - Whether to use secure connection (WSS/HTTPS)\n     * @param bInUseLocalhost - Whether to use localhost connection\n     */" },
#endif
		{ "CPP_Default_bInUseLocalhost", "false" },
		{ "CPP_Default_bInUseSecure", "false" },
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Connects to a Socket.IO server\n@param InURL - URL of the Socket.IO server\n@param bInUseSecure - Whether to use secure connection (WSS/HTTPS)\n@param bInUseLocalhost - Whether to use localhost connection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InURL;
	static void NewProp_bInUseSecure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseSecure;
	static void NewProp_bInUseLocalhost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseLocalhost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::NewProp_InURL = { "InURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerManager_eventConnectToServer_Parms, InURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InURL_MetaData), NewProp_InURL_MetaData) };
void Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::NewProp_bInUseSecure_SetBit(void* Obj)
{
	((ServerManager_eventConnectToServer_Parms*)Obj)->bInUseSecure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::NewProp_bInUseSecure = { "bInUseSecure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ServerManager_eventConnectToServer_Parms), &Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::NewProp_bInUseSecure_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::NewProp_bInUseLocalhost_SetBit(void* Obj)
{
	((ServerManager_eventConnectToServer_Parms*)Obj)->bInUseLocalhost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::NewProp_bInUseLocalhost = { "bInUseLocalhost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ServerManager_eventConnectToServer_Parms), &Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::NewProp_bInUseLocalhost_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::NewProp_InURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::NewProp_bInUseSecure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::NewProp_bInUseLocalhost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerManager, nullptr, "ConnectToServer", nullptr, nullptr, Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::ServerManager_eventConnectToServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::ServerManager_eventConnectToServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerManager_ConnectToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerManager_ConnectToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerManager::execConnectToServer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InURL);
	P_GET_UBOOL(Z_Param_bInUseSecure);
	P_GET_UBOOL(Z_Param_bInUseLocalhost);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectToServer(Z_Param_InURL,Z_Param_bInUseSecure,Z_Param_bInUseLocalhost);
	P_NATIVE_END;
}
// End Class UServerManager Function ConnectToServer

// Begin Class UServerManager Function DisconnectFromServer
struct Z_Construct_UFunction_UServerManager_DisconnectFromServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Server|Connection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Disconnects from the current Socket.IO server */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disconnects from the current Socket.IO server" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerManager_DisconnectFromServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerManager, nullptr, "DisconnectFromServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_DisconnectFromServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerManager_DisconnectFromServer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerManager_DisconnectFromServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerManager_DisconnectFromServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerManager::execDisconnectFromServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectFromServer();
	P_NATIVE_END;
}
// End Class UServerManager Function DisconnectFromServer

// Begin Class UServerManager Function GetEventListeners
struct Z_Construct_UFunction_UServerManager_GetEventListeners_Statics
{
	struct ServerManager_eventGetEventListeners_Parms
	{
		TArray<FSocketEventBinding> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Server|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current list of event listeners */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current list of event listeners" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSocketEventBinding, METADATA_PARAMS(0, nullptr) }; // 260317608
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerManager_eventGetEventListeners_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 260317608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerManager, nullptr, "GetEventListeners", nullptr, nullptr, Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::ServerManager_eventGetEventListeners_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::ServerManager_eventGetEventListeners_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerManager_GetEventListeners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerManager_GetEventListeners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerManager::execGetEventListeners)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSocketEventBinding>*)Z_Param__Result=P_THIS->GetEventListeners();
	P_NATIVE_END;
}
// End Class UServerManager Function GetEventListeners

// Begin Class UServerManager Function HandleSocketConnected
struct Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics
{
	struct ServerManager_eventHandleSocketConnected_Parms
	{
		FString SocketId;
		FString SessionId;
		bool bIsReconnection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Handles successful Socket.IO connection\n     * @param SocketId - ID of the connected socket\n     * @param SessionId - Session ID from the server\n     * @param bIsReconnection - Whether this is a reconnection\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles successful Socket.IO connection\n@param SocketId - ID of the connected socket\n@param SessionId - Session ID from the server\n@param bIsReconnection - Whether this is a reconnection" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SocketId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static void NewProp_bIsReconnection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReconnection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::NewProp_SocketId = { "SocketId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerManager_eventHandleSocketConnected_Parms, SocketId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerManager_eventHandleSocketConnected_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::NewProp_bIsReconnection_SetBit(void* Obj)
{
	((ServerManager_eventHandleSocketConnected_Parms*)Obj)->bIsReconnection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::NewProp_bIsReconnection = { "bIsReconnection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ServerManager_eventHandleSocketConnected_Parms), &Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::NewProp_bIsReconnection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::NewProp_SocketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::NewProp_bIsReconnection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerManager, nullptr, "HandleSocketConnected", nullptr, nullptr, Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::ServerManager_eventHandleSocketConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::ServerManager_eventHandleSocketConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerManager_HandleSocketConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerManager_HandleSocketConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerManager::execHandleSocketConnected)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SocketId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_GET_UBOOL(Z_Param_bIsReconnection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSocketConnected(Z_Param_SocketId,Z_Param_SessionId,Z_Param_bIsReconnection);
	P_NATIVE_END;
}
// End Class UServerManager Function HandleSocketConnected

// Begin Class UServerManager Function HandleSocketConnectionError
struct Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics
{
	struct ServerManager_eventHandleSocketConnectionError_Parms
	{
		int32 Attempts;
		int32 NextAttemptInMs;
		float TimeSinceConnected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Handles Socket.IO connection errors\n     * @param Attempts - Number of connection attempts\n     * @param NextAttemptInMs - Time until next attempt in milliseconds\n     * @param TimeSinceConnected - Time since last successful connection\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles Socket.IO connection errors\n@param Attempts - Number of connection attempts\n@param NextAttemptInMs - Time until next attempt in milliseconds\n@param TimeSinceConnected - Time since last successful connection" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Attempts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextAttemptInMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceConnected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::NewProp_Attempts = { "Attempts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerManager_eventHandleSocketConnectionError_Parms, Attempts), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::NewProp_NextAttemptInMs = { "NextAttemptInMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerManager_eventHandleSocketConnectionError_Parms, NextAttemptInMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::NewProp_TimeSinceConnected = { "TimeSinceConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerManager_eventHandleSocketConnectionError_Parms, TimeSinceConnected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::NewProp_Attempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::NewProp_NextAttemptInMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::NewProp_TimeSinceConnected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerManager, nullptr, "HandleSocketConnectionError", nullptr, nullptr, Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::ServerManager_eventHandleSocketConnectionError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::ServerManager_eventHandleSocketConnectionError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerManager_HandleSocketConnectionError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerManager_HandleSocketConnectionError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerManager::execHandleSocketConnectionError)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Attempts);
	P_GET_PROPERTY(FIntProperty,Z_Param_NextAttemptInMs);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeSinceConnected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSocketConnectionError(Z_Param_Attempts,Z_Param_NextAttemptInMs,Z_Param_TimeSinceConnected);
	P_NATIVE_END;
}
// End Class UServerManager Function HandleSocketConnectionError

// Begin Class UServerManager Function IsConnected
struct Z_Construct_UFunction_UServerManager_IsConnected_Statics
{
	struct ServerManager_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Server|Connection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether the component is currently connected to a server */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the component is currently connected to a server" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UServerManager_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ServerManager_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UServerManager_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ServerManager_eventIsConnected_Parms), &Z_Construct_UFunction_UServerManager_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerManager_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerManager_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerManager, nullptr, "IsConnected", nullptr, nullptr, Z_Construct_UFunction_UServerManager_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerManager_IsConnected_Statics::ServerManager_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerManager_IsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerManager_IsConnected_Statics::ServerManager_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerManager_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerManager_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerManager::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// End Class UServerManager Function IsConnected

// Begin Class UServerManager Function RemoveEventListener
struct Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics
{
	struct ServerManager_eventRemoveEventListener_Parms
	{
		FString EventName;
		FString Namespace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Server|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Removes an existing event listener\n     * @param EventName - Name of the event to stop listening for\n     * @param Namespace - Socket.IO namespace for the event (optional)\n     */" },
#endif
		{ "CPP_Default_Namespace", "/" },
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes an existing event listener\n@param EventName - Name of the event to stop listening for\n@param Namespace - Socket.IO namespace for the event (optional)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerManager_eventRemoveEventListener_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerManager_eventRemoveEventListener_Parms, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::NewProp_Namespace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerManager, nullptr, "RemoveEventListener", nullptr, nullptr, Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::ServerManager_eventRemoveEventListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::ServerManager_eventRemoveEventListener_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerManager_RemoveEventListener()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerManager_RemoveEventListener_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerManager::execRemoveEventListener)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Namespace);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEventListener(Z_Param_EventName,Z_Param_Namespace);
	P_NATIVE_END;
}
// End Class UServerManager Function RemoveEventListener

// Begin Class UServerManager
void UServerManager::StaticRegisterNativesUServerManager()
{
	UClass* Class = UServerManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddEventListener", &UServerManager::execAddEventListener },
		{ "ClearEventListeners", &UServerManager::execClearEventListeners },
		{ "ConnectToServer", &UServerManager::execConnectToServer },
		{ "DisconnectFromServer", &UServerManager::execDisconnectFromServer },
		{ "GetEventListeners", &UServerManager::execGetEventListeners },
		{ "HandleSocketConnected", &UServerManager::execHandleSocketConnected },
		{ "HandleSocketConnectionError", &UServerManager::execHandleSocketConnectionError },
		{ "IsConnected", &UServerManager::execIsConnected },
		{ "RemoveEventListener", &UServerManager::execRemoveEventListener },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UServerManager);
UClass* Z_Construct_UClass_UServerManager_NoRegister()
{
	return UServerManager::StaticClass();
}
struct Z_Construct_UClass_UServerManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ServerManager component handles Socket.IO connections and event management.\n * This component provides functionality to connect to a Socket.IO server,\n * manage event listeners, and handle connection states.\n */" },
#endif
		{ "IncludePath", "ServerManager.h" },
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ServerManager component handles Socket.IO connections and event management.\nThis component provides functionality to connect to a Socket.IO server,\nmanage event listeners, and handle connection states." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalhostOverride_MetaData[] = {
		{ "Category", "Server|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, will override server URL with localhost */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will override server URL with localhost" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalhostURL_MetaData[] = {
		{ "Category", "Server|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** URL to use when localhost override is enabled */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URL to use when localhost override is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEventBindings_MetaData[] = {
		{ "Category", "Server|Events" },
		{ "DisplayName", "Default Event Bindings" },
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events listed here will be automatically bound on BeginPlay. Each event requires a corresponding HANDLE_EventName function in the owner actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectionEstablished_MetaData[] = {
		{ "Category", "Server|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when connection to Socket.IO server is established */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when connection to Socket.IO server is established" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectionError_MetaData[] = {
		{ "Category", "Server|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when a connection error occurs */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a connection error occurs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketIOComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Socket.IO client component instance */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket.IO client component instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventBindings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Runtime storage for event bindings */" },
#endif
		{ "ModuleRelativePath", "Public/ServerManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime storage for event bindings" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUseLocalhostOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalhostOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalhostURL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEventBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultEventBindings;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionEstablished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionError;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SocketIOComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerManager_AddEventListener, "AddEventListener" }, // 3626848552
		{ &Z_Construct_UFunction_UServerManager_ClearEventListeners, "ClearEventListeners" }, // 3695992378
		{ &Z_Construct_UFunction_UServerManager_ConnectToServer, "ConnectToServer" }, // 1894870800
		{ &Z_Construct_UFunction_UServerManager_DisconnectFromServer, "DisconnectFromServer" }, // 1313150248
		{ &Z_Construct_UFunction_UServerManager_GetEventListeners, "GetEventListeners" }, // 830197093
		{ &Z_Construct_UFunction_UServerManager_HandleSocketConnected, "HandleSocketConnected" }, // 942737655
		{ &Z_Construct_UFunction_UServerManager_HandleSocketConnectionError, "HandleSocketConnectionError" }, // 3207755253
		{ &Z_Construct_UFunction_UServerManager_IsConnected, "IsConnected" }, // 2002092863
		{ &Z_Construct_UFunction_UServerManager_RemoveEventListener, "RemoveEventListener" }, // 3995807925
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UServerManager_Statics::NewProp_bUseLocalhostOverride_SetBit(void* Obj)
{
	((UServerManager*)Obj)->bUseLocalhostOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UServerManager_Statics::NewProp_bUseLocalhostOverride = { "bUseLocalhostOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UServerManager), &Z_Construct_UClass_UServerManager_Statics::NewProp_bUseLocalhostOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalhostOverride_MetaData), NewProp_bUseLocalhostOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UServerManager_Statics::NewProp_LocalhostURL = { "LocalhostURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerManager, LocalhostURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalhostURL_MetaData), NewProp_LocalhostURL_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UServerManager_Statics::NewProp_DefaultEventBindings_Inner = { "DefaultEventBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSocketEventBinding, METADATA_PARAMS(0, nullptr) }; // 260317608
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UServerManager_Statics::NewProp_DefaultEventBindings = { "DefaultEventBindings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerManager, DefaultEventBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEventBindings_MetaData), NewProp_DefaultEventBindings_MetaData) }; // 260317608
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UServerManager_Statics::NewProp_OnConnectionEstablished = { "OnConnectionEstablished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerManager, OnConnectionEstablished), Z_Construct_UDelegateFunction_Horizon_ConnectionEstablishedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnectionEstablished_MetaData), NewProp_OnConnectionEstablished_MetaData) }; // 1793689592
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UServerManager_Statics::NewProp_OnConnectionError = { "OnConnectionError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerManager, OnConnectionError), Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnectionError_MetaData), NewProp_OnConnectionError_MetaData) }; // 3668802899
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerManager_Statics::NewProp_SocketIOComponent = { "SocketIOComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerManager, SocketIOComponent), Z_Construct_UClass_USocketIOClientComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketIOComponent_MetaData), NewProp_SocketIOComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UServerManager_Statics::NewProp_EventBindings_Inner = { "EventBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSocketEventBinding, METADATA_PARAMS(0, nullptr) }; // 260317608
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UServerManager_Statics::NewProp_EventBindings = { "EventBindings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UServerManager, EventBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventBindings_MetaData), NewProp_EventBindings_MetaData) }; // 260317608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UServerManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerManager_Statics::NewProp_bUseLocalhostOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerManager_Statics::NewProp_LocalhostURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerManager_Statics::NewProp_DefaultEventBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerManager_Statics::NewProp_DefaultEventBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerManager_Statics::NewProp_OnConnectionEstablished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerManager_Statics::NewProp_OnConnectionError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerManager_Statics::NewProp_SocketIOComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerManager_Statics::NewProp_EventBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerManager_Statics::NewProp_EventBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UServerManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UServerManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Horizon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UServerManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UServerManager_Statics::ClassParams = {
	&UServerManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UServerManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UServerManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UServerManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UServerManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UServerManager()
{
	if (!Z_Registration_Info_UClass_UServerManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UServerManager.OuterSingleton, Z_Construct_UClass_UServerManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UServerManager.OuterSingleton;
}
template<> HORIZON_API UClass* StaticClass<UServerManager>()
{
	return UServerManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UServerManager);
UServerManager::~UServerManager() {}
// End Class UServerManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSocketEventBinding::StaticStruct, Z_Construct_UScriptStruct_FSocketEventBinding_Statics::NewStructOps, TEXT("SocketEventBinding"), &Z_Registration_Info_UScriptStruct_SocketEventBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocketEventBinding), 260317608U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UServerManager, UServerManager::StaticClass, TEXT("UServerManager"), &Z_Registration_Info_UClass_UServerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UServerManager), 1543637401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_2123537614(TEXT("/Script/Horizon"),
	Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
