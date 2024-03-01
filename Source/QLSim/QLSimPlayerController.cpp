// Copyright Epic Games, Inc. All Rights Reserved.

#include "QLSimPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "QLSimCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"

///////////////////////////////CONSTRUCTOR//////////////////////////////////////////////

AQLSimPlayerController::AQLSimPlayerController()
{
	/*TODO: Implement Functionality for Behavioral Data from .txt file*/
}

///////////////////////////////GAME EVENT//////////////////////////////////////////////

void AQLSimPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AQLSimPlayerController::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AQLSimPlayerController::OnDestroy(bool bNetforce, bool bShouldModifyLevel)
{
	Super::Destroy(bNetforce, bShouldModifyLevel);
}

/////////////////////////////// FILE I/O /////////////////////////////////////////////

FString AQLSimPlayerController::GetFilePath(FString FileName)
{
	return FPaths::ProjectDir() + FileName + TEXT(".txt");
}

bool AQLSimPlayerController::FilePathExists(FString FileName)
{
	return FPlatformFileManager::Get().GetPlatformFile().FileExists(*GetFilePath(FileName));
}

TArray<TArray<float>> AQLSimPlayerController::PopulateQ()
{
	int index;
	TArray<TArray<float>> newQ;

	for (int i = 0; i < Nodes.Num(); i++)
	{
		index = i % 6;
		TArray<float> row = TArray<float>();

		for (int j = 0; j < 4; j++)
		{
			row.Add(T[index][j]);
		}

		newQ.Add(row);
	}

	return newQ;
}

void AQLSimPlayerController::CreateDataFile(FString FileName, FString Content)
{

}

TArray<TArray<float>> AQLSimPlayerController::ReadLinesFromFile(FString FileName, bool& bOutSuccess, FString& OutInfoMessage)
{
	// Try to read the string into the file
	if (!FilePathExists(FileName))
	{
		// Reading failed, set output variables with error message
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("READ Lines From File Failed - File doesn't exist - '%s'"), *GetFilePath(FileName));
		return TArray<TArray<float>>();
	}

	// Set where file contents will be stored
	FString Content = "";

	// Try to Load File to Content
	if (!FFileHelper::LoadFileToString(Content, *GetFilePath(FileName)))
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("READ Lines From File Failed - Unable to read file - '%s'"), *GetFilePath(FileName));
		return TArray<TArray<float>>();
	}

	// Collection of Lines from the loaded Content
	TArray<FString> Lines;

	// Parse Content into Lines
	Content.ParseIntoArrayLines(Lines);

	// Where Parse Data will be stored
	TArray<TArray<float>> ParsedData;

	// Iterate through Lines
	for (const FString& Line : Lines)
	{
		// This array will hold the split tokens of the current line
		TArray<FString> Tokens;

		// Parse Line into Tokens
		Line.ParseIntoArray(Tokens, TEXT(","), true);

		// Array to store the float values of the current line
		TArray<float> LineValues;

		// Iterate through tokens
		for (const FString& Token : Tokens)
		{
			// Convert token to float
			float Value = FCString::Atof(*Token);

			// Add float value to LineValues array
			LineValues.Add(Value);
		}

		// Add the array of float values for this line to the ParsedData
		ParsedData.Add(LineValues);
	}

	// Set success flag and return the parsed data
	bOutSuccess = true;
	return ParsedData;
}

void AQLSimPlayerController::WriteLinesToFile(FString FileName, const TArray<TArray<float>>& Data, bool& bOutSuccess, FString& OutInfoMessage)
{
	// Try to read the string into the file
	if (!FilePathExists(FileName))
	{
		// Reading failed, set output variables with error message
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("READ Lines From File Failed - File doesn't exist - '%s'"), *GetFilePath(FileName));
	}

	// Create a string to hold the formatted data
	FString Content = "";

	// Iterate through Each Element in Data
	for (const TArray<float>& LineValues : Data)
	{
		// Iterate through each sub-element in the current Element
		for (float Value : LineValues)
		{
			// Append Current sub-element to content
			Content += FString::Printf(TEXT("%.1f, "), Value);
		}
		// Add newline after each line
		Content += "\n";
	}

	// Try to write the string into the file
	if (!FFileHelper::SaveStringToFile(Content, *GetFilePath(FileName)))
	{
		// Writing failed, set output variables with error message
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Write Float Array to File Failed - Unable to write to file. Check if the file is read-only or the path is valid - '%s'"), *GetFilePath(FileName));
		return;
	}

	// Writing successful, set success flag
	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Successfully wrote to file: '%s'"), *GetFilePath(FileName));
}

///////////////////////////////////////////// Q-LEARNING FUNCTIONALITY/////////////////////////////////////////////

float AQLSimPlayerController::CalculateScore()
{
	return Q[STATE][ACTION] + ALPHA * (REWARD + GAMMA * GetMaxQ() - Q[STATE][ACTION]);
}

float AQLSimPlayerController::GetHeurestic(FVector A, FVector B)
{
	// Calculate differences in x, y, and z coordinates
	float DiffX = B.X - A.X;
	float DiffY = B.Y - A.Y;
	float DiffZ = B.Z - A.Z;

	// Square the differences
	float DiffXSquared = DiffX * DiffX;
	float DiffYSquared = DiffY * DiffY;
	float DiffZSquared = DiffZ * DiffZ;

	// Sum of squared differences
	float Sum = DiffXSquared + DiffYSquared + DiffZSquared;

	// Square root of the sum gives the distance
	float Distance = FMath::Sqrt(Sum);

	return Distance;
}

float AQLSimPlayerController::GetMaxQ()
{
	// The Current Row of Scores that is being analyzed
	TArray<float> Scores = Q[STATE];

	// The Maximum Q value in the list of Scores
	float MaxQ = -INFINITY;

	// Iterate through all Score
	for (float Score : Scores)
	{
		// Check if Score is greater than MaxQ, if so then update it
		MaxQ = Score > MaxQ ? Score : MaxQ;
	}

	return MaxQ;
}

int AQLSimPlayerController::GetAction()
{
	float bestScore = -INFINITY;
	int bestIndex = -1;

	for (int i = 0; i < Q[STATE].Num(); i++)
	{
		if (Q[STATE][i] > bestScore)
		{
			bestScore = Q[STATE][i];
			bestIndex = i;
		}
	}

	return bestIndex;
}

int AQLSimPlayerController::GetState()
{
	return 0;
}