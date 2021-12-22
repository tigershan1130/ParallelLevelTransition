// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicLevelTransition/Public/DLTransitionFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLTransitionFunctionLibrary() {}
// Cross Module References
	DYNAMICLEVELTRANSITION_API UClass* Z_Construct_UClass_UDLTransitionFunctionLibrary_NoRegister();
	DYNAMICLEVELTRANSITION_API UClass* Z_Construct_UClass_UDLTransitionFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DynamicLevelTransition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UDLTransitionFunctionLibrary::execTurnOnStencilForCharacters)
	{
		P_GET_TARRAY(APawn*,Z_Param_Characters);
		P_GET_PROPERTY(FIntProperty,Z_Param_StencilValue);
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDLTransitionFunctionLibrary::TurnOnStencilForCharacters(Z_Param_Characters,Z_Param_StencilValue,Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDLTransitionFunctionLibrary::execDisableParallelLevelTransitionEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObj);
		P_GET_TARRAY(APawn*,Z_Param_Characters);
		P_GET_OBJECT(APawn,Z_Param_CurrentCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDLTransitionFunctionLibrary::DisableParallelLevelTransitionEffect(Z_Param_WorldContextObj,Z_Param_Characters,Z_Param_CurrentCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDLTransitionFunctionLibrary::execEnableParallelLevelTransitionEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObj);
		P_GET_TARRAY(APawn*,Z_Param_Characters);
		P_GET_OBJECT(APawn,Z_Param_CurrentCharacter);
		P_GET_STRUCT(FVector,Z_Param_EndPoint);
		P_GET_STRUCT(FVector,Z_Param_StartPoint);
		P_GET_PROPERTY(FStrProperty,Z_Param_FirstCameraSpringBoomName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FirstCameraName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDLTransitionFunctionLibrary::EnableParallelLevelTransitionEffect(Z_Param_WorldContextObj,Z_Param_Characters,Z_Param_CurrentCharacter,Z_Param_EndPoint,Z_Param_StartPoint,Z_Param_FirstCameraSpringBoomName,Z_Param_FirstCameraName);
		P_NATIVE_END;
	}
	void UDLTransitionFunctionLibrary::StaticRegisterNativesUDLTransitionFunctionLibrary()
	{
		UClass* Class = UDLTransitionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableParallelLevelTransitionEffect", &UDLTransitionFunctionLibrary::execDisableParallelLevelTransitionEffect },
			{ "EnableParallelLevelTransitionEffect", &UDLTransitionFunctionLibrary::execEnableParallelLevelTransitionEffect },
			{ "TurnOnStencilForCharacters", &UDLTransitionFunctionLibrary::execTurnOnStencilForCharacters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics
	{
		struct DLTransitionFunctionLibrary_eventDisableParallelLevelTransitionEffect_Parms
		{
			UObject* WorldContextObj;
			TArray<APawn*> Characters;
			APawn* CurrentCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObj;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Characters_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Characters;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::NewProp_WorldContextObj = { "WorldContextObj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventDisableParallelLevelTransitionEffect_Parms, WorldContextObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventDisableParallelLevelTransitionEffect_Parms, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventDisableParallelLevelTransitionEffect_Parms, CurrentCharacter), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::NewProp_WorldContextObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::NewProp_Characters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::NewProp_Characters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::NewProp_CurrentCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Level Transition" },
		{ "ModuleRelativePath", "Public/DLTransitionFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObj" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLTransitionFunctionLibrary, nullptr, "DisableParallelLevelTransitionEffect", nullptr, nullptr, sizeof(DLTransitionFunctionLibrary_eventDisableParallelLevelTransitionEffect_Parms), Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics
	{
		struct DLTransitionFunctionLibrary_eventEnableParallelLevelTransitionEffect_Parms
		{
			UObject* WorldContextObj;
			TArray<APawn*> Characters;
			APawn* CurrentCharacter;
			FVector EndPoint;
			FVector StartPoint;
			FString FirstCameraSpringBoomName;
			FString FirstCameraName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObj;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Characters_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Characters;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstCameraSpringBoomName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FirstCameraSpringBoomName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstCameraName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FirstCameraName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_WorldContextObj = { "WorldContextObj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventEnableParallelLevelTransitionEffect_Parms, WorldContextObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventEnableParallelLevelTransitionEffect_Parms, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_CurrentCharacter = { "CurrentCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventEnableParallelLevelTransitionEffect_Parms, CurrentCharacter), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventEnableParallelLevelTransitionEffect_Parms, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventEnableParallelLevelTransitionEffect_Parms, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_FirstCameraSpringBoomName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_FirstCameraSpringBoomName = { "FirstCameraSpringBoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventEnableParallelLevelTransitionEffect_Parms, FirstCameraSpringBoomName), METADATA_PARAMS(Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_FirstCameraSpringBoomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_FirstCameraSpringBoomName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_FirstCameraName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_FirstCameraName = { "FirstCameraName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventEnableParallelLevelTransitionEffect_Parms, FirstCameraName), METADATA_PARAMS(Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_FirstCameraName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_FirstCameraName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_WorldContextObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_Characters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_Characters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_CurrentCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_EndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_FirstCameraSpringBoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::NewProp_FirstCameraName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Level Transition" },
		{ "ModuleRelativePath", "Public/DLTransitionFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObj" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLTransitionFunctionLibrary, nullptr, "EnableParallelLevelTransitionEffect", nullptr, nullptr, sizeof(DLTransitionFunctionLibrary_eventEnableParallelLevelTransitionEffect_Parms), Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics
	{
		struct DLTransitionFunctionLibrary_eventTurnOnStencilForCharacters_Parms
		{
			TArray<APawn*> Characters;
			int32 StencilValue;
			bool IsOn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Characters_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Characters;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_StencilValue;
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventTurnOnStencilForCharacters_Parms, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::NewProp_StencilValue = { "StencilValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DLTransitionFunctionLibrary_eventTurnOnStencilForCharacters_Parms, StencilValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((DLTransitionFunctionLibrary_eventTurnOnStencilForCharacters_Parms*)Obj)->IsOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DLTransitionFunctionLibrary_eventTurnOnStencilForCharacters_Parms), &Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::NewProp_Characters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::NewProp_Characters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::NewProp_StencilValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Level Transition" },
		{ "ModuleRelativePath", "Public/DLTransitionFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDLTransitionFunctionLibrary, nullptr, "TurnOnStencilForCharacters", nullptr, nullptr, sizeof(DLTransitionFunctionLibrary_eventTurnOnStencilForCharacters_Parms), Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDLTransitionFunctionLibrary_NoRegister()
	{
		return UDLTransitionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDLTransitionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDLTransitionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicLevelTransition,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDLTransitionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDLTransitionFunctionLibrary_DisableParallelLevelTransitionEffect, "DisableParallelLevelTransitionEffect" }, // 1512032660
		{ &Z_Construct_UFunction_UDLTransitionFunctionLibrary_EnableParallelLevelTransitionEffect, "EnableParallelLevelTransitionEffect" }, // 1328424481
		{ &Z_Construct_UFunction_UDLTransitionFunctionLibrary_TurnOnStencilForCharacters, "TurnOnStencilForCharacters" }, // 79378118
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLTransitionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DLTransitionFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/DLTransitionFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDLTransitionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDLTransitionFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDLTransitionFunctionLibrary_Statics::ClassParams = {
		&UDLTransitionFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDLTransitionFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDLTransitionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDLTransitionFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDLTransitionFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDLTransitionFunctionLibrary, 4270244286);
	template<> DYNAMICLEVELTRANSITION_API UClass* StaticClass<UDLTransitionFunctionLibrary>()
	{
		return UDLTransitionFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDLTransitionFunctionLibrary(Z_Construct_UClass_UDLTransitionFunctionLibrary, &UDLTransitionFunctionLibrary::StaticClass, TEXT("/Script/DynamicLevelTransition"), TEXT("UDLTransitionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDLTransitionFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
