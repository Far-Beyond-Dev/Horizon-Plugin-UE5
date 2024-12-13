// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRest/Public/VaRestSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_VaRest();
VAREST_API UClass* Z_Construct_UClass_UVaRestSettings();
VAREST_API UClass* Z_Construct_UClass_UVaRestSettings_NoRegister();
// End Cross Module References

// Begin Class UVaRestSettings
void UVaRestSettings::StaticRegisterNativesUVaRestSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVaRestSettings);
UClass* Z_Construct_UClass_UVaRestSettings_NoRegister()
{
	return UVaRestSettings::StaticClass();
}
struct Z_Construct_UClass_UVaRestSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VaRestSettings.h" },
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtendedLog_MetaData[] = {
		{ "Category", "VaRest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** You can disable request content logging to avoid security vulnerability */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You can disable request content logging to avoid security vulnerability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseChunkedParser_MetaData[] = {
		{ "Category", "VaRest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use custom chunked parses (best for memory, but has issues with hex-encoded utf-8) */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use custom chunked parses (best for memory, but has issues with hex-encoded utf-8)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bExtendedLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtendedLog;
	static void NewProp_bUseChunkedParser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseChunkedParser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_SetBit(void* Obj)
{
	((UVaRestSettings*)Obj)->bExtendedLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog = { "bExtendedLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVaRestSettings), &Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtendedLog_MetaData), NewProp_bExtendedLog_MetaData) };
void Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_SetBit(void* Obj)
{
	((UVaRestSettings*)Obj)->bUseChunkedParser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser = { "bUseChunkedParser", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVaRestSettings), &Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseChunkedParser_MetaData), NewProp_bUseChunkedParser_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVaRestSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRestSettings_Statics::ClassParams = {
	&UVaRestSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVaRestSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVaRestSettings()
{
	if (!Z_Registration_Info_UClass_UVaRestSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRestSettings.OuterSingleton, Z_Construct_UClass_UVaRestSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVaRestSettings.OuterSingleton;
}
template<> VAREST_API UClass* StaticClass<UVaRestSettings>()
{
	return UVaRestSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestSettings);
UVaRestSettings::~UVaRestSettings() {}
// End Class UVaRestSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_VaRestPlugin_Source_VaRest_Public_VaRestSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVaRestSettings, UVaRestSettings::StaticClass, TEXT("UVaRestSettings"), &Z_Registration_Info_UClass_UVaRestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRestSettings), 3703990974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_VaRestPlugin_Source_VaRest_Public_VaRestSettings_h_764335774(TEXT("/Script/VaRest"),
	Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_VaRestPlugin_Source_VaRest_Public_VaRestSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_VaRestPlugin_Source_VaRest_Public_VaRestSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
