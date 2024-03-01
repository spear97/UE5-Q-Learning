// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "QLSimCharacter.generated.h"

UCLASS(Blueprintable)
class AQLSimCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	///////////////////////////////PUBLIC VARIABLES////////////////////////////////////////////////////////

	AQLSimCharacter(); // Constructor

	virtual void Tick(float DeltaSeconds) override; // Called every frame.

	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; } // Returns TopDownCameraComponent subobject

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; } // Returns CameraBoom subobject

private:

	///////////////////////////////PRIVATE VARIABLES////////////////////////////////////////////////////////

	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
};

