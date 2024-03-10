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

	UFUNCTION(BlueprintCallable, Category = "Q-Learning")
	void GetStateandAction();

	UFUNCTION(BlueprintCallable, Category = "Q-Learning")
	void PerformActon();

	UFUNCTION(BlueprintCallable, Category = "Q-Learning")
	void GetReward();

	UFUNCTION(BlueprintCallable, Category = "Q-Learning")
	void CalculateFeedback();

	//////////////////////////////PUBLIC VARIALES//////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Q-Learning")
	AActor* Goal;

protected:

	//////////////////////////////PROTECTED FUNCTIONS//////////////////////////////

	virtual void BeginPlay();

	/*******DATA FUNCTION*******/

	void InitT();

	void GetWaypoints();

	void GenerateData();

	/*******FILE I/O*******/

	void ReadData();

	void WriteLinesToFile(const TArray<TArray<float>>& Data);

	/*******FILE FUNCTIONS*******/

	void SetFileName(FString fileName);

	bool FilePathExists();

	FString GetFilePath();

	/*******ACTION FUNCTIONS*******/

	void MoveUp();
	  
	void MoveDown();

	void MoveLeft();

	void MoveRight();

	/*******Q-LEARING FUNCTIOONS********/

	void GetAction();

	void GetState();

	float Heuristic(const FVector A, const FVector B);

	float Max();
	
	//////////////////////////////PROTECTED VARIABLES//////////////////////////////

	TArray<AActor*> Waypoints;

	FString FileName;

	TArray<TArray<float>> T, Q;

	int STATE, ACTION, REWARD;

	const float GAMMA = 0.95f;
	const float ALPHA = 0.95f;
	float prevDist = INFINITY;
};
