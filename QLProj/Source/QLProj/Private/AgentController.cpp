// Fill out your copyright notice in the Description page of Project Settings.


#include "AgentController.h"

AAgentController::AAgentController()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAgentController::BeginPlay()
{
	Super::BeginPlay();

	//Get All WayPoints in the Environment
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWayPoint::StaticClass(), WayPoints);

	//Set State Size as FoundActors
	StateSize = WayPoints.Num();

	//Generate Q-Matrix

	//The R-Matrix
	//Acts as a Template for Scores that will be inputted into the Q-Matrix
	TArray<TArray<float>> R = { 
		{-1.0f, -1.0f, -1.0f, -1.0f, 0.0f, -1.0f, -1.0f, -1.0f},
		{-1.0f, -1.0f, -1.0f, 0.0f, -1.0f, -1.0f, -1.0f, 100.0f},
		{-1.0f, -1.0f, -1.0f, 0.0f, -1.0f, -1.0f, -1.0f, -1.0f},
		{-1.0f, 0.0f, 0.0f, -1.0f, 0.0f, -1.0f, -1.0f, -1.0f},
		{0.0f, -1.0f, -1.0f, 0.0f, -1.0f, -1.0f, -1.0f, 100.0f},
		{-1.0f, 0.0f, -1.0f, -1.0f, 0.0f, -1.0f, -1.0f, 100.0f}
	};

	//Populate Q-Matrix with Score for Q(S,A)
	for (int i = 0; i < StateSize; i++)
	{
		int ri = i % 6;

		Q.Add(R[ri]);
	}
}

// Called every frame
void AAgentController::Tick(float delta)
{
	Super::Tick(delta);
}

/**************Actions**************/

//Move Controlled Pawn Forward
void AAgentController::Fwd()
{
	MoveToLocation(GetPawn()->GetActorLocation() + (GetPawn()->GetActorForwardVector() * 250.f));
}

//Move Controlled Pawn Forward-Left
void AAgentController::FwdLt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + ((GetPawn()->GetActorForwardVector() * 250.f) + (-GetPawn()->GetActorRightVector() * 250.f)));
}

//Move Controlled Pawn Forward-Right
void AAgentController::FwdRt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + ((GetPawn()->GetActorForwardVector() * 250.f) + (GetPawn()->GetActorRightVector() * 250.f)));
}

//Move Controlled Pawn Right
void AAgentController::Rt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + (GetPawn()->GetActorRightVector() * 250.f));
}

//Move Controlled Pawn Left
void AAgentController::Lt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + (-GetPawn()->GetActorRightVector() * 250.f));
}

//Move Controlled Pawn Backward
void AAgentController::Bwd()
{
	MoveToLocation(GetPawn()->GetActorLocation() + (-GetPawn()->GetActorForwardVector() * 250.f));
}

//Move Controlled Pawn Backward-Left
void AAgentController::BwdLt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + ((-GetPawn()->GetActorForwardVector() * 250.f) + (-GetPawn()->GetActorRightVector() * 250.f)));
}

//Move Controlled Pawn Backward-Right
void AAgentController::BwdRt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + ((-GetPawn()->GetActorForwardVector() * 250.f) + (GetPawn()->GetActorRightVector() * 250.f)));
}