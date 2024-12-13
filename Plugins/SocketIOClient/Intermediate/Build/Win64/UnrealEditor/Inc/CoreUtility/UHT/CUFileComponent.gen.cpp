// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoreUtility/Public/CUFileComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUFileComponent() {}

// Begin Cross Module References
COREUTILITY_API UClass* Z_Construct_UClass_UCUFileComponent();
COREUTILITY_API UClass* Z_Construct_UClass_UCUFileComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CoreUtility();
// End Cross Module References

// Begin Class UCUFileComponent Function ExternalSaveDirectory
struct Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics
{
	struct CUFileComponent_eventExternalSaveDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** External storage in android context, otherwise uses project saved directory*/" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UCUFileComponent has been deprecated, Please use the same functions from UCUFileSubsystem. This component will be removed in the next stable version." },
		{ "ModuleRelativePath", "Public/CUFileComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "External storage in android context, otherwise uses project saved directory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventExternalSaveDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileComponent, nullptr, "ExternalSaveDirectory", nullptr, nullptr, Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::CUFileComponent_eventExternalSaveDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::CUFileComponent_eventExternalSaveDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileComponent::execExternalSaveDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ExternalSaveDirectory();
	P_NATIVE_END;
}
// End Class UCUFileComponent Function ExternalSaveDirectory

// Begin Class UCUFileComponent Function ProjectContentsDirectory
struct Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics
{
	struct CUFileComponent_eventProjectContentsDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current project contents directory path*/" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UCUFileComponent has been deprecated, Please use the same functions from UCUFileSubsystem. This component will be removed in the next stable version." },
		{ "ModuleRelativePath", "Public/CUFileComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current project contents directory path" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventProjectContentsDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileComponent, nullptr, "ProjectContentsDirectory", nullptr, nullptr, Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::CUFileComponent_eventProjectContentsDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::CUFileComponent_eventProjectContentsDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileComponent::execProjectContentsDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ProjectContentsDirectory();
	P_NATIVE_END;
}
// End Class UCUFileComponent Function ProjectContentsDirectory

// Begin Class UCUFileComponent Function ProjectDirectory
struct Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics
{
	struct CUFileComponent_eventProjectDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current project directory path*/" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UCUFileComponent has been deprecated, Please use the same functions from UCUFileSubsystem. This component will be removed in the next stable version." },
		{ "ModuleRelativePath", "Public/CUFileComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current project directory path" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventProjectDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileComponent, nullptr, "ProjectDirectory", nullptr, nullptr, Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::CUFileComponent_eventProjectDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::CUFileComponent_eventProjectDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileComponent_ProjectDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileComponent_ProjectDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileComponent::execProjectDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ProjectDirectory();
	P_NATIVE_END;
}
// End Class UCUFileComponent Function ProjectDirectory

