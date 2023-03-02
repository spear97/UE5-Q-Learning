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

	GetWayPoints();
	GenerateMatrix();

	//The Timer that will act as the Driver for the Q_Learning Algorithm
	GetWorldTimerManager().SetTimer(Timer, this, &AAgentController::Q_Learning, delay, true);
}

// Called every frame
void AAgentController::Tick(float delta)
{
	Super::Tick(delta);
	s = GetState();
	a = GetAction();
}

void AAgentController::Q_Learning()
{
	switch (a)
	{
	case 0:
		Fwd();
		break;
	case 1:
		FwdRt();
		break;
	case 2:
		Rt();
		break;
	case 3:
		BwdRt();
		break;
	case 4:
		Bwd();
		break;
	case 5:
		BwdLt();
		break;
	case 6:
		Lt();
		break;
	case 7:
		FwdLt();
		break;
	}
}

//Get All WayPoints that Exist in the Environment and Set StateSize
void AAgentController::GetWayPoints()
{
	//Get All WayPoints in the Environment
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWayPoint::StaticClass(), WayPoints);

	//Set State Size as FoundActors
	StateSize = WayPoints.Num();
}

//Generate the QMatrix that will be used for Q-Learning
void AAgentController::GenerateMatrix()
{
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

//Get the State of the that the AI is currently at
int AAgentController::GetState()
{
	FVector AgentLocation = this->GetPawn()->GetActorLocation();
	float nearest = INFINITY;
	int nearestIndex = NULL;

	for (int i = 0; i < WayPoints.Num(); i++)
	{
		float dist = FVector::Dist(WayPoints[i]->GetActorLocation(), AgentLocation);
		if (dist < nearest) { nearest = dist; nearestIndex = i; }
	}

	return nearestIndex;
}

// Get the Best Action for Current State that the AI is currently at
int AAgentController::GetAction()
{
	float bestScore = -INFINITY;
	float bestIndex = NULL;

	for (int i = 0; i < Q[s].Num(); i++)
	{
		if (Q[s][i] > bestScore)
		{
			bestScore = Q[s][i];
			bestIndex = i;
		}
	}

	return bestIndex;
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
