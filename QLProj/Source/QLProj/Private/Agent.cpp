// Fill out your copyright notice in the Description page of Project Settings.


#include "Agent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AAgent::AAgent()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USkeletalMeshComponent* AgentMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VisualRepresentation"));
	RootComponent = AgentMesh;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> TargetMesh(TEXT("/Game/MCO_Mocap_Basics/Character/Mesh/SK_Mannequin.SK_Mannequin"));

	if (TargetMesh.Succeeded())
	{
		AgentMesh->SetSkeletalMesh(TargetMesh.Object);
		AgentMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		AgentMesh->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));
		AgentMesh->SetWorldScale3D(FVector(1.f));
	}
}

// Called when the game starts or when spawned
void AAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

