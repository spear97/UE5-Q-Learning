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

	//Generate the Matrix that will be used by the Agent
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

/**************The Initial Function for the Q-Learning**************/

//Generate the Matrix that will be used for Q-Learning
void AAgentController::GenerateMatrix()
{
	//Get All WayPoints in the Environment
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWayPoint::StaticClass(), WayPoints);

	//Set State Size as WayPoints
	s_size = WayPoints.Num();

	//Set Action Size as WayPoints
	a_size = 8;

	for (int i = 0; i < s_size; i++)
	{
		TArray<float> T;

		int k = i % a_size;

		for (int j = 0; j < a_size; j++)
		{
			T.Add(R[k][j]);
		}

		Q.Add(T);
	}
}

//Output the Matrix to the Screen, Used for Debugging Purposes
void AAgentController::PrintMatrix()
{
	if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::White, FString::Printf(TEXT("-------------------------"))); }

	for (int i = s_size - 1; i >= 0; i--)
	{
		if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::White, FString::Printf(TEXT("|%f %f %f %f %f %f %f %f|"), Q[i][0], Q[i][1], Q[i][2], Q[i][3], Q[i][4], Q[i][5], Q[i][6], Q[i][7])); }
	}

	if (GEngine) { GEngine->AddOnScreenDebugMessage(-1, 30.0f, FColor::White, FString::Printf(TEXT("-------------------------"))); }
}

/*****************Q-Learning Reinforcement Functions**************/

//Get the Current State that the Agent is in
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

//Get the Best Action for Current State
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

//The Function that will the Reinforcement Learning for the Agent
void AAgentController::Q_Learning()
{
	//Perform for the current value
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

	//Check if Target Exists
	//Target is Needed for Reinforcement Learning to Operate
	if (Target)
	{
		float currDist = FVector::Dist(Target->GetActorLocation(), this->GetPawn()->GetActorLocation());

		if (currDist < prevDist)
		{
			r = 1;
			prevDist = currDist;
		}
		else
		{
			r = -5;
			prevDist = currDist;
		}

		Q[s][a] = CalculatePolicy();
	}
}

//Get the Score for the Correspond Action and State
float AAgentController::CalculatePolicy()
{
	return Q[s][a] + alpha * (r + gamma * GetMaxQ() - Q[s][a]);
}

//Get the Maximum Score for the Given State
float AAgentController::GetMaxQ()
{
	//The Current Row that is being Analyzed
	TArray<float> T = Q[s];

	//The maximum score for the Analyzed Row
	float max = -INFINITY;

	//Iterate through the current Row
	for (int i = 0; i < T.Num(); i++)
	{
		//If the current element is greater than max, then updated max
		if (T[i] > max)
		{
			max = T[i];
		}
	}

	//Return the maximum value
	return max;
}

/************The Action Functions that the Agent Can take************/

//Move the Agent Forward -> 0
void AAgentController::Fwd()
{
	MoveToLocation(GetPawn()->GetActorLocation() + (GetPawn()->GetActorForwardVector() * 250.f));
}

//Move the Agent Forward-Right -> 1
void AAgentController::FwdRt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + ((GetPawn()->GetActorForwardVector() * 250.f) + (GetPawn()->GetActorRightVector() * 250.f)));
}

//Move the Agent Right -> 2
void AAgentController::Rt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + (GetPawn()->GetActorRightVector() * 250.f));
}

//Move the Agent Backward-Right -> 3
void AAgentController::BwdRt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + ((-GetPawn()->GetActorForwardVector() * 250.f) + (GetPawn()->GetActorRightVector() * 250.f)));
}

//Move the Agent Backward -> 4
void AAgentController::Bwd()
{
	MoveToLocation(GetPawn()->GetActorLocation() + (-GetPawn()->GetActorForwardVector() * 250.f));
}

//Move the Agent Backward-Left -> 5
void AAgentController::BwdLt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + ((-GetPawn()->GetActorForwardVector() * 250.f) + (-GetPawn()->GetActorRightVector() * 250.f)));
}

//Move the Agent left -> 6 
void AAgentController::Lt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + (-GetPawn()->GetActorRightVector() * 250.f));
}

//Move the Agent Forward-Left -> 7
void AAgentController::FwdLt()
{
	MoveToLocation(GetPawn()->GetActorLocation() + ((GetPawn()->GetActorForwardVector() * 250.f) + (-GetPawn()->GetActorRightVector() * 250.f)));
}

/**************Blueprint Functions****************/

TArray<float> AAgentController::GetQAtIndex(int i)
{
	return Q[i];
}