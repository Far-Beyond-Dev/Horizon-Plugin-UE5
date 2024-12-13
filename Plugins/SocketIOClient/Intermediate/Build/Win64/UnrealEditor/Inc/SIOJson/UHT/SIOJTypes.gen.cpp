// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIOJson/Public/SIOJTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIOJTypes() {}

// Begin Cross Module References
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIORequestContentType();
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIORequestStatus();
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIORequestVerb();
UPackage* Z_Construct_UPackage__Script_SIOJson();
// End Cross Module References

// Begin Enum ESIORequestVerb
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIORequestVerb;
static UEnum* ESIORequestVerb_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIORequestVerb.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIORequestVerb.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SIOJson_ESIORequestVerb, (UObject*)Z_Construct_UPackage__Script_SIOJson(), TEXT("ESIORequestVerb"));
	}
	return Z_Registration_Info_UEnum_ESIORequestVerb.OuterSingleton;
}
template<> SIOJSON_API UEnum* StaticEnum<ESIORequestVerb>()
{
	return ESIORequestVerb_StaticEnum();
}
struct Z_Construct_UEnum_SIOJson_ESIORequestVerb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Verb (GET, PUT, POST) used by the request */" },
#endif
		{ "CUSTOM.Comment", "/** Set CUSTOM verb by SetCustomVerb() function */" },
		{ "CUSTOM.Name", "ESIORequestVerb::CUSTOM" },
		{ "CUSTOM.ToolTip", "Set CUSTOM verb by SetCustomVerb() function" },
		{ "DEL.DisplayName", "DELETE" },
		{ "DEL.Name", "ESIORequestVerb::DEL" },
		{ "GET.Name", "ESIORequestVerb::GET" },
		{ "ModuleRelativePath", "Public/SIOJTypes.h" },
		{ "POST.Name", "ESIORequestVerb::POST" },
		{ "PUT.Name", "ESIORequestVerb::PUT" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Verb (GET, PUT, POST) used by the request" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIORequestVerb::GET", (int64)ESIORequestVerb::GET },
		{ "ESIORequestVerb::POST", (int64)ESIORequestVerb::POST },
		{ "ESIORequestVerb::PUT", (int64)ESIORequestVerb::PUT },
		{ "ESIORequestVerb::DEL", (int64)ESIORequestVerb::DEL },
		{ "ESIORequestVerb::CUSTOM", (int64)ESIORequestVerb::CUSTOM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SIOJson_ESIORequestVerb_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SIOJson,
	nullptr,
	"ESIORequestVerb",
	"ESIORequestVerb",
	Z_Construct_UEnum_SIOJson_ESIORequestVerb_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SIOJson_ESIORequestVerb_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SIOJson_ESIORequestVerb_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SIOJson_ESIORequestVerb_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SIOJson_ESIORequestVerb()
{
	if (!Z_Registration_Info_UEnum_ESIORequestVerb.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIORequestVerb.InnerSingleton, Z_Construct_UEnum_SIOJson_ESIORequestVerb_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIORequestVerb.InnerSingleton;
}
// End Enum ESIORequestVerb

// Begin Enum ESIORequestContentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIORequestContentType;
static UEnum* ESIORequestContentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIORequestContentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIORequestContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SIOJson_ESIORequestContentType, (UObject*)Z_Construct_UPackage__Script_SIOJson(), TEXT("ESIORequestContentType"));
	}
	return Z_Registration_Info_UEnum_ESIORequestContentType.OuterSingleton;
}
template<> SIOJSON_API UEnum* StaticEnum<ESIORequestContentType>()
{
	return ESIORequestContentType_StaticEnum();
}
struct Z_Construct_UEnum_SIOJson_ESIORequestContentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "binary.Name", "ESIORequestContentType::binary" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Content type (json, urlencoded, etc.) used by the request */" },
#endif
		{ "json.Name", "ESIORequestContentType::json" },
		{ "ModuleRelativePath", "Public/SIOJTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Content type (json, urlencoded, etc.) used by the request" },
