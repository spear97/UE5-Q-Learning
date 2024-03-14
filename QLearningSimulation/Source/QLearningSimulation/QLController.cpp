// Fill out your copyright notice in the Description page of Project Settings.


#include "QLController.h"

AQLController::AQLController() {/*****CONSTRUCTOR****/}

/////////////////////////EVENT HANDLERS//////////////////////

void AQLController::BeginPlay()
{
    // Call the parent class's BeginPlay implementation
    Super::BeginPlay();

    GetWaypoints(); // Get all Waypoints that exist in the Level
    ReadData(); // Read Data that is needed for the simulation
}

void AQLController::Tick(float deltaSeconds)
{
    Super::Tick(deltaSeconds);

    //GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::Printf(TEXT("State: %i Action: %i"), STATE, ACTION));
}

void AQLController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    // Call the parent class's EndPlay implementation
    Super::EndPlay(EndPlayReason);

    WriteLinesToFile(Q); // Write Data that will be used for next Simulation
}

///////////////////////Q-LEARNING/////////////////////////

// Calculate heuristic value between two points A and B
float AQLController::Heuristic(const FVector A, const FVector B)
{
    // Using squared distance as heuristic
    // Squared distance is often used in pathfinding algorithms for efficiency
    return FVector::DistSquared(A, B);
}

void AQLController::GetAction()
{
    // Get the row corresponding to the current state from the Q-table
    TArray<float> Row = Q[STATE];

    // If the row is empty, set the action to 0 and return
    if (Row.Num() == 0)
    {
        ACTION = 0;
        return;
    }

    // Initialize variables to track the highest index and value
    int HighestIndex = 0;
    float HighestValue = Row[HighestIndex]; // Assume the first element is the highest initially

    // Iterate through the array starting from the second element
    for (int i = 1; i < Row.Num(); ++i)
    {
        // If the current value is higher than the highest value so far
        if (Row[i] > HighestValue)
        {
            HighestIndex = i; // Update the highest index
            HighestValue = Row[HighestIndex]; // Update the highest value
        }
    }

    // Set the action to the index with the highest value in the Q-table row
    ACTION = HighestIndex;
}

void AQLController::GetState()
{
    // If there are no waypoints, set the state to 0 and return
    if (Waypoints.Num() == 0)
    {
        STATE = 0;
        return;
    }

    // Initialize variables to track the closest index and distance
    int closestIndex = -1;
    float ClosestDistanceSquared = MAX_FLT;

    // Iterate through all waypoints to find the closest one
    for (int i = 0; i < Waypoints.Num(); i++)
    {
        // Calculate the squared distance between the AI and the current waypoint
        float DistanceSquared = FVector::DistSquared(GetPawn()->GetActorLocation(), Waypoints[i]->GetActorLocation());

        // If the current waypoint is closer than the previous closest waypoint
        if (DistanceSquared < ClosestDistanceSquared)
        {
            closestIndex = i; // Update the closest index
            ClosestDistanceSquared = DistanceSquared; // Update the closest distance
        }
    }

    // Set the state to the index of the closest waypoint
    STATE = closestIndex;
}

void AQLController::GetStateandAction()
{
    // Get the current state
    GetState();

    // Get the action based on the current state
    GetAction();
}

void AQLController::PerformActon()
{
    // Perform an action based on the current value of ACTION
    switch (ACTION)
    {
    case 0:
        MoveUp(); // Move Up at Index of 0
        break;
    case 1:
        MoveDown(); // Move Down at Index of 1
        break;
    case 2:
        MoveLeft(); // Move Left at Index of 2
        break;
    case 3:
        MoveRight(); // Move Right at Index of 3
        break;
    }
}

void AQLController::GetReward()
{
    // Calculate the heuristic value between the AI and the goal
    float h = Heuristic(GetPawn()->GetActorLocation(), Goal->GetActorLocation());

    // Determine the reward based on the change in heuristic value
    // If the new heuristic value is less than the previous distance, give a reward of 1, otherwise -5
    REWARD = h < prevDist ? 1.f : -5.f;

    // Update the previous distance with the new heuristic value
    prevDist = h;
}

