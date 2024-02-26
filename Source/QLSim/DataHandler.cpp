// Fill out your copyright notice in the Description page of Project Settings.

#include "DataHandler.h"

FString UDataHandler::ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage)
{
    // Check if the file exists
    if (!(FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath)))
    {
        // File does not exist, set output variables and return an empty string
        bOutSuccess = false;
        OutInfoMessage = FString::Printf(TEXT("READ String From File Failed - File doesn't exist - '%s'"), *FilePath);
        return "";
    }

    FString Content = "";

    // Try to read the file. Output goes into Content
    if (!(FFileHelper::LoadFileToString(Content, *FilePath)))
    {
        // Reading failed, set output variables and return an empty string
        bOutSuccess = false;
        OutInfoMessage = FString::Printf(TEXT("READ String From File Failed - Unable to read file - '%s'"), *FilePath);
        return "";
    }

    // Reading successful, set success flag and return the content of the file
    bOutSuccess = true;
    return Content;
}

void UDataHandler::WriteStringToFile(FString FilePath, FString String, bool& bOutSuccess, FString& OutInfoMessage)
{
    // Try to write the string into the file
    if (!FFileHelper::SaveStringToFile(String, *FilePath))
    {
        // Writing failed, set output variables with error message
        bOutSuccess = false;
        OutInfoMessage = FString::Printf(TEXT("Write String to File Failed - Unable to write to file. Check if the file is read-only or the path is valid - '%s'"), *FilePath);
        return;
    }

    // Writing successful, set success flag
    bOutSuccess = true;
}
