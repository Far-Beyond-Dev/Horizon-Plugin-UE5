// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SIOJsonValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USIOJsonObject;
class USIOJsonValue;
#ifdef SIOJSON_SIOJsonValue_generated_h
#error "SIOJsonValue.generated.h already included, missing '#pragma once' in SIOJsonValue.h"
#endif
#define SIOJSON_SIOJsonValue_generated_h

#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h_76_RPC_WRAPPERS \
	DECLARE_FUNCTION(execEncodeJson); \
	DECLARE_FUNCTION(execAsBinary); \
	DECLARE_FUNCTION(execAsObject); \
	DECLARE_FUNCTION(execAsArray); \
	DECLARE_FUNCTION(execAsBool); \
	DECLARE_FUNCTION(execAsString); \
	DECLARE_FUNCTION(execAsNumber); \
	DECLARE_FUNCTION(execIsNull); \
	DECLARE_FUNCTION(execGetTypeString); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execValueFromJsonString); \
	DECLARE_FUNCTION(execConstructJsonValueBinary); \
	DECLARE_FUNCTION(execConstructJsonValueObject); \
	DECLARE_FUNCTION(execConstructJsonValueArray); \
	DECLARE_FUNCTION(execConstructJsonValueBool); \
	DECLARE_FUNCTION(execConstructJsonValueString); \
	DECLARE_FUNCTION(execConstructJsonValueNumber);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUSIOJsonValue(); \
	friend struct Z_Construct_UClass_USIOJsonValue_Statics; \
public: \
	DECLARE_CLASS(USIOJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SIOJson"), NO_API) \
	DECLARE_SERIALIZER(USIOJsonValue)


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIOJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIOJsonValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIOJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIOJsonValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIOJsonValue(USIOJsonValue&&); \
	USIOJsonValue(const USIOJsonValue&); \
public: \
	NO_API virtual ~USIOJsonValue();


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h_73_PROLOG
#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h_76_RPC_WRAPPERS \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h_76_INCLASS \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIOJSON_API UClass* StaticClass<class USIOJsonValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonValue_h


#define FOREACH_ENUM_ESIOJSON(op) \
	op(ESIOJson::None) \
	op(ESIOJson::Null) \
	op(ESIOJson::String) \
	op(ESIOJson::Number) \
	op(ESIOJson::Boolean) \
	op(ESIOJson::Array) \
	op(ESIOJson::Object) \
	op(ESIOJson::Binary) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