void AQLController::CalculateFeedback()
{
    // Update the Q-value for the current state-action pair using Bellman's equation for Q-learning:
    Q[STATE][ACTION] = Q[STATE][ACTION] + ALPHA * (REWARD + GAMMA*Max() - Q[STATE][ACTION]);
}

///////////////////////DATA FUNCTIONS////////////////////

void AQLController::GetWaypoints()
{
    // Get all actors of class AWaypoint in the current world
    // and store them in the Waypoints array.
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWaypoint::StaticClass(), Waypoints);
}

void AQLController::GenerateData()
{
    // Loop through each element in the Waypoints array
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

// Calculate the maximum Q-value for the current state
float AQLController::Max()
{
    // Get the row of Q-values corresponding to the current state
    TArray<float> DataRow = Q[STATE];

    // Initialize the best score to negative infinity
    float bestScore = -MAX_FLT;

    // Iterate through the row to find the maximum Q-value
    for (int i = 0; i < DataRow.Num(); i++)
    {
        // If the current Q-value is greater than the best score so far, update best score
        bestScore = DataRow[i] > bestScore ? DataRow[i] : bestScore;
    }

    // Return the maximum Q-value found
    return bestScore;
}

////////////////////////////////////FILE I/O /////////////////////////////////////////////

bool AQLController::FilePathExists()
{
    // Get the platform file manager and check if the file exists
    // by using the FileExists() function with the file path.
    return FPlatformFileManager::Get().GetPlatformFile().FileExists(*GetFilePath());
}

// Get the file path for saving or loading data
FString AQLController::GetFilePath()
{
    // Construct the file path by combining the project directory, file name, and extension
    FString FilePath = FPaths::ProjectDir() + FileName + TEXT(".txt");

    // Return the constructed file path
    return FilePath;
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

// Move the controlled pawn forward
void AQLController::MoveUp()
{
    // Get the current location of the pawn
    FVector currLoc = GetPawn()->GetActorLocation();

    // Calculate the movement direction by multiplying the forward vector with moveDelta
    FVector moveDir = GetPawn()->GetActorForwardVector() * moveDelta;

    // Calculate the destination position by adding the movement direction to the current location
    FVector dest = currLoc + moveDir;

    // Move the pawn to the calculated destination
    MoveToLocation(dest);
}

// Move the controlled pawn backward
void AQLController::MoveDown()
{
    // Get the current location of the pawn
    FVector currLoc = GetPawn()->GetActorLocation();

    // Calculate the movement direction by multiplying the negative forward vector with moveDelta
    FVector moveDir = GetPawn()->GetActorForwardVector() * -moveDelta;

    // Calculate the destination position by adding the movement direction to the current location
    FVector dest = currLoc + moveDir;

    // Move the pawn to the calculated destination
    MoveToLocation(dest);
}

// Move the controlled pawn left
void AQLController::MoveLeft()
{
    // Get the current location of the pawn
    FVector currLoc = GetPawn()->GetActorLocation();

    // Calculate the movement direction by multiplying the negative right vector with moveDelta
    FVector moveDir = GetPawn()->GetActorRightVector() * -moveDelta;

    // Calculate the destination position by adding the movement direction to the current location
    FVector dest = currLoc + moveDir;

    // Move the pawn to the calculated destination
    MoveToLocation(dest);
}

// Move the controlled pawn right
void AQLController::MoveRight()
{
    // Get the current location of the pawn
    FVector currLoc = GetPawn()->GetActorLocation();

    // Calculate the movement direction by multiplying the right vector with moveDelta
    FVector moveDir = GetPawn()->GetActorRightVector() * moveDelta;

    // Calculate the destination position by adding the movement direction to the current location
    FVector dest = currLoc + moveDir;

    // Move the pawn to the calculated destination
    MoveToLocation(dest);
}