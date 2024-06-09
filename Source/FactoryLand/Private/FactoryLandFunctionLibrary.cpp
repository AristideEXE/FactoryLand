// Fill out your copyright notice in the Description page of Project Settings.

#include "FactoryLandFunctionLibrary.h"
#include <iostream>
#include <string>

using namespace std;

int UFactoryLandFunctionLibrary::Hash(const FString& seed)
{
    const char* charArray = TCHAR_TO_ANSI(*seed);
    int hash = CityHash64(charArray, seed.Len());
    return abs(hash);
}
