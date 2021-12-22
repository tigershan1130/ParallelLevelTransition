// Fill out your copyright notice in the Description page of Project Settings.


#include "DynamicTransitionComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "GameFramework/SpringArmComponent.h" 
#include "Engine/TextureRenderTarget2D.h"
#include "Camera/CameraComponent.h"

// Sets default values for this component's properties
UDynamicTransitionComponent::UDynamicTransitionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDynamicTransitionComponent::BeginPlay()
{
	Super::BeginPlay();

	TArray<UPrimitiveComponent*> RenderComponents;

	AActor* Owner = GetOwner();

	if (Owner == nullptr)
		return;


	Owner->GetComponents<UPrimitiveComponent>(RenderComponents);

	for (auto& Render : RenderComponents)
	{
		if (Cast<USkeletalMeshComponent>(Render))
		{
			RenderMeshComponents.Add(Render);
		}

		if (Cast<UStaticMeshComponent>(Render))
		{
			RenderMeshComponents.Add(Render);
		}
	}
}


// Called every frame
void UDynamicTransitionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (ParallelTransitionEffectEnabled)
	{
		if (GetOwner() == nullptr)
		{
			return;
		}

		FVector PlayerOffset = GetOwner()->GetActorLocation();

		float StartPointToPlayerDist = FVector::Distance(FirstPersonCamComponent->GetComponentLocation(), StartPoint);
		float EndPointToPlayerDist = FVector::Distance(FirstPersonCamComponent->GetComponentLocation(), StartPoint + CurrentOffset);

		if (StartPointToPlayerDist < EndPointToPlayerDist)
		{
			AllowParallelPosition = true;
			//UE_LOG(LogTemp, Warning, TEXT("Location: True"));
		}
		else
		{
			AllowParallelPosition = false;

			//UE_LOG(LogTemp, Warning, TEXT("Location: False"));
		}

		if (ParallelSceneCapture)
		{
			ParallelSceneCapture->SetWorldLocation((AllowParallelPosition) ? FirstPersonCamComponent->GetComponentLocation() + CurrentOffset : FirstPersonCamComponent->GetComponentLocation());
			ParallelSceneCapture->SetWorldRotation(FirstPersonCamComponent->GetComponentRotation());


			FVector2D ViewportSize = GetGameViewportSize();

			//UE_LOG(LogTemp, Warning, TEXT("Location: %s , %s"), *ParallelSceneCapture->GetComponentLocation().ToString(), *FirstPersonCamComponent->GetComponentLocation().ToString());
		}

		if (TransitionMaterialInstance != nullptr)
		{

			TransitionMaterialInstance->SetScalarParameterValue("PosX", PlayerOffset.X);
			TransitionMaterialInstance->SetScalarParameterValue("PosY", PlayerOffset.Y);
			TransitionMaterialInstance->SetScalarParameterValue("PosZ", PlayerOffset.Z);
		}
	}
	// ...
}

void UDynamicTransitionComponent::DisableParallelWorldEffect()
{

	// 1. get current owner actor()
	AActor* CurrentOwner = GetOwner();

	if (CurrentOwner == nullptr)
		return;

	if (ParallelSceneCapture)
	{
		ParallelSceneCapture->SetWorldLocation(FirstPersonCamComponent->GetComponentLocation());
		ParallelSceneCapture->SetWorldRotation(FirstPersonCamComponent->GetComponentRotation());


		FVector2D ViewportSize = GetGameViewportSize();
		//ParallelSceneCapture->TextureTarget->ResizeTarget(1920, 1080);


		AllowParallelPosition = false;
		//UE_LOG(LogTemp, Warning, TEXT("Location: %s , %s"), *ParallelSceneCapture->GetComponentLocation().ToString(), *FirstPersonCamComponent->GetComponentLocation().ToString());
	}


	if (PostProcessingVolume != nullptr && TransitionMaterialInstance != nullptr)
	{
		PostProcessingVolume->Settings = CachedPostProcessingSetting;
		//bool Found = false;

		//for (auto entry : PostProcessingVolume->Settings.WeightedBlendables.Array)
		//{
		//	if (entry.Object == TransitionMaterialInstance)
		//	{				
		//		Found = true;
		//	}
		//}

		//if(Found)
		//	PostProcessingVolume->Settings.RemoveBlendable(TransitionMaterialInstance);

	}

	if (ParallelSceneCapture != nullptr)
	{
		ParallelSceneCapture->Deactivate();

	}

	ParallelTransitionEffectEnabled = false;
}

void UDynamicTransitionComponent::SwitchParallelWorld()
{
	AllowParallelPosition = !AllowParallelPosition;
}

