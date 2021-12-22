// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FVector;
#ifdef DYNAMICLEVELTRANSITION_DynamicTransitionComponent_generated_h
#error "DynamicTransitionComponent.generated.h already included, missing '#pragma once' in DynamicTransitionComponent.h"
#endif
#define DYNAMICLEVELTRANSITION_DynamicTransitionComponent_generated_h

#define project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_SPARSE_DATA
#define project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRenderMeshs); \
	DECLARE_FUNCTION(execSwitchParallelWorld); \
	DECLARE_FUNCTION(execDisableParallelWorldEffect); \
	DECLARE_FUNCTION(execEnableParallelWorldEffect);


#define project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRenderMeshs); \
	DECLARE_FUNCTION(execSwitchParallelWorld); \
	DECLARE_FUNCTION(execDisableParallelWorldEffect); \
	DECLARE_FUNCTION(execEnableParallelWorldEffect);


#define project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicTransitionComponent(); \
	friend struct Z_Construct_UClass_UDynamicTransitionComponent_Statics; \
public: \
	DECLARE_CLASS(UDynamicTransitionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DynamicLevelTransition"), NO_API) \
	DECLARE_SERIALIZER(UDynamicTransitionComponent)


#define project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicTransitionComponent(); \
	friend struct Z_Construct_UClass_UDynamicTransitionComponent_Statics; \
public: \
	DECLARE_CLASS(UDynamicTransitionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DynamicLevelTransition"), NO_API) \
	DECLARE_SERIALIZER(UDynamicTransitionComponent)


#define project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicTransitionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicTransitionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicTransitionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicTransitionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicTransitionComponent(UDynamicTransitionComponent&&); \
	NO_API UDynamicTransitionComponent(const UDynamicTransitionComponent&); \
public:


#define project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicTransitionComponent(UDynamicTransitionComponent&&); \
	NO_API UDynamicTransitionComponent(const UDynamicTransitionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicTransitionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicTransitionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicTransitionComponent)


#define project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParallelTransitionEffectEnabled() { return STRUCT_OFFSET(UDynamicTransitionComponent, ParallelTransitionEffectEnabled); } \
	FORCEINLINE static uint32 __PPO__ParallelActor() { return STRUCT_OFFSET(UDynamicTransitionComponent, ParallelActor); } \
	FORCEINLINE static uint32 __PPO__CurrentOffset() { return STRUCT_OFFSET(UDynamicTransitionComponent, CurrentOffset); } \
	FORCEINLINE static uint32 __PPO__StartPoint() { return STRUCT_OFFSET(UDynamicTransitionComponent, StartPoint); } \
	FORCEINLINE static uint32 __PPO__PostProcessingVolume() { return STRUCT_OFFSET(UDynamicTransitionComponent, PostProcessingVolume); } \
	FORCEINLINE static uint32 __PPO__TransitionMaterialInstance() { return STRUCT_OFFSET(UDynamicTransitionComponent, TransitionMaterialInstance); } \
	FORCEINLINE static uint32 __PPO__FirstPersonSpringArm() { return STRUCT_OFFSET(UDynamicTransitionComponent, FirstPersonSpringArm); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCamComponent() { return STRUCT_OFFSET(UDynamicTransitionComponent, FirstPersonCamComponent); } \
	FORCEINLINE static uint32 __PPO__ParallelSceneCapture() { return STRUCT_OFFSET(UDynamicTransitionComponent, ParallelSceneCapture); } \
	FORCEINLINE static uint32 __PPO__RenderMeshComponents() { return STRUCT_OFFSET(UDynamicTransitionComponent, RenderMeshComponents); } \
	FORCEINLINE static uint32 __PPO__AllowParallelPosition() { return STRUCT_OFFSET(UDynamicTransitionComponent, AllowParallelPosition); }


#define project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_18_PROLOG
#define project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_SPARSE_DATA \
	project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_RPC_WRAPPERS \
	project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_INCLASS \
	project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_SPARSE_DATA \
	project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_INCLASS_NO_PURE_DECLS \
	project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICLEVELTRANSITION_API UClass* StaticClass<class UDynamicTransitionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID project_x_n_Plugins_DynamicLevelTransition_Source_DynamicLevelTransition_Public_DynamicTransitionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
