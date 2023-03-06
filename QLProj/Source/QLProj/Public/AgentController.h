// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WayPoint.h"
#include <fstream>
#include "Misc/Paths.h"
#include "Kismet/GameplayStatics.h"
#include "AgentController.generated.h"

/**
 * 
 */
UCLASS()
class QLPROJ_API AAgentController : public AAIController
{
	GENERATED_BODY()

	#define DisplayNum(x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("%i"), x));}
	#define DisplayRow() if(GEngine){GEngine->AddOnScreenDebugMessage(-1, delay, FColor::White, FString::Printf(TEXT("State: %i |%f %f %f %f %f %f %f %f|"), s, Q[s][0], Q[s][1], Q[s][2], Q[s][3], Q[s][4], Q[s][5], Q[s][6], Q[s][7]));}
	
public:
	AAgentController();

	/**************Blueprint Functions****************/

	//Get one of the Lists of the Q-Matrix
	UFUNCTION(BlueprintCallable)
	TArray<float> GetQAtIndex(int i);

	/**************The Initial Variables for the Q-Learning**************/

	//The Number of States for the Matrix
	UPROPERTY(BlueprintReadOnly)
	int s_size;

	//The Number of Actions for the Matrix
	UPROPERTY(BlueprintReadOnly)
	int a_size;

	//The Current State that the Agent is currently in
	UPROPERTY(BlueprintReadOnly)
	int s;

	//The Current Action that the Agent is Performing for the Given State
	UPROPERTY(BlueprintReadOnly)
	int a;

	//The Reward for the Action that was given 
	UPROPERTY(BlueprintReadOnly)
	int r;

	//The Learning Discount for the Policy
	UPROPERTY(BlueprintReadOnly)
	float alpha = 0.95f;

	//The Discount Factor for the Policy
	UPROPERTY(BlueprintReadOnly)
	float gamma = 0.95f;

	/***************Action Variables***************/

	UPROPERTY(BlueprintReadOnly)
	//How Far was Agent from Target on Previous Action
	float prevDist = INFINITY;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float delta) override;

protected:

	/**************The Initial Function for the Q-Learning**************/

	//Generate the Matrix that will be used for Q-Learning
	void GenerateMatrix();

	//Output the Matrix to the Screen, Used for Debugging Purposes
	void PrintMatrix();

	/*****************Q-Learning Reinforcement Functions**************/

	//Get the Current State that the Agent is in
	int GetState();

	//Get the Best Action for Current State
	int GetAction();

	//Run Reinforcement Learning Model
	void Q_Learning();

	//Get the Score for the Correspond Action and State
	float CalculatePolicy();

	//Get the Maximum Score for the Given State
	float GetMaxQ();

	/************The Action Functions that the Agent Can take************/

	//Move the Agent Forward -> 0
	void Fwd();

	//Move the Agent Forward-Right -> 1
	void FwdRt();

	//Move the Agent Right -> 2
	void Rt();

	//Move the Agent Backward-Right -> 3
	void BwdRt();

	//Move the Agent Backward -> 4
	void Bwd();

	//Move the Agent Backward-Left -> 5
	void BwdLt();

	//Move the Agent left -> 6 
	void Lt();

	//Move the Agent Forward-Left -> 7
	void FwdLt();

	/************************File I/O*************************************/

	//Save Progress that the AI has made in the Simulation
	void SaveQToFile();

public:

	/**************Variables that will get set in Blueprint**************/
	UPROPERTY(BlueprintReadWrite)
	AActor* Target;

protected:
	/**************The Initial Variables for the Q-Learning**************/

	//All WayPoints that exist in the Environment
	TArray<AActor*> WayPoints;

	//The Matrix for Q-Learning to Operate
	TArray<TArray<float>> Q;

	//The Reward Matrix that will initially Populate the Q Matrix
	TArray<TArray<float>> R = {
		{-1.f, -1.f, -1.f, -1.f,  0.f,  -1.f,  0.f,  -1.f},
		{-1.f, -1.f, -1.f,  0.f, -1.f, 100.f, -1.f, 100.f},
		{-1.f, -1.f, -1.f,  0.f, -1.f,  -1.f, -1.f,  -1.f},
		{-1.f,  0.f,  0.f, -1.f,  0.f,  -1.f,  0.f,  -1.f},
		{ 0.f, -1.f, -1.f,  0.f, -1.f, 100.f, -1.f, 100.f},
		{-1.f,  0.f, -1.f, -1.f,  0.f, 100.f,  0.f, 100.f},
		{-1.f, -1.f, -1.f, -1.f,  0.f,  -1.f,  0.f,  -1.f},
		{-1.f, -1.f, -1.f,  0.f, -1.f, 100.f, -1.f, 100.f}
	};

	/**************Operational Variables**************/

	//Timer Handler that will Aid in Running the Q_Learning Algorithm
	FTimerHandle Timer;

	//The time duration that the time will run for
	float delay = 0.5f;

	/***************Action Variables***************/

	//How far the Agent can move for any given direction
	float move_dist = 250.f;
};
