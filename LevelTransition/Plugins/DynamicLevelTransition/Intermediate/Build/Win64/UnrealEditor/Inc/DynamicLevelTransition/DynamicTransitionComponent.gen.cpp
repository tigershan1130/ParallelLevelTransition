// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicLevelTransition/Public/DynamicTransitionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicTransitionComponent() {}
// Cross Module References
	DYNAMICLEVELTRANSITION_API UClass* Z_Construct_UClass_UDynamicTransitionComponent_NoRegister();
	DYNAMICLEVELTRANSITION_API UClass* Z_Construct_UClass_UDynamicTransitionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DynamicLevelTransition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
// End Cross Module References
	DEFINE_FUNCTION(UDynamicTransitionComponent::execGetRenderMeshs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPrimitiveComponent*>*)Z_Param__Result=P_THIS->GetRenderMeshs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicTransitionComponent::execSwitchParallelWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchParallelWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicTransitionComponent::execDisableParallelWorldEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableParallelWorldEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicTransitionComponent::execEnableParallelWorldEffect)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartPoint);
		P_GET_PROPERTY(FStrProperty,Z_Param_FirstCameraSpringBoomName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FristCameraName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableParallelWorldEffect(Z_Param_Out_EndPoint,Z_Param_Out_StartPoint,Z_Param_FirstCameraSpringBoomName,Z_Param_FristCameraName);
		P_NATIVE_END;
	}
	void UDynamicTransitionComponent::StaticRegisterNativesUDynamicTransitionComponent()
	{
		UClass* Class = UDynamicTransitionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableParallelWorldEffect", &UDynamicTransitionComponent::execDisableParallelWorldEffect },
			{ "EnableParallelWorldEffect", &UDynamicTransitionComponent::execEnableParallelWorldEffect },
			{ "GetRenderMeshs", &UDynamicTransitionComponent::execGetRenderMeshs },
			{ "SwitchParallelWorld", &UDynamicTransitionComponent::execSwitchParallelWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicTransitionComponent_DisableParallelWorldEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicTransitionComponent_DisableParallelWorldEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Transition Effect" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicTransitionComponent_DisableParallelWorldEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicTransitionComponent, nullptr, "DisableParallelWorldEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicTransitionComponent_DisableParallelWorldEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicTransitionComponent_DisableParallelWorldEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicTransitionComponent_DisableParallelWorldEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicTransitionComponent_DisableParallelWorldEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics
	{
		struct DynamicTransitionComponent_eventEnableParallelWorldEffect_Parms
		{
			FVector EndPoint;
			FVector StartPoint;
			FString FirstCameraSpringBoomName;
			FString FristCameraName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstCameraSpringBoomName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FirstCameraSpringBoomName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FristCameraName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FristCameraName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_EndPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicTransitionComponent_eventEnableParallelWorldEffect_Parms, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_StartPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicTransitionComponent_eventEnableParallelWorldEffect_Parms, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_FirstCameraSpringBoomName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_FirstCameraSpringBoomName = { "FirstCameraSpringBoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicTransitionComponent_eventEnableParallelWorldEffect_Parms, FirstCameraSpringBoomName), METADATA_PARAMS(Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_FirstCameraSpringBoomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_FirstCameraSpringBoomName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_FristCameraName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_FristCameraName = { "FristCameraName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicTransitionComponent_eventEnableParallelWorldEffect_Parms, FristCameraName), METADATA_PARAMS(Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_FristCameraName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_FristCameraName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_EndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_FirstCameraSpringBoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::NewProp_FristCameraName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Transition Effect" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicTransitionComponent, nullptr, "EnableParallelWorldEffect", nullptr, nullptr, sizeof(DynamicTransitionComponent_eventEnableParallelWorldEffect_Parms), Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics
	{
		struct DynamicTransitionComponent_eventGetRenderMeshs_Parms
		{
			TArray<UPrimitiveComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicTransitionComponent_eventGetRenderMeshs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicTransitionComponent, nullptr, "GetRenderMeshs", nullptr, nullptr, sizeof(DynamicTransitionComponent_eventGetRenderMeshs_Parms), Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicTransitionComponent_SwitchParallelWorld_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicTransitionComponent_SwitchParallelWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Transition Effect" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicTransitionComponent_SwitchParallelWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicTransitionComponent, nullptr, "SwitchParallelWorld", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicTransitionComponent_SwitchParallelWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicTransitionComponent_SwitchParallelWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicTransitionComponent_SwitchParallelWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicTransitionComponent_SwitchParallelWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDynamicTransitionComponent_NoRegister()
	{
		return UDynamicTransitionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicTransitionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParallelTransitionEffectEnabled_MetaData[];
#endif
		static void NewProp_ParallelTransitionEffectEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ParallelTransitionEffectEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParallelActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParallelActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessingVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TransitionMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCamComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCamComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParallelSceneCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParallelSceneCapture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowParallelPosition_MetaData[];
#endif
		static void NewProp_AllowParallelPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowParallelPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParallelSceneRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParallelSceneRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterCollectionAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialParameterCollectionAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessingSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPostProcessingSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedPostProcessingSetting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicTransitionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicLevelTransition,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicTransitionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicTransitionComponent_DisableParallelWorldEffect, "DisableParallelWorldEffect" }, // 3784010037
		{ &Z_Construct_UFunction_UDynamicTransitionComponent_EnableParallelWorldEffect, "EnableParallelWorldEffect" }, // 3423335213
		{ &Z_Construct_UFunction_UDynamicTransitionComponent_GetRenderMeshs, "GetRenderMeshs" }, // 3661114661
		{ &Z_Construct_UFunction_UDynamicTransitionComponent_SwitchParallelWorld, "SwitchParallelWorld" }, // 266552820
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DynamicTransitionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelTransitionEffectEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelTransitionEffectEnabled_SetBit(void* Obj)
	{
		((UDynamicTransitionComponent*)Obj)->ParallelTransitionEffectEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelTransitionEffectEnabled = { "ParallelTransitionEffectEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDynamicTransitionComponent), &Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelTransitionEffectEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelTransitionEffectEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelTransitionEffectEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelActor = { "ParallelActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, ParallelActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_CurrentOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_CurrentOffset = { "CurrentOffset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, CurrentOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_CurrentOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_CurrentOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_StartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_PostProcessingVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_PostProcessingVolume = { "PostProcessingVolume", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, PostProcessingVolume), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_PostProcessingVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_PostProcessingVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_TransitionMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_TransitionMaterialInstance = { "TransitionMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, TransitionMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_TransitionMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_TransitionMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_FirstPersonSpringArm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_FirstPersonSpringArm = { "FirstPersonSpringArm", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, FirstPersonSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_FirstPersonSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_FirstPersonSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_FirstPersonCamComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_FirstPersonCamComponent = { "FirstPersonCamComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, FirstPersonCamComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_FirstPersonCamComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_FirstPersonCamComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelSceneCapture_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelSceneCapture = { "ParallelSceneCapture", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, ParallelSceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelSceneCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelSceneCapture_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_RenderMeshComponents_Inner = { "RenderMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_RenderMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_RenderMeshComponents = { "RenderMeshComponents", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, RenderMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_RenderMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_RenderMeshComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_AllowParallelPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_AllowParallelPosition_SetBit(void* Obj)
	{
		((UDynamicTransitionComponent*)Obj)->AllowParallelPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_AllowParallelPosition = { "AllowParallelPosition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDynamicTransitionComponent), &Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_AllowParallelPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_AllowParallelPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_AllowParallelPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Transition Setting" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, Material), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelSceneRenderTarget_MetaData[] = {
		{ "Category", "Transition Setting" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelSceneRenderTarget = { "ParallelSceneRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, ParallelSceneRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelSceneRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelSceneRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_MaterialParameterCollectionAsset_MetaData[] = {
		{ "Category", "Transition Setting" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_MaterialParameterCollectionAsset = { "MaterialParameterCollectionAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, MaterialParameterCollectionAsset), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_MaterialParameterCollectionAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_MaterialParameterCollectionAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_PostProcessingSetting_MetaData[] = {
		{ "Category", "Transition Setting" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_PostProcessingSetting = { "PostProcessingSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, PostProcessingSetting), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_PostProcessingSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_PostProcessingSetting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_CachedPostProcessingSetting_MetaData[] = {
		{ "Category", "Transition Setting" },
		{ "ModuleRelativePath", "Public/DynamicTransitionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_CachedPostProcessingSetting = { "CachedPostProcessingSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicTransitionComponent, CachedPostProcessingSetting), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_CachedPostProcessingSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_CachedPostProcessingSetting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicTransitionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelTransitionEffectEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_CurrentOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_PostProcessingVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_TransitionMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_FirstPersonSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_FirstPersonCamComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelSceneCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_RenderMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_RenderMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_AllowParallelPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_ParallelSceneRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_MaterialParameterCollectionAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_PostProcessingSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicTransitionComponent_Statics::NewProp_CachedPostProcessingSetting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicTransitionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicTransitionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicTransitionComponent_Statics::ClassParams = {
		&UDynamicTransitionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynamicTransitionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicTransitionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicTransitionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicTransitionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicTransitionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicTransitionComponent, 2291868905);
	template<> DYNAMICLEVELTRANSITION_API UClass* StaticClass<UDynamicTransitionComponent>()
	{
		return UDynamicTransitionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicTransitionComponent(Z_Construct_UClass_UDynamicTransitionComponent, &UDynamicTransitionComponent::StaticClass, TEXT("/Script/DynamicLevelTransition"), TEXT("UDynamicTransitionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicTransitionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
