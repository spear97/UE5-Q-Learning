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

/**
 * Get the file path based on the project directory and the provided file name.
 * @return The file path as FString.
 */
FString AQLSimPlayerController::GetFilePath()
{
	return FPaths::ProjectDir() + FileName + TEXT(".txt");
}

/**
 * Check if the file path specified by GetFilePath() exists.
 * @return true if the file exists, false otherwise.
 */
bool AQLSimPlayerController::FilePathExists()
{
	return FPlatformFileManager::Get().GetPlatformFile().FileExists(*GetFilePath());
}

/**
 * Read lines from a file and populate the Q array with float values.
 * If the file does not exist, populate Q with values from T array.
 */
void AQLSimPlayerController::ReadLinesFromFile()
{
    // If the file does not exist, populate Q using Nodes and T arrays
    if (!FilePathExists())
    {
        for (int i = 0; i < Nodes.Num(); i++)
        {
            // Calculate the index based on the size of T
            int index = i % T.Num();

            // Create a new entry for Q
            TArray<float> QEntry;

            // Add values from T to QEntry
            for (int j = 0; j < 4; j++)
            {
                QEntry.Add(T[index][j]);
            }

            // Add QEntry to Q
            Q.Add(QEntry);
        }

        return; // Exit the function if file does not exist
    }

    // If the file exists, read its content
    FString FileContent;
    TArray<FString> Content;

    // Load the file content into FileContent
    FFileHelper::LoadFileToString(FileContent, *GetFilePath());

    // Split the file content into lines
    FileContent.ParseIntoArrayLines(Content, false);

    // Iterate through each line in the file
    for (const FString& Line : Content)
    {
        // Split the line into individual values based on commas
        TArray<FString> LineValues;
        Line.ParseIntoArray(LineValues, TEXT(","), true);

        // Array to store parsed float values from the line
        TArray<float> FloatValues;

        // Convert each substring to a float and add to FloatValues
        for (const FString& Value : LineValues)
        {
            float FloatValue = FCString::Atof(*Value); // Convert FString to float
            FloatValues.Add(FloatValue); // Add the float value to FloatValues
        }

        // Add the array of float values to Q
        Q.Add(FloatValues);
    }
}

/**
 * Write the contents of a 2D array of floats to a text file.
 * Each row of the array will be written as a line in the file,
 * with values separated by commas.
 * @param Data The 2D array of floats to write to the file.
 */
void AQLSimPlayerController::WriteLinesToFile(const TArray<TArray<float>>& Data)
{
    // Array to hold lines of content to write to the file
    TArray<FString> Content;

    // Iterate through each row of the Data array
    for (int row = 0; row < Data.Num(); row++)
    {
        FString RowString = "";

        // Iterate through each column of the current row
        for (int col = 0; col < Data[row].Num(); col++)
        {
            // Convert the float value to FString and add to the RowString
            RowString += FString::SanitizeFloat(Data[row][col]);

            // If it's not the last column, add a comma to separate values
            if (col < Data[row].Num() - 1)
            {
                RowString += ",";
            }
        }

        // Add the completed RowString to the Content array
        Content.Add(RowString);
    }

    // Join all rows with newline character to form the final string
    FString LinesString = FString::Join(Content, TEXT("\n"));

    // Save the string to the file
    FFileHelper::SaveStringToFile(LinesString, *GetFilePath());
}