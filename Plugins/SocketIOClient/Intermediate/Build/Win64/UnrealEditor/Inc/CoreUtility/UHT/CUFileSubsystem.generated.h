// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CUFileSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUTILITY_CUFileSubsystem_generated_h
#error "CUFileSubsystem.generated.h already included, missing '#pragma once' in CUFileSubsystem.h"
#endif
#define COREUTILITY_CUFileSubsystem_generated_h

#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteFileAtPath); \
	DECLARE_FUNCTION(execReadBytesFromPath); \
	DECLARE_FUNCTION(execReadBytesFromFile); \
	DECLARE_FUNCTION(execSaveBytesToPath); \
	DECLARE_FUNCTION(execSaveBytesToFile); \
	DECLARE_FUNCTION(execProjectRelativePath); \
	DECLARE_FUNCTION(execSplitFullPath); \
	DECLARE_FUNCTION(execExternalSaveDirectory); \
	DECLARE_FUNCTION(execProjectSavedDirectory); \
	DECLARE_FUNCTION(execProjectDirectory); \
	DECLARE_FUNCTION(execProjectContentsDirectory);


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCUFileSubsystem(); \
	friend struct Z_Construct_UClass_UCUFileSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCUFileSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUtility"), NO_API) \
	DECLARE_SERIALIZER(UCUFileSubsystem)


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUFileSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCUFileSubsystem(UCUFileSubsystem&&); \
	UCUFileSubsystem(const UCUFileSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUFileSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUFileSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCUFileSubsystem) \
	NO_API virtual ~UCUFileSubsystem();


#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_6_PROLOG
#define FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_9_INCLASS_NO_PURE_DECLS \
	FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUTILITY_API UClass* StaticClass<class UCUFileSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