#endif
		{ "x_www_form_urlencoded_body.DisplayName", "x-www-form-urlencoded (Request Body)" },
		{ "x_www_form_urlencoded_body.Name", "ESIORequestContentType::x_www_form_urlencoded_body" },
		{ "x_www_form_urlencoded_url.DisplayName", "x-www-form-urlencoded (URL)" },
		{ "x_www_form_urlencoded_url.Name", "ESIORequestContentType::x_www_form_urlencoded_url" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIORequestContentType::x_www_form_urlencoded_url", (int64)ESIORequestContentType::x_www_form_urlencoded_url },
		{ "ESIORequestContentType::x_www_form_urlencoded_body", (int64)ESIORequestContentType::x_www_form_urlencoded_body },
		{ "ESIORequestContentType::json", (int64)ESIORequestContentType::json },
		{ "ESIORequestContentType::binary", (int64)ESIORequestContentType::binary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SIOJson_ESIORequestContentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SIOJson,
	nullptr,
	"ESIORequestContentType",
	"ESIORequestContentType",
	Z_Construct_UEnum_SIOJson_ESIORequestContentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SIOJson_ESIORequestContentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SIOJson_ESIORequestContentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SIOJson_ESIORequestContentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SIOJson_ESIORequestContentType()
{
	if (!Z_Registration_Info_UEnum_ESIORequestContentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIORequestContentType.InnerSingleton, Z_Construct_UEnum_SIOJson_ESIORequestContentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIORequestContentType.InnerSingleton;
}
// End Enum ESIORequestContentType

// Begin Enum ESIORequestStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESIORequestStatus;
static UEnum* ESIORequestStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESIORequestStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESIORequestStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SIOJson_ESIORequestStatus, (UObject*)Z_Construct_UPackage__Script_SIOJson(), TEXT("ESIORequestStatus"));
	}
	return Z_Registration_Info_UEnum_ESIORequestStatus.OuterSingleton;
}
template<> SIOJSON_API UEnum* StaticEnum<ESIORequestStatus>()
{
	return ESIORequestStatus_StaticEnum();
}
struct Z_Construct_UEnum_SIOJson_ESIORequestStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enumerates the current state of an Http request */" },
#endif
		{ "Failed.Comment", "/** Finished but failed */" },
		{ "Failed.Name", "ESIORequestStatus::Failed" },
		{ "Failed.ToolTip", "Finished but failed" },
		{ "Failed_ConnectionError.Comment", "/** Failed because it was unable to connect (safe to retry) */" },
		{ "Failed_ConnectionError.Name", "ESIORequestStatus::Failed_ConnectionError" },
		{ "Failed_ConnectionError.ToolTip", "Failed because it was unable to connect (safe to retry)" },
		{ "ModuleRelativePath", "Public/SIOJTypes.h" },
		{ "NotStarted.Comment", "/** Has not been started via ProcessRequest() */" },
		{ "NotStarted.Name", "ESIORequestStatus::NotStarted" },
		{ "NotStarted.ToolTip", "Has not been started via ProcessRequest()" },
		{ "Processing.Comment", "/** Currently being ticked and processed */" },
		{ "Processing.Name", "ESIORequestStatus::Processing" },
		{ "Processing.ToolTip", "Currently being ticked and processed" },
		{ "Succeeded.Comment", "/** Finished and was successful */" },
		{ "Succeeded.Name", "ESIORequestStatus::Succeeded" },
		{ "Succeeded.ToolTip", "Finished and was successful" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates the current state of an Http request" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESIORequestStatus::NotStarted", (int64)ESIORequestStatus::NotStarted },
		{ "ESIORequestStatus::Processing", (int64)ESIORequestStatus::Processing },
		{ "ESIORequestStatus::Failed", (int64)ESIORequestStatus::Failed },
		{ "ESIORequestStatus::Failed_ConnectionError", (int64)ESIORequestStatus::Failed_ConnectionError },
		{ "ESIORequestStatus::Succeeded", (int64)ESIORequestStatus::Succeeded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SIOJson_ESIORequestStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SIOJson,
	nullptr,
	"ESIORequestStatus",
	"ESIORequestStatus",
	Z_Construct_UEnum_SIOJson_ESIORequestStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SIOJson_ESIORequestStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SIOJson_ESIORequestStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SIOJson_ESIORequestStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SIOJson_ESIORequestStatus()
{
	if (!Z_Registration_Info_UEnum_ESIORequestStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESIORequestStatus.InnerSingleton, Z_Construct_UEnum_SIOJson_ESIORequestStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESIORequestStatus.InnerSingleton;
}
// End Enum ESIORequestStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESIORequestVerb_StaticEnum, TEXT("ESIORequestVerb"), &Z_Registration_Info_UEnum_ESIORequestVerb, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4028359600U) },
		{ ESIORequestContentType_StaticEnum, TEXT("ESIORequestContentType"), &Z_Registration_Info_UEnum_ESIORequestContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3292990177U) },
		{ ESIORequestStatus_StaticEnum, TEXT("ESIORequestStatus"), &Z_Registration_Info_UEnum_ESIORequestStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1143707069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJTypes_h_1665892576(TEXT("/Script/SIOJson"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
