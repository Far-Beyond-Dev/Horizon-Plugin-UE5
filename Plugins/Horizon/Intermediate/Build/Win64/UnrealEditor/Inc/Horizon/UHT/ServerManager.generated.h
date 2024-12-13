// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ServerManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSocketEventBinding;
#ifdef HORIZON_ServerManager_generated_h
#error "ServerManager.generated.h already included, missing '#pragma once' in ServerManager.h"
#endif
#define HORIZON_ServerManager_generated_h

#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSocketEventBinding_Statics; \
	HORIZON_API static class UScriptStruct* StaticStruct();


template<> HORIZON_API UScriptStruct* StaticStruct<struct FSocketEventBinding>();

#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_53_DELEGATE \
HORIZON_API void FConnectionEstablishedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ConnectionEstablishedDelegate);


#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_56_DELEGATE \
HORIZON_API void FConnectionErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& ConnectionErrorDelegate, const FString& Error);


#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleSocketConnectionError); \
	DECLARE_FUNCTION(execHandleSocketConnected); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execDisconnectFromServer); \
	DECLARE_FUNCTION(execConnectToServer); \
	DECLARE_FUNCTION(execGetEventListeners); \
	DECLARE_FUNCTION(execClearEventListeners); \
	DECLARE_FUNCTION(execRemoveEventListener); \
	DECLARE_FUNCTION(execAddEventListener);


#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerManager(); \
	friend struct Z_Construct_UClass_UServerManager_Statics; \
public: \
	DECLARE_CLASS(UServerManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Horizon"), NO_API) \
	DECLARE_SERIALIZER(UServerManager)


#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UServerManager(UServerManager&&); \
	UServerManager(const UServerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UServerManager) \
	NO_API virtual ~UServerManager();


#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_63_PROLOG
#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_66_INCLASS_NO_PURE_DECLS \
	FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZON_API UClass* StaticClass<class UServerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_ServerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
