// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRest/Public/VaRestSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_VaRest();
VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();
VAREST_API UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister();
VAREST_API UClass* Z_Construct_UClass_UVaRestSubsystem();
VAREST_API UClass* Z_Construct_UClass_UVaRestSubsystem_NoRegister();
VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestContentType();
VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestVerb();
VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature();
VAREST_API UScriptStruct* Z_Construct_UScriptStruct_FVaRestCallResponse();
// End Cross Module References

// Begin Delegate FVaRestCallDelegate
struct Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics
{
	struct _Script_VaRest_eventVaRestCallDelegate_Parms
	{
		UVaRestRequestJSON* Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VaRest_eventVaRestCallDelegate_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VaRest, nullptr, "VaRestCallDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::_Script_VaRest_eventVaRestCallDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::_Script_VaRest_eventVaRestCallDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVaRestCallDelegate_DelegateWrapper(const FScriptDelegate& VaRestCallDelegate, UVaRestRequestJSON* Request)
{
	struct _Script_VaRest_eventVaRestCallDelegate_Parms
	{
		UVaRestRequestJSON* Request;
	};
	_Script_VaRest_eventVaRestCallDelegate_Parms Parms;
	Parms.Request=Request;
	VaRestCallDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FVaRestCallDelegate

// Begin ScriptStruct FVaRestCallResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VaRestCallResponse;
class UScriptStruct* FVaRestCallResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VaRestCallResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VaRestCallResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVaRestCallResponse, (UObject*)Z_Construct_UPackage__Script_VaRest(), TEXT("VaRestCallResponse"));
	}
	return Z_Registration_Info_UScriptStruct_VaRestCallResponse.OuterSingleton;
}
template<> VAREST_API UScriptStruct* StaticStruct<FVaRestCallResponse>()
{
	return FVaRestCallResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVaRestCallResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVaRestCallResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestCallResponse, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestCallResponse, Callback), Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2106765340
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
	nullptr,
	&NewStructOps,
	"VaRestCallResponse",
	Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::PropPointers),
	sizeof(FVaRestCallResponse),
	alignof(FVaRestCallResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVaRestCallResponse()
{
	if (!Z_Registration_Info_UScriptStruct_VaRestCallResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VaRestCallResponse.InnerSingleton, Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VaRestCallResponse.InnerSingleton;
}
// End ScriptStruct FVaRestCallResponse

// Begin Class UVaRestSubsystem Function CallURL
struct Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics
{
	struct VaRestSubsystem_eventCallURL_Parms
	{
		FString URL;
		EVaRestRequestVerb Verb;
		EVaRestRequestContentType ContentType;
		UVaRestJsonObject* VaRestJson;
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Easy way to process http requests */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Easy way to process http requests" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VaRestJson;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventCallURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventCallURL_Parms, Verb), Z_Construct_UEnum_VaRest_EVaRestRequestVerb, METADATA_PARAMS(0, nullptr) }; // 2024740045
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventCallURL_Parms, ContentType), Z_Construct_UEnum_VaRest_EVaRestRequestContentType, METADATA_PARAMS(0, nullptr) }; // 383282819
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_VaRestJson = { "VaRestJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventCallURL_Parms, VaRestJson), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventCallURL_Parms, Callback), Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2106765340
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Verb_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Verb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_ContentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_VaRestJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "CallURL", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::VaRestSubsystem_eventCallURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::VaRestSubsystem_eventCallURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_CallURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execCallURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_ENUM(EVaRestRequestVerb,Z_Param_Verb);
	P_GET_ENUM(EVaRestRequestContentType,Z_Param_ContentType);
	P_GET_OBJECT(UVaRestJsonObject,Z_Param_VaRestJson);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallURL(Z_Param_URL,EVaRestRequestVerb(Z_Param_Verb),EVaRestRequestContentType(Z_Param_ContentType),Z_Param_VaRestJson,FVaRestCallDelegate(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function CallURL

// Begin Class UVaRestSubsystem Function ConstructJsonValueArray
struct Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics
{
	struct VaRestSubsystem_eventConstructJsonValueArray_Parms
	{
		TArray<UVaRestJsonValue*> InArray;
		UVaRestJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Array value */" },
#endif
		{ "DisplayName", "Construct Json Array Value" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Array value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueArray_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArray_MetaData), NewProp_InArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueArray_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructJsonValueArray", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::VaRestSubsystem_eventConstructJsonValueArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::VaRestSubsystem_eventConstructJsonValueArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execConstructJsonValueArray)
{
	P_GET_TARRAY_REF(UVaRestJsonValue*,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueArray(Z_Param_Out_InArray);
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function ConstructJsonValueArray

// Begin Class UVaRestSubsystem Function ConstructJsonValueBool
struct Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics
{
	struct VaRestSubsystem_eventConstructJsonValueBool_Parms
	{
		bool InValue;
		UVaRestJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Bool value */" },
#endif
		{ "DisplayName", "Construct Json Bool Value" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Bool value" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((VaRestSubsystem_eventConstructJsonValueBool_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestSubsystem_eventConstructJsonValueBool_Parms), &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueBool_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructJsonValueBool", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::VaRestSubsystem_eventConstructJsonValueBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::VaRestSubsystem_eventConstructJsonValueBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execConstructJsonValueBool)
{
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueBool(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function ConstructJsonValueBool

// Begin Class UVaRestSubsystem Function ConstructJsonValueNumber
struct Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics
{
	struct VaRestSubsystem_eventConstructJsonValueNumber_Parms
	{
		float Number;
		UVaRestJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Number value\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "DisplayName", "Construct Json Number Value" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Number value\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueNumber_Parms, Number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueNumber_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::NewProp_Number,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructJsonValueNumber", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::VaRestSubsystem_eventConstructJsonValueNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::VaRestSubsystem_eventConstructJsonValueNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execConstructJsonValueNumber)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueNumber(Z_Param_Number);
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function ConstructJsonValueNumber

// Begin Class UVaRestSubsystem Function ConstructJsonValueObject
struct Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics
{
	struct VaRestSubsystem_eventConstructJsonValueObject_Parms
	{
		UVaRestJsonObject* JsonObject;
		UVaRestJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Object value */" },
#endif
		{ "DisplayName", "Construct Json Object Value" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Object value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructJsonValueObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::VaRestSubsystem_eventConstructJsonValueObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::VaRestSubsystem_eventConstructJsonValueObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execConstructJsonValueObject)
{
	P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueObject(Z_Param_JsonObject);
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function ConstructJsonValueObject

// Begin Class UVaRestSubsystem Function ConstructJsonValueString
struct Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics
{
	struct VaRestSubsystem_eventConstructJsonValueString_Parms
	{
		FString StringValue;
		UVaRestJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json String value */" },
#endif
		{ "DisplayName", "Construct Json String Value" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json String value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueString_Parms, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueString_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructJsonValueString", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::VaRestSubsystem_eventConstructJsonValueString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::VaRestSubsystem_eventConstructJsonValueString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execConstructJsonValueString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueString(Z_Param_StringValue);
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function ConstructJsonValueString

// Begin Class UVaRestSubsystem Function ConstructVaRestJsonObject
struct Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics
{
	struct VaRestSubsystem_eventConstructVaRestJsonObject_Parms
	{
		UVaRestJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json object */" },
#endif
		{ "DisplayName", "Construct Json Object" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructVaRestJsonObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructVaRestJsonObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::VaRestSubsystem_eventConstructVaRestJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::VaRestSubsystem_eventConstructVaRestJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execConstructVaRestJsonObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonObject**)Z_Param__Result=P_THIS->ConstructVaRestJsonObject();
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function ConstructVaRestJsonObject

// Begin Class UVaRestSubsystem Function ConstructVaRestRequest
struct Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics
{
	struct VaRestSubsystem_eventConstructVaRestRequest_Parms
	{
		UVaRestRequestJSON* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates new request (totally empty) */" },
#endif
		{ "DisplayName", "Construct Json Request (Empty)" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates new request (totally empty)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructVaRestRequest_Parms, ReturnValue), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructVaRestRequest", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::VaRestSubsystem_eventConstructVaRestRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::VaRestSubsystem_eventConstructVaRestRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execConstructVaRestRequest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestRequestJSON**)Z_Param__Result=P_THIS->ConstructVaRestRequest();
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function ConstructVaRestRequest

// Begin Class UVaRestSubsystem Function ConstructVaRestRequestExt
struct Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics
{
	struct VaRestSubsystem_eventConstructVaRestRequestExt_Parms
	{
		EVaRestRequestVerb Verb;
		EVaRestRequestContentType ContentType;
		UVaRestRequestJSON* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates new request with defined verb and content type */" },
#endif
		{ "DisplayName", "Construct Json Request" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates new request with defined verb and content type" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructVaRestRequestExt_Parms, Verb), Z_Construct_UEnum_VaRest_EVaRestRequestVerb, METADATA_PARAMS(0, nullptr) }; // 2024740045
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructVaRestRequestExt_Parms, ContentType), Z_Construct_UEnum_VaRest_EVaRestRequestContentType, METADATA_PARAMS(0, nullptr) }; // 383282819
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructVaRestRequestExt_Parms, ReturnValue), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_Verb_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_Verb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ContentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructVaRestRequestExt", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::VaRestSubsystem_eventConstructVaRestRequestExt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::VaRestSubsystem_eventConstructVaRestRequestExt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execConstructVaRestRequestExt)
{
	P_GET_ENUM(EVaRestRequestVerb,Z_Param_Verb);
	P_GET_ENUM(EVaRestRequestContentType,Z_Param_ContentType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestRequestJSON**)Z_Param__Result=P_THIS->ConstructVaRestRequestExt(EVaRestRequestVerb(Z_Param_Verb),EVaRestRequestContentType(Z_Param_ContentType));
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function ConstructVaRestRequestExt

// Begin Class UVaRestSubsystem Function DecodeJsonObject
struct Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics
{
	struct VaRestSubsystem_eventDecodeJsonObject_Parms
	{
		FString JsonString;
		UVaRestJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Construct Json object from string */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Construct Json object from string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventDecodeJsonObject_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventDecodeJsonObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "DecodeJsonObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::VaRestSubsystem_eventDecodeJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::VaRestSubsystem_eventDecodeJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execDecodeJsonObject)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonObject**)Z_Param__Result=P_THIS->DecodeJsonObject(Z_Param_JsonString);
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function DecodeJsonObject

// Begin Class UVaRestSubsystem Function DecodeJsonValue
struct Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics
{
	struct VaRestSubsystem_eventDecodeJsonValue_Parms
	{
		FString JsonString;
		UVaRestJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Construct Json value from string */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Construct Json value from string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventDecodeJsonValue_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventDecodeJsonValue_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "DecodeJsonValue", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::VaRestSubsystem_eventDecodeJsonValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::VaRestSubsystem_eventDecodeJsonValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execDecodeJsonValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonValue**)Z_Param__Result=P_THIS->DecodeJsonValue(Z_Param_JsonString);
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function DecodeJsonValue

// Begin Class UVaRestSubsystem Function LoadJsonFromFile
struct Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics
{
	struct VaRestSubsystem_eventLoadJsonFromFile_Parms
	{
		FString Path;
		bool bIsRelativeToContentDir;
		UVaRestJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Load JSON from formatted text file\n\x09 * @param    bIsRelativeToContentDir    if set to 'false' path is treated as absolute\n\x09 */" },
#endif
		{ "CPP_Default_bIsRelativeToContentDir", "true" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load JSON from formatted text file\n@param    bIsRelativeToContentDir    if set to 'false' path is treated as absolute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRelativeToContentDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_bIsRelativeToContentDir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRelativeToContentDir;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventLoadJsonFromFile_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
void Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_SetBit(void* Obj)
{
	((VaRestSubsystem_eventLoadJsonFromFile_Parms*)Obj)->bIsRelativeToContentDir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir = { "bIsRelativeToContentDir", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestSubsystem_eventLoadJsonFromFile_Parms), &Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRelativeToContentDir_MetaData), NewProp_bIsRelativeToContentDir_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventLoadJsonFromFile_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "LoadJsonFromFile", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::VaRestSubsystem_eventLoadJsonFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::VaRestSubsystem_eventLoadJsonFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execLoadJsonFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_UBOOL(Z_Param_bIsRelativeToContentDir);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonObject**)Z_Param__Result=P_THIS->LoadJsonFromFile(Z_Param_Path,Z_Param_bIsRelativeToContentDir);
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function LoadJsonFromFile

// Begin Class UVaRestSubsystem Function StaticConstructVaRestJsonObject
struct Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics
{
	struct VaRestSubsystem_eventStaticConstructVaRestJsonObject_Parms
	{
		UVaRestJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json object (static one for MakeJson node, hack for #293) */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json object (static one for MakeJson node, hack for #293)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventStaticConstructVaRestJsonObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "StaticConstructVaRestJsonObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::VaRestSubsystem_eventStaticConstructVaRestJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::VaRestSubsystem_eventStaticConstructVaRestJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestSubsystem::execStaticConstructVaRestJsonObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonObject**)Z_Param__Result=UVaRestSubsystem::StaticConstructVaRestJsonObject();
	P_NATIVE_END;
}
// End Class UVaRestSubsystem Function StaticConstructVaRestJsonObject

// Begin Class UVaRestSubsystem
void UVaRestSubsystem::StaticRegisterNativesUVaRestSubsystem()
{
	UClass* Class = UVaRestSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallURL", &UVaRestSubsystem::execCallURL },
		{ "ConstructJsonValueArray", &UVaRestSubsystem::execConstructJsonValueArray },
		{ "ConstructJsonValueBool", &UVaRestSubsystem::execConstructJsonValueBool },
		{ "ConstructJsonValueNumber", &UVaRestSubsystem::execConstructJsonValueNumber },
		{ "ConstructJsonValueObject", &UVaRestSubsystem::execConstructJsonValueObject },
		{ "ConstructJsonValueString", &UVaRestSubsystem::execConstructJsonValueString },
		{ "ConstructVaRestJsonObject", &UVaRestSubsystem::execConstructVaRestJsonObject },
		{ "ConstructVaRestRequest", &UVaRestSubsystem::execConstructVaRestRequest },
		{ "ConstructVaRestRequestExt", &UVaRestSubsystem::execConstructVaRestRequestExt },
		{ "DecodeJsonObject", &UVaRestSubsystem::execDecodeJsonObject },
		{ "DecodeJsonValue", &UVaRestSubsystem::execDecodeJsonValue },
		{ "LoadJsonFromFile", &UVaRestSubsystem::execLoadJsonFromFile },
		{ "StaticConstructVaRestJsonObject", &UVaRestSubsystem::execStaticConstructVaRestJsonObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVaRestSubsystem);
UClass* Z_Construct_UClass_UVaRestSubsystem_NoRegister()
{
	return UVaRestSubsystem::StaticClass();
}
struct Z_Construct_UClass_UVaRestSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VaRestSubsystem.h" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RequestMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestSubsystem_CallURL, "CallURL" }, // 1178065776
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray, "ConstructJsonValueArray" }, // 358160961
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool, "ConstructJsonValueBool" }, // 2718196133
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber, "ConstructJsonValueNumber" }, // 1703465642
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject, "ConstructJsonValueObject" }, // 4193791549
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString, "ConstructJsonValueString" }, // 3403727782
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject, "ConstructVaRestJsonObject" }, // 3988686408
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest, "ConstructVaRestRequest" }, // 4097439876
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt, "ConstructVaRestRequestExt" }, // 3943733416
		{ &Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject, "DecodeJsonObject" }, // 290802777
		{ &Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue, "DecodeJsonValue" }, // 1852164700
		{ &Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile, "LoadJsonFromFile" }, // 3404504098
		{ &Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject, "StaticConstructVaRestJsonObject" }, // 3429104083
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap_ValueProp = { "RequestMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVaRestCallResponse, METADATA_PARAMS(0, nullptr) }; // 1673787008
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap_Key_KeyProp = { "RequestMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap = { "RequestMap", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestSubsystem, RequestMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestMap_MetaData), NewProp_RequestMap_MetaData) }; // 1673787008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRestSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVaRestSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRestSubsystem_Statics::ClassParams = {
	&UVaRestSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVaRestSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRestSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVaRestSubsystem()
{
	if (!Z_Registration_Info_UClass_UVaRestSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRestSubsystem.OuterSingleton, Z_Construct_UClass_UVaRestSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVaRestSubsystem.OuterSingleton;
}
template<> VAREST_API UClass* StaticClass<UVaRestSubsystem>()
{
	return UVaRestSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestSubsystem);
UVaRestSubsystem::~UVaRestSubsystem() {}
// End Class UVaRestSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVaRestCallResponse::StaticStruct, Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewStructOps, TEXT("VaRestCallResponse"), &Z_Registration_Info_UScriptStruct_VaRestCallResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVaRestCallResponse), 1673787008U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVaRestSubsystem, UVaRestSubsystem::StaticClass, TEXT("UVaRestSubsystem"), &Z_Registration_Info_UClass_UVaRestSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRestSubsystem), 3588902140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_2050484255(TEXT("/Script/VaRest"),
	Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_VaRestPlugin_Source_VaRest_Public_VaRestSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
