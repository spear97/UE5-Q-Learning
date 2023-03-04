// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Agent.generated.h"

UCLASS()
class QLPROJ_API AAgent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float delta) override;

	/**************Variables that will get set in Blueprint**************/
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	AActor* Target;
};
