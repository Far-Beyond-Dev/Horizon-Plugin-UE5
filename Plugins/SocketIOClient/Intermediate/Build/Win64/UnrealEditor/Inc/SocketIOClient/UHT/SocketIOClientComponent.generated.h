// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocketIOClientComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USIOJsonObject;
class USIOJsonValue;
struct FLatentActionInfo;
struct FSIOConnectParams;
#ifdef SOCKETIOCLIENT_SocketIOClientComponent_generated_h
#error "SocketIOClientComponent.generated.h already included, missing '#pragma once' in SocketIOClientComponent.h"
#endif
#define SOCKETIOCLIENT_SocketIOClientComponent_generated_h

#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_11_DELEGATE \
SOCKETIOCLIENT_API void FSIOCEventSignature_DelegateWrapper(const FMulticastScriptDelegate& SIOCEventSignature);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_12_DELEGATE \
SOCKETIOCLIENT_API void FSIOCSocketEventSignature_DelegateWrapper(const FMulticastScriptDelegate& SIOCSocketEventSignature, const FString& Namespace);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_13_DELEGATE \
SOCKETIOCLIENT_API void FSIOCOpenEventSignature_DelegateWrapper(const FMulticastScriptDelegate& SIOCOpenEventSignature, const FString& SocketId, const FString& SessionId, bool bIsReconnection);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_14_DELEGATE \
SOCKETIOCLIENT_API void FSIOCCloseEventSignature_DelegateWrapper(const FMulticastScriptDelegate& SIOCCloseEventSignature, ESIOConnectionCloseReason Reason);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_15_DELEGATE \
SOCKETIOCLIENT_API void FSIOCEventJsonSignature_DelegateWrapper(const FMulticastScriptDelegate& SIOCEventJsonSignature, const FString& EventName, USIOJsonValue* EventData);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_16_DELEGATE \
SOCKETIOCLIENT_API void FSIOConnectionProblemSignature_DelegateWrapper(const FMulticastScriptDelegate& SIOConnectionProblemSignature, int32 Attempts, int32 NextAttemptInMs, float TimeSinceConnected);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_19_DELEGATE \
SOCKETIOCLIENT_API void FSIOJsonValueSignature_DelegateWrapper(const FScriptDelegate& SIOJsonValueSignature, USIOJsonValue* EventData);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execUnbindEvent); \
	DECLARE_FUNCTION(execBindEventToFunction); \
	DECLARE_FUNCTION(execBindEventToGenericEvent); \
	DECLARE_FUNCTION(execBindEventToDelegate); \
	DECLARE_FUNCTION(execEmitWithGraphCallBack); \
	DECLARE_FUNCTION(execEmitWithCallBack); \
	DECLARE_FUNCTION(execEmit); \
	DECLARE_FUNCTION(execLeaveNamespace); \
	DECLARE_FUNCTION(execJoinNamespace); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnectWithParams); \
	DECLARE_FUNCTION(execConnect);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSocketIOClientComponent(); \
	friend struct Z_Construct_UClass_USocketIOClientComponent_Statics; \
public: \
	DECLARE_CLASS(USocketIOClientComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocketIOClient"), NO_API) \
	DECLARE_SERIALIZER(USocketIOClientComponent)


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketIOClientComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketIOClientComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketIOClientComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketIOClientComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USocketIOClientComponent(USocketIOClientComponent&&); \
	USocketIOClientComponent(const USocketIOClientComponent&); \
public:


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_21_PROLOG
#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_24_RPC_WRAPPERS \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_24_INCLASS \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOCKETIOCLIENT_API UClass* StaticClass<class USocketIOClientComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SocketIOClient_Public_SocketIOClientComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
