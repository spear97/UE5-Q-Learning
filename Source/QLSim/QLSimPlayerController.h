// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "Math/Vector.h"
#include "QLSimPlayerController.generated.h"

UCLASS()
class AQLSimPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	///////////////////////////////PUBLIC FUNCTIONS////////////////////////////////////////////////////////

	AQLSimPlayerController(); // Constuctor

	float CalculateScore(); // Calculate the Policy for Q-Learning
	int GetState(); // Get the Current State of the AI
	int GetAction(); // Get the Bets Action of the AI


protected:

	///////////////////////////////PROTECTED FUNCTIONS////////////////////////////////////////////////////////	
	virtual void BeginPlay(); // What needs to occur when Spawned into the Simulation
	virtual void OnDestroy(bool bNeforce, bool bShouldModifyLevel); // What needst to occur when Deleted from Simulation
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason); // What needs to occur when Simulation Ends the Simulation

private:

	///////////////////////////////PRIVATE FUNCTIONS////////////////////////////////////////////////////////
	FString GetFilePath(FString FileName); // Get the path location where file is located
	bool FilePathExists(FString FileName); // See if the Path for the File Path exists
	TArray<TArray<float>> ReadLinesFromFile(FString FileName, bool& bOutSuccess, FString& OutInfoMessage); // Read contents of the File
	void WriteLinesToFile(FString FileName, const TArray<TArray<float>>& Data, bool& bOutSuccess, FString& OutInfoMessage); // Write contetns for the File

	float GetHeurestic(FVector A, FVector B); // Calculate the Heuristic Between two locations using Distance Formula
	float GetMaxQ(); // Get the Highest Score for the Current State the AI is currently in
	TArray<TArray<float>> PopulateQ();
	void CreateDataFile(FString FileName, FString Content);

	///////////////////////////////PRIVATE VARIABLES////////////////////////////////////////////////////////
	TArray<TArray<float>> Q; // Storage for calculated Scores for Controlled Agent
	const float GAMMA = 0.95f; // DISCOUNT FACTOR for the Policy
	const float ALPHA = 0.95f; // LEARNING DISCOUNT for the Policy
	int ACTION; // The current action that the AI is expected to take
	int STATE; // The current state that the Agent is currently in
	float REWARD; // The Current Reward for the Given ACTION and STATE
	TArray<AActor*> Nodes; // Nodes in the Environment will indicate which STATE the AI is in in the Environment
	TArray<TArray<float>> T = // Template for populating Q if Source File doe not exist
	{
		{-1.f, -1.f, -1.f,    0.f},
		{-1.f, -1.f,  0.f,  100.f},
		{-1.f,  0.f, -1.f,   -1.f},
		{-1.f,  0.f,  0.f,   -1.f},
		{ 0.f, -1.f, -1.f,  100.f},
		{-1.f,  0.f,  0.f,  100.f}
	};
};