void UDynamicTransitionComponent::EnableParallelWorldEffect(const FVector& endPoint, const FVector& startPoint, const FString& FirstCameraSpringBoomName, const FString& FristCameraName)
{
	if (ParallelTransitionEffectEnabled)
		return;

	// 1. get current owner actor()
	AActor* CurrentOwner = GetOwner();

	if (CurrentOwner == nullptr)
		return;

	TArray<USpringArmComponent*> SpringArmComponents;	
	CurrentOwner->GetComponents(SpringArmComponents);

	if (SpringArmComponents.Num() == 0)
		return;

	for (auto& entry : SpringArmComponents)
	{
		FString name = entry->GetFName().ToString();

		if (name.StartsWith(FirstCameraSpringBoomName))
		{
			FirstPersonSpringArm = entry;
		}
	}

	TArray<UCameraComponent*> CameraComponents;

	CurrentOwner->GetComponents(CameraComponents);


	if (CameraComponents.Num() <= 0)
		return;

	for (auto& entry : CameraComponents)
	{
		FString name = entry->GetFName().ToString();

		if (name.StartsWith(FristCameraName))
		{
			FirstPersonCamComponent = entry;
		}
	}

	if (FirstPersonSpringArm == nullptr)
		return;

	if (FirstPersonCamComponent == nullptr)
		return;


	CurrentOffset = startPoint - endPoint;
	StartPoint = startPoint;

	// 4. create parallel world actor which will update its actor position according to camera's positions
	ParallelActor = GetWorld()->SpawnActor<AActor>(AActor::StaticClass(), FirstPersonCamComponent->GetComponentLocation() + CurrentOffset, FirstPersonCamComponent->GetComponentRotation());

	if (ParallelActor != nullptr)
	{
		if (ParallelSceneCapture == nullptr)
			ParallelSceneCapture = (USceneCaptureComponent2D*)ParallelActor->AddComponentByClass(USceneCaptureComponent2D::StaticClass(), true, FTransform(), false);
		else
			ParallelSceneCapture->AttachToComponent(ParallelActor->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

	}

	// 4.a set scene render target to corresponding viewport size for both.
	FVector2D ViewportSize = GetGameViewportSize();
	ParallelSceneRenderTarget->ResizeTarget(ViewportSize.X, ViewportSize.Y);

	if (ParallelSceneCapture != nullptr)
	{
		ParallelSceneCapture->Activate(true);

		ParallelSceneCapture->TextureTarget = ParallelSceneRenderTarget;


		ParallelSceneCapture->FOVAngle = FirstPersonCamComponent->FieldOfView;

	}


	if (PostProcessingVolume == nullptr)
	{
		TArray<AActor*> Actors;
		UGameplayStatics::GetAllActorsOfClass(this, APostProcessVolume::StaticClass(), Actors);

		int CurrentPriority = -1;

		if (Actors.Num() > 0)
		{
			APostProcessVolume* PPVolume = Cast<APostProcessVolume>(Actors[0]);

			if (PPVolume->Priority > CurrentPriority && PPVolume->bUnbound == 1)
			{
				PostProcessingVolume = PPVolume;
				CurrentPriority = PPVolume->Priority;
			}
		}
	}

	if (ParallelSceneCapture != nullptr)
	{
		ParallelSceneCapture->PostProcessSettings = PostProcessingVolume->Settings;
		FirstPersonCamComponent->PostProcessSettings = PostProcessingVolume->Settings;
		//ParallelSceneCapture->PostProcessSettings = PostProcessingVolume->Settings;
		//ParallelSceneCapture->TextureTarget->ResizeTarget(3296,1776);
		ParallelSceneCapture->bUseRayTracingIfEnabled = false;
		//ParallelSceneCapture->bNeverNeedsRenderUpdate = true;
	}

	// 5. setup dynamic instance 
	//create dynamic material anywhere u like, Constructor or anywhere .
	if (TransitionMaterialInstance == nullptr)
	{
		TransitionMaterialInstance = UMaterialInstanceDynamic::Create(Material, this);				
	}

	if (PostProcessingVolume != nullptr)
	{
		bool added = false;
		CachedPostProcessingSetting = PostProcessingVolume->Settings;
		PostProcessingVolume->Settings = PostProcessingSetting;


		//for (auto entry : PostProcessingVolume->Settings.WeightedBlendables.Array)
		//{
		//	if (entry.Object == nullptr)
		//		return;

		//	if (entry.Object == TransitionMaterialInstance)
		//	{
		//		added = true;
		//	}
		//}

		//if(!added)
		//	PostProcessingVolume->Settings.AddBlendable(TransitionMaterialInstance, 1);
	}

	AllowParallelPosition = true;
		 
	ParallelTransitionEffectEnabled = true;
}

