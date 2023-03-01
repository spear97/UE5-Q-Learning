// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Goal.h"
#include "Agent.generated.h"

UCLASS()
class QLPROJ_API AAgent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAgent();

	//The Current Episode that the AI is currently on
	UPROPERTY(BlueprintReadOnly)
	int episode;

	//The Learning Rate - How fast the AI Will be able to learn
	UPROPERTY(BlueprintReadOnly)
	float alpha = 0.9f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//The Actor which the Agent needs to Arrive to
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGoal* goal;

	//The Vector Position that the AI Agent Began at
	UPROPERTY(BlueprintReadOnly)
	FVector origin;

};
