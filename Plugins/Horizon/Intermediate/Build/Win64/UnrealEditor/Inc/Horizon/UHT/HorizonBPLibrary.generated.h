// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HorizonBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORIZON_HorizonBPLibrary_generated_h
#error "HorizonBPLibrary.generated.h already included, missing '#pragma once' in HorizonBPLibrary.h"
#endif
#define HORIZON_HorizonBPLibrary_generated_h

#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_HorizonBPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHorizonSampleFunction);


#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_HorizonBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonBPLibrary(); \
	friend struct Z_Construct_UClass_UHorizonBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHorizonBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Horizon"), NO_API) \
	DECLARE_SERIALIZER(UHorizonBPLibrary)


#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_HorizonBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHorizonBPLibrary(UHorizonBPLibrary&&); \
	UHorizonBPLibrary(const UHorizonBPLibrary&); \
public: \
	NO_API virtual ~UHorizonBPLibrary();


#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_HorizonBPLibrary_h_25_PROLOG
#define FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_HorizonBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_HorizonBPLibrary_h_28_RPC_WRAPPERS \
	FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_HorizonBPLibrary_h_28_INCLASS \
	FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_HorizonBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZON_API UClass* StaticClass<class UHorizonBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Stars_Beyond_Game_Plugins_Horizon_Source_Horizon_Public_HorizonBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
