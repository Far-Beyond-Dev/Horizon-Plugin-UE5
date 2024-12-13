// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SIOJRequestJSON.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USIOJRequestJSON;
class USIOJsonObject;
enum class ESIORequestContentType : uint8;
enum class ESIORequestStatus : uint8;
enum class ESIORequestVerb : uint8;
struct FLatentActionInfo;
#ifdef SIOJSON_SIOJRequestJSON_generated_h
#error "SIOJRequestJSON.generated.h already included, missing '#pragma once' in SIOJRequestJSON.h"
#endif
#define SIOJSON_SIOJRequestJSON_generated_h

#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_76_DELEGATE \
SIOJSON_API void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, USIOJRequestJSON* Request);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_77_DELEGATE \
SIOJSON_API void FOnRequestFail_DelegateWrapper(const FMulticastScriptDelegate& OnRequestFail, USIOJRequestJSON* Request);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_89_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execApplyURL); \
	DECLARE_FUNCTION(execProcessURL); \
	DECLARE_FUNCTION(execGetAllResponseHeaders); \
	DECLARE_FUNCTION(execGetResponseHeader); \
	DECLARE_FUNCTION(execGetResponseCode); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetURL); \
	DECLARE_FUNCTION(execSetResponseObject); \
	DECLARE_FUNCTION(execGetResponseObject); \
	DECLARE_FUNCTION(execSetRequestObject); \
	DECLARE_FUNCTION(execGetRequestObject); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResetResponseData); \
	DECLARE_FUNCTION(execResetRequestData); \
	DECLARE_FUNCTION(execResetData); \
	DECLARE_FUNCTION(execSetHeader); \
	DECLARE_FUNCTION(execSetBinaryRequestContent); \
	DECLARE_FUNCTION(execSetBinaryContentType); \
	DECLARE_FUNCTION(execSetContentType); \
	DECLARE_FUNCTION(execSetCustomVerb); \
	DECLARE_FUNCTION(execSetVerb); \
	DECLARE_FUNCTION(execConstructRequestExt); \
	DECLARE_FUNCTION(execConstructRequest);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUSIOJRequestJSON(); \
	friend struct Z_Construct_UClass_USIOJRequestJSON_Statics; \
public: \
	DECLARE_CLASS(USIOJRequestJSON, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SIOJson"), NO_API) \
	DECLARE_SERIALIZER(USIOJRequestJSON)


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIOJRequestJSON(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIOJRequestJSON) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIOJRequestJSON); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIOJRequestJSON); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIOJRequestJSON(USIOJRequestJSON&&); \
	USIOJRequestJSON(const USIOJRequestJSON&); \
public: \
	NO_API virtual ~USIOJRequestJSON();


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_86_PROLOG
#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_89_RPC_WRAPPERS \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_89_INCLASS \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIOJSON_API UClass* StaticClass<class USIOJRequestJSON>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
