// Fill out your copyright notice in the Description page of Project Settings.


#include "QLController.h"

AQLController::AQLController()
{
	GetWaypoints();
	SetFileName("Data");
	InitT();
}

/////////////////////////EVENT HANDLERS//////////////////////

void AQLController::BeginPlay()
{
	Super::BeginPlay();
}

///////////////////////Q-LEARNING/////////////////////////

float AQLController::Heuristic(const FVector A, const FVector B)
{
    return FMath::Sqrt(FMath::Square(B.X - A.X) + FMath::Square(B.Y - A.Y) + FMath::Square(B.Z - A.Z));
}

void AQLController::GetAction()
{
    TArray<float> DataRow = Q[STATE];

    int BestIndex = -1;
    float BestScore = -INFINITY;

    for (int i = 0; i < DataRow.Num(); i++)
    {
        if (DataRow[i] > BestScore)
        {
            BestScore = DataRow[i];
            BestIndex = i;
        }
    }

    ACTION = BestIndex;
}

void AQLController::GetState()
{
    float closestDist = INFINITY;
    int bestIndex = -1;

    for (int i = 0; i < Waypoints.Num(); i++)
    {
        float h = Heuristic(GetPawn()->GetActorLocation(), Goal->GetActorLocation());

        if (h < closestDist)
        {
            bestIndex = i;
            closestDist = h;
        }
    }

    STATE = bestIndex;
}

void AQLController::GetStateandAction()
{
    GetState();
    GetAction();
}

void AQLController::PerformActon()
{
    switch (ACTION)
    {
    case 0:
        MoveUp();
        break;
    case 1:
        MoveDown();
        break;
    case 2:
        MoveLeft();
        break;
    case 3:
        MoveRight();
        break;
    }
}

void AQLController::GetReward()
{
    float h = Heuristic(GetPawn()->GetActorLocation(), Goal->GetActorLocation());
    REWARD = h < prevDist ? 1.f : -5.f;
    prevDist = h;
}

void AQLController::CalculateFeedback()
{
    Q[STATE][ACTION] = Q[STATE][ACTION] + ALPHA * (REWARD + GAMMA*Max() - Q[STATE][ACTION]);
}

///////////////////////DATA FUNCTIONS////////////////////

void AQLController::InitT()
{
	T = 
	{
		{-1.f, -1.f, -1.f,    0.f},
		{-1.f, -1.f,  0.f,  100.f},
		{-1.f,  0.f, -1.f,   -1.f},
		{-1.f,  0.f,  0.f,   -1.f},
		{ 0.f, -1.f, -1.f,  100.f},
		{-1.f,  0.f,  0.f,  100.f}
	};
}

void AQLController::GetWaypoints()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWaypoint::StaticClass(), Waypoints);
}

void AQLController::GenerateData()
{
	// Loop through each element in the Nodes array
	for (int i = 0; i < Waypoints.Num(); i++)
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
}

float AQLController::Max()
{
    TArray<float> DataRow = Q[STATE];

    float bestScore = -INFINITY;

    for (int i = 0; i < DataRow.Num(); i++)
    {
        bestScore = DataRow[i] > bestScore ? DataRow[i] : bestScore;
    }

    return bestScore;
}

////////////////////////////////////FILE I/O /////////////////////////////////////////////

void AQLController::SetFileName(FString fileName)
{
    FileName = fileName;
}

bool AQLController::FilePathExists()
{
    return FPlatformFileManager::Get().GetPlatformFile().FileExists(*GetFilePath());
}

FString AQLController::GetFilePath()
{
	return FPaths::ProjectDir() + FileName + TEXT(".txt");
}

void AQLController::ReadData()
{
    // If the file does not exist, populate Q using data from T
    if (!FilePathExists())
    {
        GenerateData();
        return; // Exit the function if file does not exist
    }

    // If the file exists, read its content
    FString FileContent;
    TArray<FString> Content;

    // Load the file content into FileContent
    FFileHelper::LoadFileToString(FileContent, *GetFilePath());

    // Split the file content into lines
    FileContent.ParseIntoArrayLines(Content, false);

    // If no data is able to be found, then populate Q using T 
    if (!(Content.Num() > 1))
    {
        GenerateData();
        return; // Exit the function if no data content exists
    }

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

void AQLController::WriteLinesToFile(const TArray<TArray<float>>& Data)
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

///////////////////////////ACTION FUNCTIONS///////////////////////////////////////

void AQLController::MoveUp()
{
    FVector currLoc = GetPawn()->GetActorLocation();
    FVector moveDir = GetPawn()->GetActorForwardVector() * 250.f;
    FVector dest = currLoc + moveDir;
    MoveToLocation(dest);
}

void AQLController::MoveDown()
{
    FVector currLoc = GetPawn()->GetActorLocation();
    FVector moveDir = GetPawn()->GetActorForwardVector() * -250.f;
    FVector dest = currLoc + moveDir;
    MoveToLocation(dest);
}

void AQLController::MoveLeft()
{
    FVector currLoc = GetPawn()->GetActorLocation();
    FVector moveDir = GetPawn()->GetActorRightVector() * -250.f;
    FVector dest = currLoc + moveDir;
    MoveToLocation(dest);
}

void AQLController::MoveRight()
{
    FVector currLoc = GetPawn()->GetActorLocation();
    FVector moveDir = GetPawn()->GetActorRightVector() * 250.f;
    FVector dest = currLoc + moveDir;
    MoveToLocation(dest);
}