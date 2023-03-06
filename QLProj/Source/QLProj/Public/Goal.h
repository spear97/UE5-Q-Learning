// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavigationSystem.h"
#include "WayPoint.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Goal.generated.h"

UCLASS()
class QLPROJ_API AGoal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGoal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	//Set how the Goal will Look via Blueprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshComponent;

	//The WayPoints that exist in the Environment
	TArray<AActor*> WayPoints;

protected:
	//Spawn Goal at a the Location of a Randomly Selected Way
	void SpawnAtRandomLocation();
};
