// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DynamicTransitionComponent.h"
#include "DLTransitionFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DYNAMICLEVELTRANSITION_API UDLTransitionFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Dynamic Level Transition", meta = (WorldContext = "WorldContextObj"))
		static void EnableParallelLevelTransitionEffect(UObject* WorldContextObj, TArray<APawn*> Characters, APawn* CurrentCharacter, FVector EndPoint, FVector StartPoint, const FString& FirstCameraSpringBoomName, const FString& FirstCameraName)
	{
		UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObj, EGetWorldErrorMode::LogAndReturnNull);

		if (!World)
			return;

		if (CurrentCharacter == nullptr)
			return;

		if (!CurrentCharacter->IsLocallyControlled())
			return;


		UDynamicTransitionComponent* TransitionComponent = (UDynamicTransitionComponent*)CurrentCharacter->GetComponentByClass(UDynamicTransitionComponent::StaticClass());


		TurnOnStencilForCharacters(Characters, 1, true);

		if (TransitionComponent != nullptr)
		{
			TransitionComponent->EnableParallelWorldEffect(EndPoint, StartPoint, FirstCameraSpringBoomName, FirstCameraName);
		}

	}



	UFUNCTION(BlueprintCallable, Category = "Dynamic Level Transition", meta = (WorldContext = "WorldContextObj"))
	static void  DisableParallelLevelTransitionEffect(UObject* WorldContextObj, TArray<APawn*> Characters, APawn* CurrentCharacter)
	{
		UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObj, EGetWorldErrorMode::LogAndReturnNull);

		if (!World)
			return;

		if (CurrentCharacter == nullptr)
			return;

		if (!CurrentCharacter->IsLocallyControlled())
			return;


		UDynamicTransitionComponent* TransitionComponent = (UDynamicTransitionComponent*)CurrentCharacter->GetComponentByClass(UDynamicTransitionComponent::StaticClass());


		TurnOnStencilForCharacters(Characters, 0, false);

		if (TransitionComponent != nullptr)
		{
			TransitionComponent->DisableParallelWorldEffect();
		}

	}

	UFUNCTION(BlueprintCallable, Category = "Dynamic Level Transition")
	static void TurnOnStencilForCharacters(TArray<APawn*> Characters, int StencilValue, bool IsOn)
	{
		if (Characters.Num() <= 0)
			return;

		for (auto& Character : Characters)
		{
			UE_LOG(LogTemp, Warning, TEXT("Turn on Traisition, Name: %s"), *(Character->GetName()));

			UDynamicTransitionComponent* TransitionFXComponent = Character->FindComponentByClass<UDynamicTransitionComponent>();

			if (TransitionFXComponent != nullptr)
			{
				TArray<UPrimitiveComponent*> MeshRenders = TransitionFXComponent->GetRenderMeshs();

				for (auto& render : MeshRenders)
				{
					render->SetRenderCustomDepth(IsOn);
					render->SetCustomDepthStencilValue(StencilValue);
				}
			}
		}
	}

};