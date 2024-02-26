// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"
#include "DataHandler.generated.h"

/**
 * A utility class for handling file input and output operations.
 */
UCLASS()
class QLSIM_API UDataHandler : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	 * Read the contents of a text file.
	 *
	 * @param FilePath         The path of the file to read.
	 * @param bOutSuccess      (Out) Whether the read operation was successful or not.
	 * @param OutInfoMessage   (Out) Additional information about the result of the operation.
	 *
	 * @return The content of the file as a string.
	 */
	UFUNCTION(BlueprintCallable, Category = "File I/O")
	static FString ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage);

	/**
	 * Write a string to a text file.
	 *
	 * @param FilePath         The path of the file to write to.
	 * @param String           The string content to write to the file.
	 * @param bOutSuccess      (Out) Whether the write operation was successful or not.
	 * @param OutInfoMessage   (Out) Additional information about the result of the operation.
	 */
	UFUNCTION(BlueprintCallable, Category = "File I/O")
	static void WriteStringToFile(FString FilePath, FString String, bool& bOutSuccess, FString& OutInfoMessage);
};
