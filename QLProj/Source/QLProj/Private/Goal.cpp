// Fill out your copyright notice in the Description page of Project Settings.


#include "Goal.h"

// The Editable Categories for Actor's Look
AGoal::AGoal()
{
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
}