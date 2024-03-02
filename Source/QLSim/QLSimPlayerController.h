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

	//float CalculateScore(); // Calculate the Policy for Q-Learning
	//int GetState(); // Get the Current State of the AI
	//int GetAction(); // Get the Bets Action of the AI

	/////////////////////////////PUBLIC VARIABLES///////////////////////////////////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Machine Learning")
	TArray<AActor*> Nodes; // Nodes in the Environment will indicate which STATE the AI is in in the Environment

protected:

	///////////////////////////////PROTECTED FUNCTIONS////////////////////////////////////////////////////////	
	virtual void BeginPlay(); // What needs to occur when Spawned into the Simulation
	virtual void OnDestroy(bool bNeforce, bool bShouldModifyLevel); // What needst to occur when Deleted from Simulation
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason); // What needs to occur when Simulation Ends the Simulation

private:

	///////////////////////////////PRIVATE FUNCTIONS////////////////////////////////////////////////////////
	FString GetFilePath(); // Get the path location where file is located
	bool FilePathExists(); // See if the Path for the File Path exists
	void ReadLinesFromFile(); // Read contents of the File
	void WriteLinesToFile(const TArray<TArray<float>>& Data); // Write contetns for the File
	void GenerateData();

	///////////////////////////////PRIVATE VARIABLES////////////////////////////////////////////////////////
	FString FileName = "Data";
	TArray<TArray<float>> Q; // Storage for calculated Scores for Controlled Agent
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


