// Fill out your copyright notice in the Description page of Project Settings.


#include "Goal.h"

// The Editable Categories for Actor's Look
AGoal::AGoal()
{
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
}

// Called when the game starts or when spawned
void AGoal::BeginPlay()
{
	Super::BeginPlay();
	SpawnAtRandomLocation();
}

//Spawn Goal at a the Location of a Randomly Selected Way
void AGoal::SpawnAtRandomLocation()
{
	//Get All WayPoints in the Environment
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWayPoint::StaticClass(), WayPoints);

	//Get a random Waypoint index in WayPoints
	int i = (FMath::Rand() % ((WayPoints.Num() - 1) + 1));

	//Extract the Location Data from the Selected WayPoint
	FVector loc = WayPoints[i]->GetActorLocation();

	//Set the Axis of the WayPoint
	loc.Z = 130.f;

	//Set the Actor to be Set at that location
	SetActorLocation(loc);
}