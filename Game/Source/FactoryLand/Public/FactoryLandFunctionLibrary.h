// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FactoryLandFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYLAND_API UFactoryLandFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Hash")
		// Generate the hash of a seed
		static int Hash(const FString& seed);
};
