// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIOJson/Public/SIOJRequestJSON.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIOJRequestJSON() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
SIOJSON_API UClass* Z_Construct_UClass_USIOJRequestJSON();
SIOJSON_API UClass* Z_Construct_UClass_USIOJRequestJSON_NoRegister();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonObject_NoRegister();
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIORequestContentType();
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIORequestStatus();
SIOJSON_API UEnum* Z_Construct_UEnum_SIOJson_ESIORequestVerb();
SIOJSON_API UFunction* Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature();
SIOJSON_API UFunction* Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SIOJson();
// End Cross Module References

// Begin Delegate FOnRequestComplete
struct Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics
{
	struct _Script_SIOJson_eventOnRequestComplete_Parms
	{
		USIOJRequestJSON* Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generate a delegates for callback events */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a delegates for callback events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SIOJson_eventOnRequestComplete_Parms, Request), Z_Construct_UClass_USIOJRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SIOJson, nullptr, "OnRequestComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::_Script_SIOJson_eventOnRequestComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::_Script_SIOJson_eventOnRequestComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, USIOJRequestJSON* Request)
{
	struct _Script_SIOJson_eventOnRequestComplete_Parms
	{
		USIOJRequestJSON* Request;
	};
	_Script_SIOJson_eventOnRequestComplete_Parms Parms;
	Parms.Request=Request;
	OnRequestComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestComplete

// Begin Delegate FOnRequestFail
struct Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics
{
	struct _Script_SIOJson_eventOnRequestFail_Parms
	{
		USIOJRequestJSON* Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SIOJson_eventOnRequestFail_Parms, Request), Z_Construct_UClass_USIOJRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SIOJson, nullptr, "OnRequestFail__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::_Script_SIOJson_eventOnRequestFail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::_Script_SIOJson_eventOnRequestFail_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestFail_DelegateWrapper(const FMulticastScriptDelegate& OnRequestFail, USIOJRequestJSON* Request)
{
	struct _Script_SIOJson_eventOnRequestFail_Parms
	{
		USIOJRequestJSON* Request;
	};
	_Script_SIOJson_eventOnRequestFail_Parms Parms;
	Parms.Request=Request;
	OnRequestFail.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestFail

// Begin Class USIOJRequestJSON Function AddTag
struct Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics
{
	struct SIOJRequestJSON_eventAddTag_Parms
	{
		FName Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add tag to this request */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add tag to this request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventAddTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "AddTag", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::SIOJRequestJSON_eventAddTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::SIOJRequestJSON_eventAddTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_AddTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_AddTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execAddTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function AddTag

// Begin Class USIOJRequestJSON Function ApplyURL
struct Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics
{
	struct SIOJRequestJSON_eventApplyURL_Parms
	{
		FString Url;
		USIOJsonObject* Result;
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Open URL in latent mode */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open URL in latent mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventApplyURL_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventApplyURL_Parms, Result), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventApplyURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventApplyURL_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ApplyURL", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::SIOJRequestJSON_eventApplyURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::SIOJRequestJSON_eventApplyURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ApplyURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ApplyURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execApplyURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_GET_OBJECT_REF(USIOJsonObject,Z_Param_Out_Result);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyURL(Z_Param_Url,P_ARG_GC_BARRIER(Z_Param_Out_Result),Z_Param_WorldContextObject,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function ApplyURL

// Begin Class USIOJRequestJSON Function Cancel
struct Z_Construct_UFunction_USIOJRequestJSON_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cancel latent response waiting  */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel latent response waiting" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "Cancel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_Cancel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIOJRequestJSON_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function Cancel

// Begin Class USIOJRequestJSON Function ConstructRequest
struct Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics
{
	struct SIOJRequestJSON_eventConstructRequest_Parms
	{
		UObject* WorldContextObject;
		USIOJRequestJSON* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates new request (totally empty) */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Request (Empty)" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates new request (totally empty)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequest_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequest_Parms, ReturnValue), Z_Construct_UClass_USIOJRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ConstructRequest", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::SIOJRequestJSON_eventConstructRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::SIOJRequestJSON_eventConstructRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execConstructRequest)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJRequestJSON**)Z_Param__Result=USIOJRequestJSON::ConstructRequest(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function ConstructRequest

// Begin Class USIOJRequestJSON Function ConstructRequestExt
struct Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics
{
	struct SIOJRequestJSON_eventConstructRequestExt_Parms
	{
		UObject* WorldContextObject;
		ESIORequestVerb Verb;
		ESIORequestContentType ContentType;
		USIOJRequestJSON* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates new request with defined verb and content type */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Request" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates new request with defined verb and content type" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequestExt_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequestExt_Parms, Verb), Z_Construct_UEnum_SIOJson_ESIORequestVerb, METADATA_PARAMS(0, nullptr) }; // 4028359600
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequestExt_Parms, ContentType), Z_Construct_UEnum_SIOJson_ESIORequestContentType, METADATA_PARAMS(0, nullptr) }; // 3292990177
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventConstructRequestExt_Parms, ReturnValue), Z_Construct_UClass_USIOJRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_Verb_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_Verb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ContentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ConstructRequestExt", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::SIOJRequestJSON_eventConstructRequestExt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::SIOJRequestJSON_eventConstructRequestExt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execConstructRequestExt)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(ESIORequestVerb,Z_Param_Verb);
	P_GET_ENUM(ESIORequestContentType,Z_Param_ContentType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJRequestJSON**)Z_Param__Result=USIOJRequestJSON::ConstructRequestExt(Z_Param_WorldContextObject,ESIORequestVerb(Z_Param_Verb),ESIORequestContentType(Z_Param_ContentType));
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function ConstructRequestExt

// Begin Class USIOJRequestJSON Function GetAllResponseHeaders
struct Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics
{
	struct SIOJRequestJSON_eventGetAllResponseHeaders_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get list of all response headers */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get list of all response headers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetAllResponseHeaders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetAllResponseHeaders", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::SIOJRequestJSON_eventGetAllResponseHeaders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::SIOJRequestJSON_eventGetAllResponseHeaders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetAllResponseHeaders)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllResponseHeaders();
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function GetAllResponseHeaders

// Begin Class USIOJRequestJSON Function GetRequestObject
struct Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics
{
	struct SIOJRequestJSON_eventGetRequestObject_Parms
	{
		USIOJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the Request Json object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Request Json object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetRequestObject_Parms, ReturnValue), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetRequestObject", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::SIOJRequestJSON_eventGetRequestObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::SIOJRequestJSON_eventGetRequestObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetRequestObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonObject**)Z_Param__Result=P_THIS->GetRequestObject();
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function GetRequestObject

// Begin Class USIOJRequestJSON Function GetResponseCode
struct Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics
{
	struct SIOJRequestJSON_eventGetResponseCode_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the response code of the last query */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the response code of the last query" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetResponseCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetResponseCode", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::SIOJRequestJSON_eventGetResponseCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::SIOJRequestJSON_eventGetResponseCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetResponseCode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetResponseCode();
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function GetResponseCode

// Begin Class USIOJRequestJSON Function GetResponseHeader
struct Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics
{
	struct SIOJRequestJSON_eventGetResponseHeader_Parms
	{
		FString HeaderName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get value of desired response header */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get value of desired response header" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetResponseHeader_Parms, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderName_MetaData), NewProp_HeaderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetResponseHeader_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetResponseHeader", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::SIOJRequestJSON_eventGetResponseHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::SIOJRequestJSON_eventGetResponseHeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetResponseHeader)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetResponseHeader(Z_Param_HeaderName);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function GetResponseHeader

// Begin Class USIOJRequestJSON Function GetResponseObject
struct Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics
{
	struct SIOJRequestJSON_eventGetResponseObject_Parms
	{
		USIOJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the Response Json object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Response Json object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetResponseObject_Parms, ReturnValue), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetResponseObject", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::SIOJRequestJSON_eventGetResponseObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::SIOJRequestJSON_eventGetResponseObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetResponseObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonObject**)Z_Param__Result=P_THIS->GetResponseObject();
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function GetResponseObject

// Begin Class USIOJRequestJSON Function GetStatus
struct Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics
{
	struct SIOJRequestJSON_eventGetStatus_Parms
	{
		ESIORequestStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get status of http request */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get status of http request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_SIOJson_ESIORequestStatus, METADATA_PARAMS(0, nullptr) }; // 1143707069
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetStatus", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::SIOJRequestJSON_eventGetStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::SIOJRequestJSON_eventGetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESIORequestStatus*)Z_Param__Result=P_THIS->GetStatus();
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function GetStatus

// Begin Class USIOJRequestJSON Function GetURL
struct Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics
{
	struct SIOJRequestJSON_eventGetURL_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get url of http request */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get url of http request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventGetURL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "GetURL", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::SIOJRequestJSON_eventGetURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::SIOJRequestJSON_eventGetURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_GetURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_GetURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execGetURL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetURL();
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function GetURL

// Begin Class USIOJRequestJSON Function HasTag
struct Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics
{
	struct SIOJRequestJSON_eventHasTag_Parms
	{
		FName Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See if this request contains the supplied tag */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See if this request contains the supplied tag" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventHasTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJRequestJSON_eventHasTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJRequestJSON_eventHasTag_Parms), &Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "HasTag", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::SIOJRequestJSON_eventHasTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::SIOJRequestJSON_eventHasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_HasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_HasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execHasTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function HasTag

// Begin Class USIOJRequestJSON Function ProcessURL
struct Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics
{
	struct SIOJRequestJSON_eventProcessURL_Parms
	{
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Open URL with current setup */" },
#endif
		{ "CPP_Default_Url", "http://alyamkin.com" },
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open URL with current setup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventProcessURL_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ProcessURL", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::SIOJRequestJSON_eventProcessURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::SIOJRequestJSON_eventProcessURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ProcessURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ProcessURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execProcessURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessURL(Z_Param_Url);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function ProcessURL

// Begin Class USIOJRequestJSON Function RemoveTag
struct Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics
{
	struct SIOJRequestJSON_eventRemoveTag_Parms
	{
		FName Tag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Remove tag from this request \n\x09 *\n\x09 * @return Number of removed elements \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove tag from this request\n\n@return Number of removed elements" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventRemoveTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventRemoveTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "RemoveTag", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::SIOJRequestJSON_eventRemoveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::SIOJRequestJSON_eventRemoveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_RemoveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_RemoveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execRemoveTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function RemoveTag

// Begin Class USIOJRequestJSON Function ResetData
struct Z_Construct_UFunction_USIOJRequestJSON_ResetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset all internal saved data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset all internal saved data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ResetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ResetData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ResetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ResetData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ResetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ResetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execResetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetData();
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function ResetData

// Begin Class USIOJRequestJSON Function ResetRequestData
struct Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset saved request data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset saved request data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ResetRequestData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execResetRequestData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetRequestData();
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function ResetRequestData

// Begin Class USIOJRequestJSON Function ResetResponseData
struct Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset saved response data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset saved response data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "ResetResponseData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execResetResponseData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetResponseData();
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function ResetResponseData

// Begin Class USIOJRequestJSON Function SetBinaryContentType
struct Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics
{
	struct SIOJRequestJSON_eventSetBinaryContentType_Parms
	{
		FString ContentType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set content type of the request for binary post data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set content type of the request for binary post data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetBinaryContentType_Parms, ContentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentType_MetaData), NewProp_ContentType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetBinaryContentType", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::SIOJRequestJSON_eventSetBinaryContentType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::SIOJRequestJSON_eventSetBinaryContentType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetBinaryContentType)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBinaryContentType(Z_Param_ContentType);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function SetBinaryContentType

// Begin Class USIOJRequestJSON Function SetBinaryRequestContent
struct Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics
{
	struct SIOJRequestJSON_eventSetBinaryRequestContent_Parms
	{
		TArray<uint8> Content;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set content of the request for binary post data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set content of the request for binary post data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetBinaryRequestContent_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetBinaryRequestContent", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::SIOJRequestJSON_eventSetBinaryRequestContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::SIOJRequestJSON_eventSetBinaryRequestContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetBinaryRequestContent)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBinaryRequestContent(Z_Param_Out_Content);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function SetBinaryRequestContent

// Begin Class USIOJRequestJSON Function SetContentType
struct Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics
{
	struct SIOJRequestJSON_eventSetContentType_Parms
	{
		ESIORequestContentType ContentType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set content type to the request. If you're using the x-www-form-urlencoded, \n\x09 * params/constaints should be defined as key=ValueString pairs from Json data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set content type to the request. If you're using the x-www-form-urlencoded,\nparams/constaints should be defined as key=ValueString pairs from Json data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetContentType_Parms, ContentType), Z_Construct_UEnum_SIOJson_ESIORequestContentType, METADATA_PARAMS(0, nullptr) }; // 3292990177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::NewProp_ContentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::NewProp_ContentType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetContentType", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::SIOJRequestJSON_eventSetContentType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::SIOJRequestJSON_eventSetContentType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetContentType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetContentType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetContentType)
{
	P_GET_ENUM(ESIORequestContentType,Z_Param_ContentType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetContentType(ESIORequestContentType(Z_Param_ContentType));
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function SetContentType

// Begin Class USIOJRequestJSON Function SetCustomVerb
struct Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics
{
	struct SIOJRequestJSON_eventSetCustomVerb_Parms
	{
		FString Verb;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set custom verb to the request */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set custom verb to the request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetCustomVerb_Parms, Verb), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::NewProp_Verb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetCustomVerb", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::SIOJRequestJSON_eventSetCustomVerb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::SIOJRequestJSON_eventSetCustomVerb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetCustomVerb)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Verb);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomVerb(Z_Param_Verb);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function SetCustomVerb

// Begin Class USIOJRequestJSON Function SetHeader
struct Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics
{
	struct SIOJRequestJSON_eventSetHeader_Parms
	{
		FString HeaderName;
		FString HeaderValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets optional header info */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets optional header info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetHeader_Parms, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderName_MetaData), NewProp_HeaderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::NewProp_HeaderValue = { "HeaderValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetHeader_Parms, HeaderValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderValue_MetaData), NewProp_HeaderValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::NewProp_HeaderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::NewProp_HeaderValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetHeader", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::SIOJRequestJSON_eventSetHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::SIOJRequestJSON_eventSetHeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetHeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetHeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetHeader)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeader(Z_Param_HeaderName,Z_Param_HeaderValue);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function SetHeader

// Begin Class USIOJRequestJSON Function SetRequestObject
struct Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics
{
	struct SIOJRequestJSON_eventSetRequestObject_Parms
	{
		USIOJsonObject* JsonObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the Request Json object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Request Json object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetRequestObject_Parms, JsonObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::NewProp_JsonObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetRequestObject", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::SIOJRequestJSON_eventSetRequestObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::SIOJRequestJSON_eventSetRequestObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetRequestObject)
{
	P_GET_OBJECT(USIOJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequestObject(Z_Param_JsonObject);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function SetRequestObject

// Begin Class USIOJRequestJSON Function SetResponseObject
struct Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics
{
	struct SIOJRequestJSON_eventSetResponseObject_Parms
	{
		USIOJsonObject* JsonObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the Response Json object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the Response Json object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetResponseObject_Parms, JsonObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::NewProp_JsonObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetResponseObject", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::SIOJRequestJSON_eventSetResponseObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::SIOJRequestJSON_eventSetResponseObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetResponseObject)
{
	P_GET_OBJECT(USIOJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponseObject(Z_Param_JsonObject);
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function SetResponseObject

// Begin Class USIOJRequestJSON Function SetVerb
struct Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics
{
	struct SIOJRequestJSON_eventSetVerb_Parms
	{
		ESIORequestVerb Verb;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set verb to the request */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set verb to the request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJRequestJSON_eventSetVerb_Parms, Verb), Z_Construct_UEnum_SIOJson_ESIORequestVerb, METADATA_PARAMS(0, nullptr) }; // 4028359600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::NewProp_Verb_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::NewProp_Verb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJRequestJSON, nullptr, "SetVerb", nullptr, nullptr, Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::SIOJRequestJSON_eventSetVerb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::SIOJRequestJSON_eventSetVerb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJRequestJSON_SetVerb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJRequestJSON_SetVerb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJRequestJSON::execSetVerb)
{
	P_GET_ENUM(ESIORequestVerb,Z_Param_Verb);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerb(ESIORequestVerb(Z_Param_Verb));
	P_NATIVE_END;
}
// End Class USIOJRequestJSON Function SetVerb

// Begin Class USIOJRequestJSON
void USIOJRequestJSON::StaticRegisterNativesUSIOJRequestJSON()
{
	UClass* Class = USIOJRequestJSON::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTag", &USIOJRequestJSON::execAddTag },
		{ "ApplyURL", &USIOJRequestJSON::execApplyURL },
		{ "Cancel", &USIOJRequestJSON::execCancel },
		{ "ConstructRequest", &USIOJRequestJSON::execConstructRequest },
		{ "ConstructRequestExt", &USIOJRequestJSON::execConstructRequestExt },
		{ "GetAllResponseHeaders", &USIOJRequestJSON::execGetAllResponseHeaders },
		{ "GetRequestObject", &USIOJRequestJSON::execGetRequestObject },
		{ "GetResponseCode", &USIOJRequestJSON::execGetResponseCode },
		{ "GetResponseHeader", &USIOJRequestJSON::execGetResponseHeader },
		{ "GetResponseObject", &USIOJRequestJSON::execGetResponseObject },
		{ "GetStatus", &USIOJRequestJSON::execGetStatus },
		{ "GetURL", &USIOJRequestJSON::execGetURL },
		{ "HasTag", &USIOJRequestJSON::execHasTag },
		{ "ProcessURL", &USIOJRequestJSON::execProcessURL },
		{ "RemoveTag", &USIOJRequestJSON::execRemoveTag },
		{ "ResetData", &USIOJRequestJSON::execResetData },
		{ "ResetRequestData", &USIOJRequestJSON::execResetRequestData },
		{ "ResetResponseData", &USIOJRequestJSON::execResetResponseData },
		{ "SetBinaryContentType", &USIOJRequestJSON::execSetBinaryContentType },
		{ "SetBinaryRequestContent", &USIOJRequestJSON::execSetBinaryRequestContent },
		{ "SetContentType", &USIOJRequestJSON::execSetContentType },
		{ "SetCustomVerb", &USIOJRequestJSON::execSetCustomVerb },
		{ "SetHeader", &USIOJRequestJSON::execSetHeader },
		{ "SetRequestObject", &USIOJRequestJSON::execSetRequestObject },
		{ "SetResponseObject", &USIOJRequestJSON::execSetResponseObject },
		{ "SetVerb", &USIOJRequestJSON::execSetVerb },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIOJRequestJSON);
UClass* Z_Construct_UClass_USIOJRequestJSON_NoRegister()
{
	return USIOJRequestJSON::StaticClass();
}
struct Z_Construct_UClass_USIOJRequestJSON_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * General helper class http requests via blueprints\n */" },
#endif
		{ "IncludePath", "SIOJRequestJSON.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "General helper class http requests via blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestComplete_MetaData[] = {
		{ "Category", "SIOJ|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event occured when the request has been completed */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event occured when the request has been completed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestFail_MetaData[] = {
		{ "Category", "SIOJ|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event occured when the request wasn't successfull */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event occured when the request wasn't successfull" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseContent_MetaData[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Request response stored as a string */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request response stored as a string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidJsonResponse_MetaData[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the response valid JSON? */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the response valid JSON?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldHaveBinaryResponse_MetaData[] = {
		{ "Category", "SIOJ|Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If this is true it will call back on the binary callback instead of json */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is true it will call back on the binary callback instead of json" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal request data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal request data stored as JSON" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinaryContentType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Response data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJRequestJSON.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Response data stored as JSON" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFail;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseContent;
	static void NewProp_bIsValidJsonResponse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidJsonResponse;
	static void NewProp_bShouldHaveBinaryResponse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHaveBinaryResponse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequestBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestBytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BinaryContentType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIOJRequestJSON_AddTag, "AddTag" }, // 808394174
		{ &Z_Construct_UFunction_USIOJRequestJSON_ApplyURL, "ApplyURL" }, // 2903797007
		{ &Z_Construct_UFunction_USIOJRequestJSON_Cancel, "Cancel" }, // 2392573861
		{ &Z_Construct_UFunction_USIOJRequestJSON_ConstructRequest, "ConstructRequest" }, // 601522906
		{ &Z_Construct_UFunction_USIOJRequestJSON_ConstructRequestExt, "ConstructRequestExt" }, // 3921078782
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetAllResponseHeaders, "GetAllResponseHeaders" }, // 354172293
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetRequestObject, "GetRequestObject" }, // 1860577506
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetResponseCode, "GetResponseCode" }, // 3787291467
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetResponseHeader, "GetResponseHeader" }, // 680241026
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetResponseObject, "GetResponseObject" }, // 2765718624
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetStatus, "GetStatus" }, // 3282625669
		{ &Z_Construct_UFunction_USIOJRequestJSON_GetURL, "GetURL" }, // 3219012874
		{ &Z_Construct_UFunction_USIOJRequestJSON_HasTag, "HasTag" }, // 3268349434
		{ &Z_Construct_UFunction_USIOJRequestJSON_ProcessURL, "ProcessURL" }, // 1316723262
		{ &Z_Construct_UFunction_USIOJRequestJSON_RemoveTag, "RemoveTag" }, // 382698121
		{ &Z_Construct_UFunction_USIOJRequestJSON_ResetData, "ResetData" }, // 1934466161
		{ &Z_Construct_UFunction_USIOJRequestJSON_ResetRequestData, "ResetRequestData" }, // 1396072204
		{ &Z_Construct_UFunction_USIOJRequestJSON_ResetResponseData, "ResetResponseData" }, // 1402427305
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetBinaryContentType, "SetBinaryContentType" }, // 937191736
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetBinaryRequestContent, "SetBinaryRequestContent" }, // 3214949786
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetContentType, "SetContentType" }, // 2468430770
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetCustomVerb, "SetCustomVerb" }, // 2950222908
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetHeader, "SetHeader" }, // 2888616184
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetRequestObject, "SetRequestObject" }, // 3912950644
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetResponseObject, "SetResponseObject" }, // 1448572184
		{ &Z_Construct_UFunction_USIOJRequestJSON_SetVerb, "SetVerb" }, // 3833247239
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIOJRequestJSON>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_OnRequestComplete = { "OnRequestComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, OnRequestComplete), Z_Construct_UDelegateFunction_SIOJson_OnRequestComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestComplete_MetaData), NewProp_OnRequestComplete_MetaData) }; // 3120705232
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_OnRequestFail = { "OnRequestFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, OnRequestFail), Z_Construct_UDelegateFunction_SIOJson_OnRequestFail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestFail_MetaData), NewProp_OnRequestFail_MetaData) }; // 770236303
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_ResponseContent = { "ResponseContent", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, ResponseContent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseContent_MetaData), NewProp_ResponseContent_MetaData) };
void Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bIsValidJsonResponse_SetBit(void* Obj)
{
	((USIOJRequestJSON*)Obj)->bIsValidJsonResponse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bIsValidJsonResponse = { "bIsValidJsonResponse", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USIOJRequestJSON), &Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bIsValidJsonResponse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValidJsonResponse_MetaData), NewProp_bIsValidJsonResponse_MetaData) };
void Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bShouldHaveBinaryResponse_SetBit(void* Obj)
{
	((USIOJRequestJSON*)Obj)->bShouldHaveBinaryResponse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bShouldHaveBinaryResponse = { "bShouldHaveBinaryResponse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USIOJRequestJSON), &Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bShouldHaveBinaryResponse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldHaveBinaryResponse_MetaData), NewProp_bShouldHaveBinaryResponse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, RequestJsonObj), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestJsonObj_MetaData), NewProp_RequestJsonObj_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestBytes_Inner = { "RequestBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestBytes = { "RequestBytes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, RequestBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestBytes_MetaData), NewProp_RequestBytes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_BinaryContentType = { "BinaryContentType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, BinaryContentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinaryContentType_MetaData), NewProp_BinaryContentType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIOJRequestJSON, ResponseJsonObj), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonObj_MetaData), NewProp_ResponseJsonObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIOJRequestJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_OnRequestComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_OnRequestFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_ResponseContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bIsValidJsonResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_bShouldHaveBinaryResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestJsonObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_RequestBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_BinaryContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIOJRequestJSON_Statics::NewProp_ResponseJsonObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJRequestJSON_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIOJRequestJSON_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SIOJson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJRequestJSON_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIOJRequestJSON_Statics::ClassParams = {
	&USIOJRequestJSON::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIOJRequestJSON_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIOJRequestJSON_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJRequestJSON_Statics::Class_MetaDataParams), Z_Construct_UClass_USIOJRequestJSON_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIOJRequestJSON()
{
	if (!Z_Registration_Info_UClass_USIOJRequestJSON.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIOJRequestJSON.OuterSingleton, Z_Construct_UClass_USIOJRequestJSON_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIOJRequestJSON.OuterSingleton;
}
template<> SIOJSON_API UClass* StaticClass<USIOJRequestJSON>()
{
	return USIOJRequestJSON::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIOJRequestJSON);
USIOJRequestJSON::~USIOJRequestJSON() {}
// End Class USIOJRequestJSON

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIOJRequestJSON, USIOJRequestJSON::StaticClass, TEXT("USIOJRequestJSON"), &Z_Registration_Info_UClass_USIOJRequestJSON, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIOJRequestJSON), 3667670961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_4150906771(TEXT("/Script/SIOJson"),
	Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJRequestJSON_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
