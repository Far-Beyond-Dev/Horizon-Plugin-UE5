// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIOJson/Public/SIOJsonObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIOJsonObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonObject();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonObject_NoRegister();
SIOJSON_API UClass* Z_Construct_UClass_USIOJsonValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_SIOJson();
// End Cross Module References

// Begin Class USIOJsonObject Function ConstructJsonObject
struct Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics
{
	struct SIOJsonObject_eventConstructJsonObject_Parms
	{
		UObject* WorldContextObject;
		USIOJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json object, cannot be pure  */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Object" },
		{ "HidePin", "WorldContextObject" },
		{ "KeyWords", "create make" },
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json object, cannot be pure" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventConstructJsonObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventConstructJsonObject_Parms, ReturnValue), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "ConstructJsonObject", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::SIOJsonObject_eventConstructJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::SIOJsonObject_eventConstructJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execConstructJsonObject)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonObject**)Z_Param__Result=USIOJsonObject::ConstructJsonObject(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function ConstructJsonObject

// Begin Class USIOJsonObject Function DecodeJson
struct Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics
{
	struct SIOJsonObject_eventDecodeJson_Parms
	{
		FString JsonString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Construct Json object from string */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Construct Json object from string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventDecodeJson_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
void Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventDecodeJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventDecodeJson_Parms), &Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "DecodeJson", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::SIOJsonObject_eventDecodeJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::SIOJsonObject_eventDecodeJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_DecodeJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_DecodeJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execDecodeJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DecodeJson(Z_Param_JsonString);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function DecodeJson

// Begin Class USIOJsonObject Function EncodeJson
struct Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics
{
	struct SIOJsonObject_eventEncodeJson_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Serialize Json to string (formatted with line breaks) */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serialize Json to string (formatted with line breaks)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventEncodeJson_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "EncodeJson", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::SIOJsonObject_eventEncodeJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::SIOJsonObject_eventEncodeJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_EncodeJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_EncodeJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execEncodeJson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->EncodeJson();
	P_NATIVE_END;
}
// End Class USIOJsonObject Function EncodeJson

// Begin Class USIOJsonObject Function EncodeJsonToSingleString
struct Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics
{
	struct SIOJsonObject_eventEncodeJsonToSingleString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Serialize Json to string (single string without line breaks) */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serialize Json to string (single string without line breaks)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventEncodeJsonToSingleString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "EncodeJsonToSingleString", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::SIOJsonObject_eventEncodeJsonToSingleString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::SIOJsonObject_eventEncodeJsonToSingleString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execEncodeJsonToSingleString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->EncodeJsonToSingleString();
	P_NATIVE_END;
}
// End Class USIOJsonObject Function EncodeJsonToSingleString

// Begin Class USIOJsonObject Function GetArrayField
struct Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics
{
	struct SIOJsonObject_eventGetArrayField_Parms
	{
		FString FieldName;
		TArray<USIOJsonValue*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Json Array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Json Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetArrayField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::SIOJsonObject_eventGetArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::SIOJsonObject_eventGetArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USIOJsonValue*>*)Z_Param__Result=P_THIS->GetArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetArrayField

// Begin Class USIOJsonObject Function GetBinaryField
struct Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics
{
	struct SIOJsonObject_eventGetBinaryField_Parms
	{
		FString FieldName;
		TArray<uint8> OutBinary;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a binary buffer array. */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a binary buffer array." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutBinary_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBinary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetBinaryField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_OutBinary_Inner = { "OutBinary", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_OutBinary = { "OutBinary", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetBinaryField_Parms, OutBinary), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_OutBinary_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::NewProp_OutBinary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetBinaryField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::SIOJsonObject_eventGetBinaryField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::SIOJsonObject_eventGetBinaryField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetBinaryField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetBinaryField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetBinaryField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBinary);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBinaryField(Z_Param_FieldName,Z_Param_Out_OutBinary);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetBinaryField

// Begin Class USIOJsonObject Function GetBoolArrayField
struct Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics
{
	struct SIOJsonObject_eventGetBoolArrayField_Parms
	{
		FString FieldName;
		TArray<bool> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Bool Array. Use it only if you're sure that array is uniform! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Bool Array. Use it only if you're sure that array is uniform!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetBoolArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetBoolArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetBoolArrayField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::SIOJsonObject_eventGetBoolArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::SIOJsonObject_eventGetBoolArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetBoolArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<bool>*)Z_Param__Result=P_THIS->GetBoolArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetBoolArrayField

// Begin Class USIOJsonObject Function GetBoolField
struct Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics
{
	struct SIOJsonObject_eventGetBoolField_Parms
	{
		FString FieldName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a boolean. */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a boolean." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetBoolField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventGetBoolField_Parms), &Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetBoolField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::SIOJsonObject_eventGetBoolField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::SIOJsonObject_eventGetBoolField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetBoolField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetBoolField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetBoolField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetBoolField

// Begin Class USIOJsonObject Function GetField
struct Z_Construct_UFunction_USIOJsonObject_GetField_Statics
{
	struct SIOJsonObject_eventGetField_Parms
	{
		FString FieldName;
		USIOJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a JsonValue */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a JsonValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_GetField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetField_Parms, ReturnValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetField_Statics::SIOJsonObject_eventGetField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetField_Statics::SIOJsonObject_eventGetField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonValue**)Z_Param__Result=P_THIS->GetField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetField

// Begin Class USIOJsonObject Function GetFieldNames
struct Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics
{
	struct SIOJsonObject_eventGetFieldNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a list of field names that exist in the object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a list of field names that exist in the object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetFieldNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetFieldNames", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::SIOJsonObject_eventGetFieldNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::SIOJsonObject_eventGetFieldNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetFieldNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetFieldNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetFieldNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetFieldNames();
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetFieldNames

// Begin Class USIOJsonObject Function GetNumberArrayField
struct Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics
{
	struct SIOJsonObject_eventGetNumberArrayField_Parms
	{
		FString FieldName;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Number Array. Use it only if you're sure that array is uniform!\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Number Array. Use it only if you're sure that array is uniform!\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetNumberArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetNumberArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetNumberArrayField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::SIOJsonObject_eventGetNumberArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::SIOJsonObject_eventGetNumberArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetNumberArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetNumberArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetNumberArrayField

// Begin Class USIOJsonObject Function GetNumberField
struct Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics
{
	struct SIOJsonObject_eventGetNumberField_Parms
	{
		FString FieldName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a number. Ensures that the field is present and is of type Json number.\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a number. Ensures that the field is present and is of type Json number.\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetNumberField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetNumberField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetNumberField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::SIOJsonObject_eventGetNumberField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::SIOJsonObject_eventGetNumberField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetNumberField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetNumberField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetNumberField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNumberField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetNumberField

// Begin Class USIOJsonObject Function GetObjectArrayField
struct Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics
{
	struct SIOJsonObject_eventGetObjectArrayField_Parms
	{
		FString FieldName;
		TArray<USIOJsonObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as an Object Array. Use it only if you're sure that array is uniform! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as an Object Array. Use it only if you're sure that array is uniform!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetObjectArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetObjectArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetObjectArrayField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::SIOJsonObject_eventGetObjectArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::SIOJsonObject_eventGetObjectArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetObjectArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USIOJsonObject*>*)Z_Param__Result=P_THIS->GetObjectArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetObjectArrayField

// Begin Class USIOJsonObject Function GetObjectField
struct Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics
{
	struct SIOJsonObject_eventGetObjectField_Parms
	{
		FString FieldName;
		USIOJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Json object. */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Json object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetObjectField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetObjectField_Parms, ReturnValue), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetObjectField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::SIOJsonObject_eventGetObjectField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::SIOJsonObject_eventGetObjectField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetObjectField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetObjectField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetObjectField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIOJsonObject**)Z_Param__Result=P_THIS->GetObjectField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetObjectField

// Begin Class USIOJsonObject Function GetStringArrayField
struct Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics
{
	struct SIOJsonObject_eventGetStringArrayField_Parms
	{
		FString FieldName;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a String Array. Use it only if you're sure that array is uniform! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a String Array. Use it only if you're sure that array is uniform!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetStringArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetStringArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetStringArrayField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::SIOJsonObject_eventGetStringArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::SIOJsonObject_eventGetStringArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetStringArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetStringArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetStringArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetStringArrayField

// Begin Class USIOJsonObject Function GetStringField
struct Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics
{
	struct SIOJsonObject_eventGetStringField_Parms
	{
		FString FieldName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a string. */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetStringField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventGetStringField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "GetStringField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::SIOJsonObject_eventGetStringField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::SIOJsonObject_eventGetStringField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_GetStringField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_GetStringField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execGetStringField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function GetStringField

// Begin Class USIOJsonObject Function HasField
struct Z_Construct_UFunction_USIOJsonObject_HasField_Statics
{
	struct SIOJsonObject_eventHasField_Parms
	{
		FString FieldName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks to see if the FieldName exists in the object */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks to see if the FieldName exists in the object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventHasField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventHasField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventHasField_Parms), &Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_HasField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_HasField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_HasField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_HasField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "HasField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_HasField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_HasField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_HasField_Statics::SIOJsonObject_eventHasField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_HasField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_HasField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_HasField_Statics::SIOJsonObject_eventHasField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_HasField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_HasField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execHasField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function HasField

// Begin Class USIOJsonObject Function MergeJsonObject
struct Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics
{
	struct SIOJsonObject_eventMergeJsonObject_Parms
	{
		USIOJsonObject* InJsonObject;
		bool Overwrite;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds all of the fields from one json object to this one */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds all of the fields from one json object to this one" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InJsonObject;
	static void NewProp_Overwrite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Overwrite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_InJsonObject = { "InJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventMergeJsonObject_Parms, InJsonObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_Overwrite_SetBit(void* Obj)
{
	((SIOJsonObject_eventMergeJsonObject_Parms*)Obj)->Overwrite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_Overwrite = { "Overwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventMergeJsonObject_Parms), &Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_Overwrite_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_InJsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::NewProp_Overwrite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "MergeJsonObject", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::SIOJsonObject_eventMergeJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::SIOJsonObject_eventMergeJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_MergeJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_MergeJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execMergeJsonObject)
{
	P_GET_OBJECT(USIOJsonObject,Z_Param_InJsonObject);
	P_GET_UBOOL(Z_Param_Overwrite);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MergeJsonObject(Z_Param_InJsonObject,Z_Param_Overwrite);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function MergeJsonObject

// Begin Class USIOJsonObject Function RemoveField
struct Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics
{
	struct SIOJsonObject_eventRemoveField_Parms
	{
		FString FieldName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove field named FieldName */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove field named FieldName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventRemoveField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::NewProp_FieldName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "RemoveField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::SIOJsonObject_eventRemoveField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::SIOJsonObject_eventRemoveField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_RemoveField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_RemoveField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execRemoveField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function RemoveField

// Begin Class USIOJsonObject Function Reset
struct Z_Construct_UFunction_USIOJsonObject_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset all internal data */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset all internal data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_Reset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIOJsonObject_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// End Class USIOJsonObject Function Reset

// Begin Class USIOJsonObject Function SetArrayField
struct Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics
{
	struct SIOJsonObject_eventSetArrayField_Parms
	{
		FString FieldName;
		TArray<USIOJsonValue*> InArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Json Array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Json Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetArrayField_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArray_MetaData), NewProp_InArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::NewProp_InArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetArrayField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::SIOJsonObject_eventSetArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::SIOJsonObject_eventSetArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(USIOJsonValue*,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArrayField(Z_Param_FieldName,Z_Param_Out_InArray);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function SetArrayField

// Begin Class USIOJsonObject Function SetBinaryField
struct Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics
{
	struct SIOJsonObject_eventSetBinaryField_Parms
	{
		FString FieldName;
		TArray<uint8> Bytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an BinaryField named FieldName and binary buffer array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an BinaryField named FieldName and binary buffer array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetBinaryField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetBinaryField_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::NewProp_Bytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetBinaryField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::SIOJsonObject_eventSetBinaryField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::SIOJsonObject_eventSetBinaryField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetBinaryField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetBinaryField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetBinaryField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBinaryField(Z_Param_FieldName,Z_Param_Out_Bytes);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function SetBinaryField

// Begin Class USIOJsonObject Function SetBoolArrayField
struct Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics
{
	struct SIOJsonObject_eventSetBoolArrayField_Parms
	{
		FString FieldName;
		TArray<bool> BoolArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Bool Array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Bool Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetBoolArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_Inner = { "BoolArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray = { "BoolArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetBoolArrayField_Parms, BoolArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolArray_MetaData), NewProp_BoolArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetBoolArrayField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::SIOJsonObject_eventSetBoolArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::SIOJsonObject_eventSetBoolArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetBoolArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(bool,Z_Param_Out_BoolArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolArrayField(Z_Param_FieldName,Z_Param_Out_BoolArray);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function SetBoolArrayField

// Begin Class USIOJsonObject Function SetBoolField
struct Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics
{
	struct SIOJsonObject_eventSetBoolField_Parms
	{
		FString FieldName;
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set a boolean field named FieldName and value of InValue */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a boolean field named FieldName and value of InValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetBoolField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((SIOJsonObject_eventSetBoolField_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIOJsonObject_eventSetBoolField_Parms), &Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetBoolField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::SIOJsonObject_eventSetBoolField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::SIOJsonObject_eventSetBoolField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetBoolField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetBoolField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetBoolField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolField(Z_Param_FieldName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function SetBoolField

// Begin Class USIOJsonObject Function SetField
struct Z_Construct_UFunction_USIOJsonObject_SetField_Statics
{
	struct SIOJsonObject_eventSetField_Parms
	{
		FString FieldName;
		USIOJsonValue* JsonValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a field named FieldName with a Value */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a field named FieldName with a Value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_SetField_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetField_Parms, JsonValue), Z_Construct_UClass_USIOJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetField_Statics::NewProp_JsonValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_SetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_SetField_Statics::SIOJsonObject_eventSetField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetField_Statics::SIOJsonObject_eventSetField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_OBJECT(USIOJsonValue,Z_Param_JsonValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetField(Z_Param_FieldName,Z_Param_JsonValue);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function SetField

// Begin Class USIOJsonObject Function SetNumberArrayField
struct Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics
{
	struct SIOJsonObject_eventSetNumberArrayField_Parms
	{
		FString FieldName;
		TArray<float> NumberArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Number Array\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Number Array\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumberArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NumberArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetNumberArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_Inner = { "NumberArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray = { "NumberArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetNumberArrayField_Parms, NumberArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberArray_MetaData), NewProp_NumberArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetNumberArrayField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::SIOJsonObject_eventSetNumberArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::SIOJsonObject_eventSetNumberArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetNumberArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(float,Z_Param_Out_NumberArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberArrayField(Z_Param_FieldName,Z_Param_Out_NumberArray);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function SetNumberArrayField

// Begin Class USIOJsonObject Function SetNumberField
struct Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics
{
	struct SIOJsonObject_eventSetNumberField_Parms
	{
		FString FieldName;
		float Number;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a field named FieldName with Number as value\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a field named FieldName with Number as value\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetNumberField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetNumberField_Parms, Number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::NewProp_Number,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetNumberField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::SIOJsonObject_eventSetNumberField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::SIOJsonObject_eventSetNumberField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetNumberField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetNumberField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetNumberField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberField(Z_Param_FieldName,Z_Param_Number);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function SetNumberField

// Begin Class USIOJsonObject Function SetObjectArrayField
struct Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics
{
	struct SIOJsonObject_eventSetObjectArrayField_Parms
	{
		FString FieldName;
		TArray<USIOJsonObject*> ObjectArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Ob Array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Ob Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetObjectArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_Inner = { "ObjectArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray = { "ObjectArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetObjectArrayField_Parms, ObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectArray_MetaData), NewProp_ObjectArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetObjectArrayField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::SIOJsonObject_eventSetObjectArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::SIOJsonObject_eventSetObjectArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetObjectArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(USIOJsonObject*,Z_Param_Out_ObjectArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetObjectArrayField(Z_Param_FieldName,Z_Param_Out_ObjectArray);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function SetObjectArrayField

// Begin Class USIOJsonObject Function SetObjectField
struct Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics
{
	struct SIOJsonObject_eventSetObjectField_Parms
	{
		FString FieldName;
		USIOJsonObject* JsonObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of JsonObject */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of JsonObject" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetObjectField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetObjectField_Parms, JsonObject), Z_Construct_UClass_USIOJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::NewProp_JsonObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetObjectField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::SIOJsonObject_eventSetObjectField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::SIOJsonObject_eventSetObjectField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetObjectField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetObjectField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetObjectField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_OBJECT(USIOJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetObjectField(Z_Param_FieldName,Z_Param_JsonObject);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function SetObjectField

// Begin Class USIOJsonObject Function SetStringArrayField
struct Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics
{
	struct SIOJsonObject_eventSetStringArrayField_Parms
	{
		FString FieldName;
		TArray<FString> StringArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of String Array */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of String Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetStringArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetStringArrayField_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringArray_MetaData), NewProp_StringArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_StringArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::NewProp_StringArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetStringArrayField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::SIOJsonObject_eventSetStringArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::SIOJsonObject_eventSetStringArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetStringArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetStringArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetStringArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStringArrayField(Z_Param_FieldName,Z_Param_Out_StringArray);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function SetStringArrayField

// Begin Class USIOJsonObject Function SetStringField
struct Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics
{
	struct SIOJsonObject_eventSetStringField_Parms
	{
		FString FieldName;
		FString StringValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SIOJ|Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a field named FieldName with value of StringValue */" },
#endif
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a field named FieldName with value of StringValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetStringField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIOJsonObject_eventSetStringField_Parms, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::NewProp_StringValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIOJsonObject, nullptr, "SetStringField", nullptr, nullptr, Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::SIOJsonObject_eventSetStringField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::SIOJsonObject_eventSetStringField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIOJsonObject_SetStringField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIOJsonObject_SetStringField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIOJsonObject::execSetStringField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStringField(Z_Param_FieldName,Z_Param_StringValue);
	P_NATIVE_END;
}
// End Class USIOJsonObject Function SetStringField

// Begin Class USIOJsonObject
void USIOJsonObject::StaticRegisterNativesUSIOJsonObject()
{
	UClass* Class = USIOJsonObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConstructJsonObject", &USIOJsonObject::execConstructJsonObject },
		{ "DecodeJson", &USIOJsonObject::execDecodeJson },
		{ "EncodeJson", &USIOJsonObject::execEncodeJson },
		{ "EncodeJsonToSingleString", &USIOJsonObject::execEncodeJsonToSingleString },
		{ "GetArrayField", &USIOJsonObject::execGetArrayField },
		{ "GetBinaryField", &USIOJsonObject::execGetBinaryField },
		{ "GetBoolArrayField", &USIOJsonObject::execGetBoolArrayField },
		{ "GetBoolField", &USIOJsonObject::execGetBoolField },
		{ "GetField", &USIOJsonObject::execGetField },
		{ "GetFieldNames", &USIOJsonObject::execGetFieldNames },
		{ "GetNumberArrayField", &USIOJsonObject::execGetNumberArrayField },
		{ "GetNumberField", &USIOJsonObject::execGetNumberField },
		{ "GetObjectArrayField", &USIOJsonObject::execGetObjectArrayField },
		{ "GetObjectField", &USIOJsonObject::execGetObjectField },
		{ "GetStringArrayField", &USIOJsonObject::execGetStringArrayField },
		{ "GetStringField", &USIOJsonObject::execGetStringField },
		{ "HasField", &USIOJsonObject::execHasField },
		{ "MergeJsonObject", &USIOJsonObject::execMergeJsonObject },
		{ "RemoveField", &USIOJsonObject::execRemoveField },
		{ "Reset", &USIOJsonObject::execReset },
		{ "SetArrayField", &USIOJsonObject::execSetArrayField },
		{ "SetBinaryField", &USIOJsonObject::execSetBinaryField },
		{ "SetBoolArrayField", &USIOJsonObject::execSetBoolArrayField },
		{ "SetBoolField", &USIOJsonObject::execSetBoolField },
		{ "SetField", &USIOJsonObject::execSetField },
		{ "SetNumberArrayField", &USIOJsonObject::execSetNumberArrayField },
		{ "SetNumberField", &USIOJsonObject::execSetNumberField },
		{ "SetObjectArrayField", &USIOJsonObject::execSetObjectArrayField },
		{ "SetObjectField", &USIOJsonObject::execSetObjectField },
		{ "SetStringArrayField", &USIOJsonObject::execSetStringArrayField },
		{ "SetStringField", &USIOJsonObject::execSetStringField },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIOJsonObject);
UClass* Z_Construct_UClass_USIOJsonObject_NoRegister()
{
	return USIOJsonObject::StaticClass();
}
struct Z_Construct_UClass_USIOJsonObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprintable FJsonObject wrapper\n */" },
#endif
		{ "IncludePath", "SIOJsonObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SIOJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprintable FJsonObject wrapper" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIOJsonObject_ConstructJsonObject, "ConstructJsonObject" }, // 3158870741
		{ &Z_Construct_UFunction_USIOJsonObject_DecodeJson, "DecodeJson" }, // 2937386659
		{ &Z_Construct_UFunction_USIOJsonObject_EncodeJson, "EncodeJson" }, // 4109946821
		{ &Z_Construct_UFunction_USIOJsonObject_EncodeJsonToSingleString, "EncodeJsonToSingleString" }, // 1212786210
		{ &Z_Construct_UFunction_USIOJsonObject_GetArrayField, "GetArrayField" }, // 3488003342
		{ &Z_Construct_UFunction_USIOJsonObject_GetBinaryField, "GetBinaryField" }, // 1978237872
		{ &Z_Construct_UFunction_USIOJsonObject_GetBoolArrayField, "GetBoolArrayField" }, // 2650114329
		{ &Z_Construct_UFunction_USIOJsonObject_GetBoolField, "GetBoolField" }, // 3047853877
		{ &Z_Construct_UFunction_USIOJsonObject_GetField, "GetField" }, // 3918643500
		{ &Z_Construct_UFunction_USIOJsonObject_GetFieldNames, "GetFieldNames" }, // 3491758413
		{ &Z_Construct_UFunction_USIOJsonObject_GetNumberArrayField, "GetNumberArrayField" }, // 2257581631
		{ &Z_Construct_UFunction_USIOJsonObject_GetNumberField, "GetNumberField" }, // 1889734919
		{ &Z_Construct_UFunction_USIOJsonObject_GetObjectArrayField, "GetObjectArrayField" }, // 628565873
		{ &Z_Construct_UFunction_USIOJsonObject_GetObjectField, "GetObjectField" }, // 2497996271
		{ &Z_Construct_UFunction_USIOJsonObject_GetStringArrayField, "GetStringArrayField" }, // 1505692598
		{ &Z_Construct_UFunction_USIOJsonObject_GetStringField, "GetStringField" }, // 942449128
		{ &Z_Construct_UFunction_USIOJsonObject_HasField, "HasField" }, // 2736627753
		{ &Z_Construct_UFunction_USIOJsonObject_MergeJsonObject, "MergeJsonObject" }, // 1948416234
		{ &Z_Construct_UFunction_USIOJsonObject_RemoveField, "RemoveField" }, // 3075386794
		{ &Z_Construct_UFunction_USIOJsonObject_Reset, "Reset" }, // 1693041287
		{ &Z_Construct_UFunction_USIOJsonObject_SetArrayField, "SetArrayField" }, // 1187419929
		{ &Z_Construct_UFunction_USIOJsonObject_SetBinaryField, "SetBinaryField" }, // 4062455642
		{ &Z_Construct_UFunction_USIOJsonObject_SetBoolArrayField, "SetBoolArrayField" }, // 2571584490
		{ &Z_Construct_UFunction_USIOJsonObject_SetBoolField, "SetBoolField" }, // 4099943770
		{ &Z_Construct_UFunction_USIOJsonObject_SetField, "SetField" }, // 1052235586
		{ &Z_Construct_UFunction_USIOJsonObject_SetNumberArrayField, "SetNumberArrayField" }, // 2790344014
		{ &Z_Construct_UFunction_USIOJsonObject_SetNumberField, "SetNumberField" }, // 2415540254
		{ &Z_Construct_UFunction_USIOJsonObject_SetObjectArrayField, "SetObjectArrayField" }, // 3595058324
		{ &Z_Construct_UFunction_USIOJsonObject_SetObjectField, "SetObjectField" }, // 256508705
		{ &Z_Construct_UFunction_USIOJsonObject_SetStringArrayField, "SetStringArrayField" }, // 672430224
		{ &Z_Construct_UFunction_USIOJsonObject_SetStringField, "SetStringField" }, // 1979286489
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIOJsonObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIOJsonObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SIOJson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJsonObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIOJsonObject_Statics::ClassParams = {
	&USIOJsonObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIOJsonObject_Statics::Class_MetaDataParams), Z_Construct_UClass_USIOJsonObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIOJsonObject()
{
	if (!Z_Registration_Info_UClass_USIOJsonObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIOJsonObject.OuterSingleton, Z_Construct_UClass_USIOJsonObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIOJsonObject.OuterSingleton;
}
template<> SIOJSON_API UClass* StaticClass<USIOJsonObject>()
{
	return USIOJsonObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIOJsonObject);
USIOJsonObject::~USIOJsonObject() {}
// End Class USIOJsonObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIOJsonObject, USIOJsonObject::StaticClass, TEXT("USIOJsonObject"), &Z_Registration_Info_UClass_USIOJsonObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIOJsonObject), 88743493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_4103543335(TEXT("/Script/SIOJson"),
	Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_SIOJson_Public_SIOJsonObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
