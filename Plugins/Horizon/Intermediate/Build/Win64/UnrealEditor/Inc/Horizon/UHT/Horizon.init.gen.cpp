// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizon_init() {}
	HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature();
	HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_ConnectionEstablishedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Horizon;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Horizon()
	{
		if (!Z_Registration_Info_UPackage__Script_Horizon.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Horizon_ConnectionErrorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Horizon_ConnectionEstablishedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Horizon",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x77C56386,
				0x2DBF64AB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Horizon.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Horizon.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Horizon(Z_Construct_UPackage__Script_Horizon, TEXT("/Script/Horizon"), Z_Registration_Info_UPackage__Script_Horizon, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x77C56386, 0x2DBF64AB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
