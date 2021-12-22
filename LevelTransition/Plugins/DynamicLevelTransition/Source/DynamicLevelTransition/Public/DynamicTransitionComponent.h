// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/PostProcessVolume.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialParameterCollectionInstance.h"
#include "DynamicTransitionComponent.generated.h"

class USpringArmComponent;
class UCameraComponent;
class USceneCaptureComponent2D;
class UTextureRenderTarget2D;


UCLASS(BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DYNAMICLEVELTRANSITION_API UDynamicTransitionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDynamicTransitionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
	UFUNCTION(BlueprintCallable, Category = "Dynamic Transition Effect")
		void EnableParallelWorldEffect(const FVector& EndPoint, const FVector& StartPoint, const FString& FirstCameraSpringBoomName, const FString& FristCameraName);

	UFUNCTION(BlueprintCallable, Category = "Dynamic Transition Effect")
		void DisableParallelWorldEffect();

	UFUNCTION(BlueprintCallable, Category = "Dynamic Transition Effect")
		void SwitchParallelWorld();


	FVector2D GetGameViewportSize()
	{
		FVector2D Result = FVector2D(1, 1);

		if (GEngine && GEngine->GameViewport)
		{
			GEngine->GameViewport->GetViewportSize( /*out*/Result);
		}

		return Result;
	}

	FVector2D GetGameResolution()
	{
		FVector2D Result = FVector2D(1, 1);

		Result.X = GSystemResolution.ResX;
		Result.Y = GSystemResolution.ResY;

		return Result;
	}

	UFUNCTION()
	TArray<UPrimitiveComponent*> GetRenderMeshs()
	{
		return RenderMeshComponents;
	}

protected:

	UPROPERTY()
		bool ParallelTransitionEffectEnabled = false;

	UPROPERTY()
		AActor* ParallelActor;

	UPROPERTY()
		FVector CurrentOffset;

	UPROPERTY()
		FVector StartPoint;

	UPROPERTY()
		APostProcessVolume* PostProcessingVolume;

	UPROPERTY()
		UMaterialInstanceDynamic* TransitionMaterialInstance;

	UPROPERTY()
		USpringArmComponent* FirstPersonSpringArm = nullptr;

	UPROPERTY()
		UCameraComponent* FirstPersonCamComponent = nullptr;

	UPROPERTY()
		USceneCaptureComponent2D* ParallelSceneCapture;

	UPROPERTY()
		TArray<UPrimitiveComponent*> RenderMeshComponents;
	 
	UPROPERTY()
		bool AllowParallelPosition = false;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transition Setting")
		UMaterialInstance* Material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transition Setting")
		UTextureRenderTarget2D* ParallelSceneRenderTarget;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transition Setting")
		UMaterialParameterCollection* MaterialParameterCollectionAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transition Setting")
		FPostProcessSettings PostProcessingSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transition Setting")
		FPostProcessSettings CachedPostProcessingSetting;

};

