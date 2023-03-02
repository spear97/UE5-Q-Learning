// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WayPoint.h"
#include "Math/Vector.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "AgentController.generated.h"

/**
 * 
 */
UCLASS()
class QLPROJ_API AAgentController : public AAIController
{
	GENERATED_BODY()

	/*******Debugging Macros*******/
	#define DisplayNum(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT("%i"), x));}
	#define DisplayAction(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT("Action:%i\n"), x));}
	#define DisplayState(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT("State:%i"), x));}
	#define DisplayFloat(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT("%f"), x));}
	
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


	//Get All WayPoints that Exist in the Environment and Set StateSize
	void GetWayPoints();

	//Generate the QMatrix that will be used for Q-Learning
	void GenerateMatrix();

	//Get the Current State that the Agent is in
	int GetState();

	//Get the Best Action for Current State
	int GetAction();

	//
	void Q_Learning();

protected:
	//All WayPoints that exist in the Environment
	UPROPERTY(BlueprintReadonly)
	TArray<AActor*> WayPoints;

	//Timer Handler that will Aid in Running the Q_Learning Algorithm
	FTimerHandle Timer;

	//The Actions that the Agent can take
	int ActionSize = 8;

	//The StateSize for the States that the Player Can be in
	int StateSize;

	//The Current State that the Agent is in
	int s;

	//The Current Action that the Agent is in
	int a;

	//The Q-Matrix that will contain Scores for the Actions that the Agent has taken for it's Current State
	TArray<TArray<float>> Q;

private:
	float delay = 0.5f;
};
