// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WayPoint.h"
#include "Kismet/GameplayStatics.h"
#include "AgentController.generated.h"

/**
 * 
 */
UCLASS()
class QLPROJ_API AAgentController : public AAIController
{
	GENERATED_BODY()

	/*******Macros*******/
	#define DisplayNum(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT("%i"), x));}

public:
	AAgentController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float delta) override;

protected:

	/*The Actions that the Possessed Agent will be allowed to take*/
	void Fwd();   //0
	void FwdRt(); //1
	void FwdLt(); //2
	void Rt();    //3
	void Lt();    //4
	void Bwd();   //5
	void BwdRt(); //6
	void BwdLt(); //7

protected:
	//All WayPoints that exist in the Environment
	TArray<AActor*> WayPoints;

	//The Actions that the Agent can take
	int ActionSize = 8;

	//The StateSize for the States that the Player Can be in
	int StateSize;

	//The Q-Matrix that will contain Scores for the Actions that the Agent has taken for it's Current State
	TArray<TArray<float>> Q;
};
