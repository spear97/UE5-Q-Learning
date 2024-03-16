// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "Waypoint.h"
#include "QLController.generated.h"

/**
 * 
 */
UCLASS()
class QLEARNINGSIMULATION_API AQLController : public AAIController
{
	GENERATED_BODY()

public:
	//////////////////////////////////CONSTRUCTOR////////////////////////////////

	AQLController();

	//////////////////////////////PUBLIC FUNCTIONS//////////////////////////////

	// Get the current state and action based on the Q-learning algorithm
	UFUNCTION(BlueprintCallable, Category = "Q-Learning")
	void GetStateandAction();

	// Perform an action based on the calculated action from the Q-learning algorithm
	UFUNCTION(BlueprintCallable, Category = "Q-Learning")
	void PerformActon();

	// Get the reward based on the current state and action
	UFUNCTION(BlueprintCallable, Category = "Q-Learning")
	void GetReward();

	// Calculate the feedback (updating Q-values) based on the reward and Q-learning algorithm
	UFUNCTION(BlueprintCallable, Category = "Q-Learning")
	void CalculateFeedback();

	//////////////////////////////PUBLIC VARIALES//////////////////////////////

	// Goal actor for the Q-learning algorithm
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Q-Learning")
	AActor* Goal;

protected:

	//////////////////////////////PROTECTED FUNCTIONS//////////////////////////////

	// What needs to occur when Simulation Begins?
	virtual void BeginPlay() override;

	virtual void Tick(float deltaSeconds) override;

	// What needs to occur when Simulation Ends?
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/*******DATA FUNCTION*******/

	// Get waypoints for the Q-learning algorithm
	void GetWaypoints();

	// Generate data for Q-learning algorithm
	void GenerateData();

	/*******FILE I/O*******/

	// Get Data needed for the Agent to operate
	void ReadData();

	// Store Data that will be needed for later use
	void WriteLinesToFile(const TArray<TArray<float>>& Data);

	/*******FILE FUNCTIONS*******/

	// Read data for Q-learning algorithm
	bool FilePathExists();

	// Write lines of data to file for Q-learning algorithm
	FString GetFilePath();

	/*******ACTION FUNCTIONS*******/

	// Move the AI controller up
	void MoveUp();

	// Move the AI controller down
	void MoveDown();

	// Move the AI controller left
	void MoveLeft();

	// Move the AI controller right
	void MoveRight();

	/*******Q-LEARING FUNCTIOONS********/

	// Get the action based on the current state in the Q-learning algorithm
	void GetAction();

	// Get the state for the Q-learning algorithm
	void GetState();

	// Calculate the heuristic value between two vectors
	float Heuristic(const FVector A, const FVector B);

	// Calculate the maximum Q-value for the current state
	float Max();
	
	//////////////////////////////PROTECTED VARIABLES//////////////////////////////

	// Array of waypoints for the Q-learning algorithm
	TArray<AActor*> Waypoints;

	// Name of the file for data storage
	FString FileName = "Data";

	// Q-table for Q-learning algorithm
	TArray<TArray<float>> Q;

	// Template for Generating Data when 
	// Data File can't be found
	TArray<TArray<float>> T = {
		{1.f, 0.f, 0.f, 0.f},
	};

	// Variables for Q-learning algorithm
	// STATE - The Waypoint that the Agent is Currently near
	// ACTION - The Action that Agent Decides to perform based best Score
	// REWARD - The Reward that the Agent Received based on the taken action
	int STATE, ACTION, REWARD;

	// Constants for Q-learning algorithm
	// GAMMA (Discount Factor) - How important Furture rewards are to the AI 
	// ALPHA (Learning Rate) - How fast the Agent will learn from previous data
	// moveDelta - Scaler for how far the Agent should move for a given direction
	const float GAMMA = 0.95f;
	const float ALPHA = 0.1f;
	const float moveDelta = 125.f;

	// Variable to store the previous distance for reward calculation
	float prevDist = MAX_FLT;
};
