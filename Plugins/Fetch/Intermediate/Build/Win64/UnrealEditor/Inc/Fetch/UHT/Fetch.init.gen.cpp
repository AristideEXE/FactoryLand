// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetch_init() {}
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Fetch;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Fetch()
	{
		if (!Z_Registration_Info_UPackage__Script_Fetch.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Fetch",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC7B69780,
				0xAEC3163F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Fetch.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Fetch.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Fetch(Z_Construct_UPackage__Script_Fetch, TEXT("/Script/Fetch"), Z_Registration_Info_UPackage__Script_Fetch, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC7B69780, 0xAEC3163F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
