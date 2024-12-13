// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIOJson/Public/SIOJConvert.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIOJConvert() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SIOJSON_API UClass* Z_Construct_UClass_USIOJConvert();
SIOJSON_API UClass* Z_Construct_UClass_USIOJConvert_NoRegister();
UPackage* Z_Construct_UPackage__Script_SIOJson();
// End Cross Module References

// Begin Class USIOJConvert
void USIOJConvert::StaticRegisterNativesUSIOJConvert()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIOJConvert);
UClass* Z_Construct_UClass_USIOJConvert_NoRegister()
{
	return USIOJConvert::StaticClass();
}
struct Z_Construct_UClass_USIOJConvert_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SIOJConvert.h" },
		{ "ModuleRelativePath", "Public/SIOJConvert.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIOJConvert>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIOJConvert_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SIOJson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJConvert_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIOJConvert_Statics::ClassParams = {
	&USIOJConvert::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJConvert_Statics::Class_MetaDataParams), Z_Construct_UClass_USIOJConvert_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIOJConvert()
{
	if (!Z_Registration_Info_UClass_USIOJConvert.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIOJConvert.OuterSingleton, Z_Construct_UClass_USIOJConvert_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIOJConvert.OuterSingleton;
}
template<> SIOJSON_API UClass* StaticClass<USIOJConvert>()
{
	return USIOJConvert::StaticClass();
}
USIOJConvert::USIOJConvert(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIOJConvert);
USIOJConvert::~USIOJConvert() {}
// End Class USIOJConvert

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJConvert_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIOJConvert, USIOJConvert::StaticClass, TEXT("USIOJConvert"), &Z_Registration_Info_UClass_USIOJConvert, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIOJConvert), 2943483342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJConvert_h_4055700898(TEXT("/Script/SIOJson"),
	Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJConvert_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJConvert_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
