// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoreUtility/Public/CUFileSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUFileSubsystem() {}

// Begin Cross Module References
COREUTILITY_API UClass* Z_Construct_UClass_UCUFileSubsystem();
COREUTILITY_API UClass* Z_Construct_UClass_UCUFileSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_CoreUtility();
// End Cross Module References

// Begin Class UCUFileSubsystem Function DeleteFileAtPath
struct Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics
{
	struct CUFileSubsystem_eventDeleteFileAtPath_Parms
	{
		FString Path;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventDeleteFileAtPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
void Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUFileSubsystem_eventDeleteFileAtPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUFileSubsystem_eventDeleteFileAtPath_Parms), &Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileSubsystem, nullptr, "DeleteFileAtPath", nullptr, nullptr, Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::CUFileSubsystem_eventDeleteFileAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::CUFileSubsystem_eventDeleteFileAtPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileSubsystem::execDeleteFileAtPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeleteFileAtPath(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UCUFileSubsystem Function DeleteFileAtPath

// Begin Class UCUFileSubsystem Function ExternalSaveDirectory
struct Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics
{
	struct CUFileSubsystem_eventExternalSaveDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** External storage in android context, otherwise uses project saved directory*/" },
#endif
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "External storage in android context, otherwise uses project saved directory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventExternalSaveDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileSubsystem, nullptr, "ExternalSaveDirectory", nullptr, nullptr, Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::CUFileSubsystem_eventExternalSaveDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::CUFileSubsystem_eventExternalSaveDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileSubsystem::execExternalSaveDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ExternalSaveDirectory();
	P_NATIVE_END;
}
// End Class UCUFileSubsystem Function ExternalSaveDirectory

// Begin Class UCUFileSubsystem Function ProjectContentsDirectory
struct Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics
{
	struct CUFileSubsystem_eventProjectContentsDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current project contents directory path*/" },
#endif
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current project contents directory path" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventProjectContentsDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileSubsystem, nullptr, "ProjectContentsDirectory", nullptr, nullptr, Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::CUFileSubsystem_eventProjectContentsDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::CUFileSubsystem_eventProjectContentsDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileSubsystem::execProjectContentsDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ProjectContentsDirectory();
	P_NATIVE_END;
}
// End Class UCUFileSubsystem Function ProjectContentsDirectory

// Begin Class UCUFileSubsystem Function ProjectDirectory
struct Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics
{
	struct CUFileSubsystem_eventProjectDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current project directory path*/" },
#endif
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current project directory path" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventProjectDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileSubsystem, nullptr, "ProjectDirectory", nullptr, nullptr, Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::CUFileSubsystem_eventProjectDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::CUFileSubsystem_eventProjectDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileSubsystem::execProjectDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ProjectDirectory();
	P_NATIVE_END;
}
// End Class UCUFileSubsystem Function ProjectDirectory

// Begin Class UCUFileSubsystem Function ProjectRelativePath
struct Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics
{
	struct CUFileSubsystem_eventProjectRelativePath_Parms
	{
		FString InFullPath;
		FString OutProjectRelativePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::NewProp_InFullPath = { "InFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventProjectRelativePath_Parms, InFullPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFullPath_MetaData), NewProp_InFullPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::NewProp_OutProjectRelativePath = { "OutProjectRelativePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventProjectRelativePath_Parms, OutProjectRelativePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::NewProp_InFullPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::NewProp_OutProjectRelativePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileSubsystem, nullptr, "ProjectRelativePath", nullptr, nullptr, Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::CUFileSubsystem_eventProjectRelativePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::CUFileSubsystem_eventProjectRelativePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileSubsystem::execProjectRelativePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFullPath);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutProjectRelativePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProjectRelativePath(Z_Param_InFullPath,Z_Param_Out_OutProjectRelativePath);
	P_NATIVE_END;
}
// End Class UCUFileSubsystem Function ProjectRelativePath

// Begin Class UCUFileSubsystem Function ProjectSavedDirectory
struct Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics
{
	struct CUFileSubsystem_eventProjectSavedDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current project saved directory path*/" },
#endif
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current project saved directory path" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventProjectSavedDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileSubsystem, nullptr, "ProjectSavedDirectory", nullptr, nullptr, Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::CUFileSubsystem_eventProjectSavedDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::CUFileSubsystem_eventProjectSavedDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileSubsystem::execProjectSavedDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ProjectSavedDirectory();
	P_NATIVE_END;
}
// End Class UCUFileSubsystem Function ProjectSavedDirectory

// Begin Class UCUFileSubsystem Function ReadBytesFromFile
struct Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics
{
	struct CUFileSubsystem_eventReadBytesFromFile_Parms
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
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventReadBytesFromFile_Parms, Directory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Directory_MetaData), NewProp_Directory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventReadBytesFromFile_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_OutBytes_Inner = { "OutBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_OutBytes = { "OutBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventReadBytesFromFile_Parms, OutBytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUFileSubsystem_eventReadBytesFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUFileSubsystem_eventReadBytesFromFile_Parms), &Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_Directory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_OutBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_OutBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileSubsystem, nullptr, "ReadBytesFromFile", nullptr, nullptr, Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::CUFileSubsystem_eventReadBytesFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::CUFileSubsystem_eventReadBytesFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileSubsystem::execReadBytesFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadBytesFromFile(Z_Param_Directory,Z_Param_FileName,Z_Param_Out_OutBytes);
	P_NATIVE_END;
}
// End Class UCUFileSubsystem Function ReadBytesFromFile

// Begin Class UCUFileSubsystem Function ReadBytesFromPath
struct Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics
{
	struct CUFileSubsystem_eventReadBytesFromPath_Parms
	{
		FString Path;
		TArray<uint8> OutBytes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Full path variant of ReadBytesFromFile */" },
#endif
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Full path variant of ReadBytesFromFile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBytes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventReadBytesFromPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::NewProp_OutBytes_Inner = { "OutBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::NewProp_OutBytes = { "OutBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventReadBytesFromPath_Parms, OutBytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUFileSubsystem_eventReadBytesFromPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUFileSubsystem_eventReadBytesFromPath_Parms), &Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::NewProp_OutBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::NewProp_OutBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileSubsystem, nullptr, "ReadBytesFromPath", nullptr, nullptr, Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::CUFileSubsystem_eventReadBytesFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::CUFileSubsystem_eventReadBytesFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileSubsystem::execReadBytesFromPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadBytesFromPath(Z_Param_Path,Z_Param_Out_OutBytes);
	P_NATIVE_END;
}
// End Class UCUFileSubsystem Function ReadBytesFromPath

// Begin Class UCUFileSubsystem Function SaveBytesToFile
struct Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics
{
	struct CUFileSubsystem_eventSaveBytesToFile_Parms
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
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventSaveBytesToFile_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventSaveBytesToFile_Parms, Directory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Directory_MetaData), NewProp_Directory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventSaveBytesToFile_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_bLogSave_SetBit(void* Obj)
{
	((CUFileSubsystem_eventSaveBytesToFile_Parms*)Obj)->bLogSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_bLogSave = { "bLogSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUFileSubsystem_eventSaveBytesToFile_Parms), &Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_bLogSave_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUFileSubsystem_eventSaveBytesToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUFileSubsystem_eventSaveBytesToFile_Parms), &Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_Directory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_bLogSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileSubsystem, nullptr, "SaveBytesToFile", nullptr, nullptr, Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::CUFileSubsystem_eventSaveBytesToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::CUFileSubsystem_eventSaveBytesToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileSubsystem::execSaveBytesToFile)
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
// End Class UCUFileSubsystem Function SaveBytesToFile

// Begin Class UCUFileSubsystem Function SaveBytesToPath
struct Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics
{
	struct CUFileSubsystem_eventSaveBytesToPath_Parms
	{
		TArray<uint8> Bytes;
		FString Path;
		bool bLogSave;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Full path variant of SaveBytesToFile */" },
#endif
		{ "CPP_Default_bLogSave", "false" },
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Full path variant of SaveBytesToFile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_bLogSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogSave;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventSaveBytesToPath_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventSaveBytesToPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
void Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_bLogSave_SetBit(void* Obj)
{
	((CUFileSubsystem_eventSaveBytesToPath_Parms*)Obj)->bLogSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_bLogSave = { "bLogSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUFileSubsystem_eventSaveBytesToPath_Parms), &Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_bLogSave_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUFileSubsystem_eventSaveBytesToPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUFileSubsystem_eventSaveBytesToPath_Parms), &Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_bLogSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileSubsystem, nullptr, "SaveBytesToPath", nullptr, nullptr, Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::CUFileSubsystem_eventSaveBytesToPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::CUFileSubsystem_eventSaveBytesToPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileSubsystem::execSaveBytesToPath)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_UBOOL(Z_Param_bLogSave);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveBytesToPath(Z_Param_Out_Bytes,Z_Param_Path,Z_Param_bLogSave);
	P_NATIVE_END;
}
// End Class UCUFileSubsystem Function SaveBytesToPath

// Begin Class UCUFileSubsystem Function SplitFullPath
struct Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics
{
	struct CUFileSubsystem_eventSplitFullPath_Parms
	{
		FString InFullPath;
		FString OutDirectory;
		FString OutFileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileUtility" },
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::NewProp_InFullPath = { "InFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventSplitFullPath_Parms, InFullPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFullPath_MetaData), NewProp_InFullPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::NewProp_OutDirectory = { "OutDirectory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventSplitFullPath_Parms, OutDirectory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::NewProp_OutFileName = { "OutFileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CUFileSubsystem_eventSplitFullPath_Parms, OutFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::NewProp_InFullPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::NewProp_OutDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::NewProp_OutFileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUFileSubsystem, nullptr, "SplitFullPath", nullptr, nullptr, Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::CUFileSubsystem_eventSplitFullPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::CUFileSubsystem_eventSplitFullPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCUFileSubsystem::execSplitFullPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFullPath);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDirectory);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SplitFullPath(Z_Param_InFullPath,Z_Param_Out_OutDirectory,Z_Param_Out_OutFileName);
	P_NATIVE_END;
}
// End Class UCUFileSubsystem Function SplitFullPath

// Begin Class UCUFileSubsystem
void UCUFileSubsystem::StaticRegisterNativesUCUFileSubsystem()
{
	UClass* Class = UCUFileSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteFileAtPath", &UCUFileSubsystem::execDeleteFileAtPath },
		{ "ExternalSaveDirectory", &UCUFileSubsystem::execExternalSaveDirectory },
		{ "ProjectContentsDirectory", &UCUFileSubsystem::execProjectContentsDirectory },
		{ "ProjectDirectory", &UCUFileSubsystem::execProjectDirectory },
		{ "ProjectRelativePath", &UCUFileSubsystem::execProjectRelativePath },
		{ "ProjectSavedDirectory", &UCUFileSubsystem::execProjectSavedDirectory },
		{ "ReadBytesFromFile", &UCUFileSubsystem::execReadBytesFromFile },
		{ "ReadBytesFromPath", &UCUFileSubsystem::execReadBytesFromPath },
		{ "SaveBytesToFile", &UCUFileSubsystem::execSaveBytesToFile },
		{ "SaveBytesToPath", &UCUFileSubsystem::execSaveBytesToPath },
		{ "SplitFullPath", &UCUFileSubsystem::execSplitFullPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCUFileSubsystem);
UClass* Z_Construct_UClass_UCUFileSubsystem_NoRegister()
{
	return UCUFileSubsystem::StaticClass();
}
struct Z_Construct_UClass_UCUFileSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "IncludePath", "CUFileSubsystem.h" },
		{ "ModuleRelativePath", "Public/CUFileSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUFileSubsystem_DeleteFileAtPath, "DeleteFileAtPath" }, // 2122686311
		{ &Z_Construct_UFunction_UCUFileSubsystem_ExternalSaveDirectory, "ExternalSaveDirectory" }, // 3568527209
		{ &Z_Construct_UFunction_UCUFileSubsystem_ProjectContentsDirectory, "ProjectContentsDirectory" }, // 4262638941
		{ &Z_Construct_UFunction_UCUFileSubsystem_ProjectDirectory, "ProjectDirectory" }, // 1451605583
		{ &Z_Construct_UFunction_UCUFileSubsystem_ProjectRelativePath, "ProjectRelativePath" }, // 2493453492
		{ &Z_Construct_UFunction_UCUFileSubsystem_ProjectSavedDirectory, "ProjectSavedDirectory" }, // 968327071
		{ &Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromFile, "ReadBytesFromFile" }, // 660648106
		{ &Z_Construct_UFunction_UCUFileSubsystem_ReadBytesFromPath, "ReadBytesFromPath" }, // 2248772950
		{ &Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToFile, "SaveBytesToFile" }, // 75711375
		{ &Z_Construct_UFunction_UCUFileSubsystem_SaveBytesToPath, "SaveBytesToPath" }, // 2903650562
		{ &Z_Construct_UFunction_UCUFileSubsystem_SplitFullPath, "SplitFullPath" }, // 1840501681
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUFileSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCUFileSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUtility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCUFileSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCUFileSubsystem_Statics::ClassParams = {
	&UCUFileSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCUFileSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCUFileSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCUFileSubsystem()
{
	if (!Z_Registration_Info_UClass_UCUFileSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCUFileSubsystem.OuterSingleton, Z_Construct_UClass_UCUFileSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCUFileSubsystem.OuterSingleton;
}
template<> COREUTILITY_API UClass* StaticClass<UCUFileSubsystem>()
{
	return UCUFileSubsystem::StaticClass();
}
UCUFileSubsystem::UCUFileSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCUFileSubsystem);
UCUFileSubsystem::~UCUFileSubsystem() {}
// End Class UCUFileSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCUFileSubsystem, UCUFileSubsystem::StaticClass, TEXT("UCUFileSubsystem"), &Z_Registration_Info_UClass_UCUFileSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCUFileSubsystem), 4191383347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_3504672615(TEXT("/Script/CoreUtility"),
	Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Stars_Beyond_Game_Plugins_SocketIOClient_Source_CoreUtility_Public_CUFileSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
