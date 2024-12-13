// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SIOJ_BreakJson.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIOJEDITORPLUGIN_SIOJ_BreakJson_generated_h
#error "SIOJ_BreakJson.generated.h already included, missing '#pragma once' in SIOJ_BreakJson.h"
#endif
#define SIOJEDITORPLUGIN_SIOJ_BreakJson_generated_h

#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJEditorPlugin_Public_SIOJ_BreakJson_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSIOJ_NamedType_Statics; \
	SIOJEDITORPLUGIN_API static class UScriptStruct* StaticStruct();


template<> SIOJEDITORPLUGIN_API UScriptStruct* StaticStruct<struct FSIOJ_NamedType>();

#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJEditorPlugin_Public_SIOJ_BreakJson_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUSIOJ_BreakJson(); \
	friend struct Z_Construct_UClass_USIOJ_BreakJson_Statics; \
public: \
	DECLARE_CLASS(USIOJ_BreakJson, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SIOJEditorPlugin"), NO_API) \
	DECLARE_SERIALIZER(USIOJ_BreakJson)


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJEditorPlugin_Public_SIOJ_BreakJson_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USIOJ_BreakJson(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USIOJ_BreakJson) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USIOJ_BreakJson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USIOJ_BreakJson); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USIOJ_BreakJson(USIOJ_BreakJson&&); \
	USIOJ_BreakJson(const USIOJ_BreakJson&); \
public: \
	NO_API virtual ~USIOJ_BreakJson();


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJEditorPlugin_Public_SIOJ_BreakJson_h_45_PROLOG
#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJEditorPlugin_Public_SIOJ_BreakJson_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJEditorPlugin_Public_SIOJ_BreakJson_h_48_INCLASS \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJEditorPlugin_Public_SIOJ_BreakJson_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIOJEDITORPLUGIN_API UClass* StaticClass<class USIOJ_BreakJson>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJEditorPlugin_Public_SIOJ_BreakJson_h


#define FOREACH_ENUM_ESIOJ_JSONTYPE(op) \
	op(ESIOJ_JsonType::JSON_Bool) \
	op(ESIOJ_JsonType::JSON_Number) \
	op(ESIOJ_JsonType::JSON_String) \
	op(ESIOJ_JsonType::JSON_Object) 

enum class ESIOJ_JsonType : uint8;
template<> struct TIsUEnumClass<ESIOJ_JsonType> { enum { Value = true }; };
template<> SIOJEDITORPLUGIN_API UEnum* StaticEnum<ESIOJ_JsonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