// Begin Class UCUFileComponent Function ProjectRelativePath
struct Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics
{
	struct CUFileComponent_eventProjectRelativePath_Parms
	{
		FString InFullPath;
		FString OutProjectRelativePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UCUFileComponent has been deprecated, Please use the same functions from UCUFileSubsystem. This component will be removed in the next stable version." },
		{ "ModuleRelativePath", "Public/CUFileComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFullPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFullPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutProjectRelativePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::NewProp_InFullPath = { "InFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventProjectRelativePath_Parms, InFullPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFullPath_MetaData), NewProp_InFullPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::NewProp_OutProjectRelativePath = { "OutProjectRelativePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventProjectRelativePath_Parms, OutProjectRelativePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::NewProp_InFullPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::NewProp_OutProjectRelativePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileComponent, nullptr, "ProjectRelativePath", nullptr, nullptr, Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::CUFileComponent_eventProjectRelativePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::CUFileComponent_eventProjectRelativePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileComponent::execProjectRelativePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFullPath);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutProjectRelativePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProjectRelativePath(Z_Param_InFullPath,Z_Param_Out_OutProjectRelativePath);
	P_NATIVE_END;
}
// End Class UCUFileComponent Function ProjectRelativePath

// Begin Class UCUFileComponent Function ProjectSavedDirectory
struct Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics
{
	struct CUFileComponent_eventProjectSavedDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current project saved directory path*/" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UCUFileComponent has been deprecated, Please use the same functions from UCUFileSubsystem. This component will be removed in the next stable version." },
		{ "ModuleRelativePath", "Public/CUFileComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current project saved directory path" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventProjectSavedDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileComponent, nullptr, "ProjectSavedDirectory", nullptr, nullptr, Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::CUFileComponent_eventProjectSavedDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::CUFileComponent_eventProjectSavedDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileComponent::execProjectSavedDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ProjectSavedDirectory();
	P_NATIVE_END;
}
// End Class UCUFileComponent Function ProjectSavedDirectory

// Begin Class UCUFileComponent Function ReadBytesFromFile
struct Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics
{
	struct CUFileComponent_eventReadBytesFromFile_Parms
	{
		FString Directory;
		FString FileName;
		TArray<uint8> OutBytes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Read array of bytes from file at specified directory */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UCUFileComponent has been deprecated, Please use the same functions from UCUFileSubsystem. This component will be removed in the next stable version." },
		{ "ModuleRelativePath", "Public/CUFileComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read array of bytes from file at specified directory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBytes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventReadBytesFromFile_Parms, Directory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Directory_MetaData), NewProp_Directory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventReadBytesFromFile_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_OutBytes_Inner = { "OutBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_OutBytes = { "OutBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventReadBytesFromFile_Parms, OutBytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUFileComponent_eventReadBytesFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUFileComponent_eventReadBytesFromFile_Parms), &Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_Directory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_OutBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_OutBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileComponent, nullptr, "ReadBytesFromFile", nullptr, nullptr, Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::CUFileComponent_eventReadBytesFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::CUFileComponent_eventReadBytesFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileComponent::execReadBytesFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadBytesFromFile(Z_Param_Directory,Z_Param_FileName,Z_Param_Out_OutBytes);
	P_NATIVE_END;
}
// End Class UCUFileComponent Function ReadBytesFromFile

// Begin Class UCUFileComponent Function SaveBytesToFile
struct Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics
{
	struct CUFileComponent_eventSaveBytesToFile_Parms
	{
		TArray<uint8> Bytes;
		FString Directory;
		FString FileName;
		bool bLogSave;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Save array of bytes to file at specified directory */" },
#endif
		{ "CPP_Default_bLogSave", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UCUFileComponent has been deprecated, Please use the same functions from UCUFileSubsystem. This component will be removed in the next stable version." },
		{ "ModuleRelativePath", "Public/CUFileComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save array of bytes to file at specified directory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_bLogSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogSave;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventSaveBytesToFile_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventSaveBytesToFile_Parms, Directory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Directory_MetaData), NewProp_Directory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventSaveBytesToFile_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_bLogSave_SetBit(void* Obj)
{
	((CUFileComponent_eventSaveBytesToFile_Parms*)Obj)->bLogSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_bLogSave = { "bLogSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUFileComponent_eventSaveBytesToFile_Parms), &Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_bLogSave_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUFileComponent_eventSaveBytesToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUFileComponent_eventSaveBytesToFile_Parms), &Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_Directory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_bLogSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileComponent, nullptr, "SaveBytesToFile", nullptr, nullptr, Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::CUFileComponent_eventSaveBytesToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::CUFileComponent_eventSaveBytesToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileComponent::execSaveBytesToFile)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
	P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_UBOOL(Z_Param_bLogSave);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveBytesToFile(Z_Param_Out_Bytes,Z_Param_Directory,Z_Param_FileName,Z_Param_bLogSave);
	P_NATIVE_END;
}
// End Class UCUFileComponent Function SaveBytesToFile

// Begin Class UCUFileComponent Function SplitFullPath
struct Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics
{
	struct CUFileComponent_eventSplitFullPath_Parms
	{
		FString InFullPath;
		FString OutDirectory;
		FString OutFileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UCUFileComponent has been deprecated, Please use the same functions from UCUFileSubsystem. This component will be removed in the next stable version." },
		{ "ModuleRelativePath", "Public/CUFileComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFullPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFullPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::NewProp_InFullPath = { "InFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventSplitFullPath_Parms, InFullPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFullPath_MetaData), NewProp_InFullPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::NewProp_OutDirectory = { "OutDirectory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventSplitFullPath_Parms, OutDirectory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::NewProp_OutFileName = { "OutFileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileComponent_eventSplitFullPath_Parms, OutFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::NewProp_InFullPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::NewProp_OutDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::NewProp_OutFileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileComponent, nullptr, "SplitFullPath", nullptr, nullptr, Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::CUFileComponent_eventSplitFullPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::CUFileComponent_eventSplitFullPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileComponent_SplitFullPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileComponent_SplitFullPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileComponent::execSplitFullPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFullPath);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDirectory);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SplitFullPath(Z_Param_InFullPath,Z_Param_Out_OutDirectory,Z_Param_Out_OutFileName);
	P_NATIVE_END;
}
// End Class UCUFileComponent Function SplitFullPath

// Begin Class UCUFileComponent
void UCUFileComponent::StaticRegisterNativesUCUFileComponent()
{
	UClass* Class = UCUFileComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExternalSaveDirectory", &UCUFileComponent::execExternalSaveDirectory },
		{ "ProjectContentsDirectory", &UCUFileComponent::execProjectContentsDirectory },
		{ "ProjectDirectory", &UCUFileComponent::execProjectDirectory },
		{ "ProjectRelativePath", &UCUFileComponent::execProjectRelativePath },
		{ "ProjectSavedDirectory", &UCUFileComponent::execProjectSavedDirectory },
		{ "ReadBytesFromFile", &UCUFileComponent::execReadBytesFromFile },
		{ "SaveBytesToFile", &UCUFileComponent::execSaveBytesToFile },
		{ "SplitFullPath", &UCUFileComponent::execSplitFullPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCUFileComponent);
UClass* Z_Construct_UClass_UCUFileComponent_NoRegister()
{
	return UCUFileComponent::StaticClass();
}
struct Z_Construct_UClass_UCUFileComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Convenience component to save/load data from files\n*/" },
#endif
		{ "IncludePath", "CUFileComponent.h" },
		{ "ModuleRelativePath", "Public/CUFileComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience component to save/load data from files" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUFileComponent_ExternalSaveDirectory, "ExternalSaveDirectory" }, // 1137089835
		{ &Z_Construct_UFunction_UCUFileComponent_ProjectContentsDirectory, "ProjectContentsDirectory" }, // 1903155019
		{ &Z_Construct_UFunction_UCUFileComponent_ProjectDirectory, "ProjectDirectory" }, // 3286686146
		{ &Z_Construct_UFunction_UCUFileComponent_ProjectRelativePath, "ProjectRelativePath" }, // 1081716309
		{ &Z_Construct_UFunction_UCUFileComponent_ProjectSavedDirectory, "ProjectSavedDirectory" }, // 3698161715
		{ &Z_Construct_UFunction_UCUFileComponent_ReadBytesFromFile, "ReadBytesFromFile" }, // 2127650868
		{ &Z_Construct_UFunction_UCUFileComponent_SaveBytesToFile, "SaveBytesToFile" }, // 3326450007
		{ &Z_Construct_UFunction_UCUFileComponent_SplitFullPath, "SplitFullPath" }, // 444473706
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUFileComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCUFileComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUtility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCUFileComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCUFileComponent_Statics::ClassParams = {
	&UCUFileComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCUFileComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCUFileComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCUFileComponent()
{
	if (!Z_Registration_Info_UClass_UCUFileComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCUFileComponent.OuterSingleton, Z_Construct_UClass_UCUFileComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCUFileComponent.OuterSingleton;
}
template<> COREUTILITY_API UClass* StaticClass<UCUFileComponent>()
{
	return UCUFileComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCUFileComponent);
UCUFileComponent::~UCUFileComponent() {}
// End Class UCUFileComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCUFileComponent, UCUFileComponent::StaticClass, TEXT("UCUFileComponent"), &Z_Registration_Info_UClass_UCUFileComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCUFileComponent), 435579836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_2476142968(TEXT("/Script/CoreUtility"),
	Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
