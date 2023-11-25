// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/FetchResponse.h"
#include "Fetch/Public/Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchResponse() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FETCH_API UClass* Z_Construct_UClass_UFetchResponse();
	FETCH_API UClass* Z_Construct_UClass_UFetchResponse_NoRegister();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchHeader();
	UPackage* Z_Construct_UPackage__Script_Fetch();
// End Cross Module References
	DEFINE_FUNCTION(UFetchResponse::execGetHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHeader(Z_Param_Key);
		P_NATIVE_END;
	}
	void UFetchResponse::StaticRegisterNativesUFetchResponse()
	{
		UClass* Class = UFetchResponse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeader", &UFetchResponse::execGetHeader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchResponse_GetHeader_Statics
	{
		struct FetchResponse_eventGetHeader_Parms
		{
			FString Key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchResponse_eventGetHeader_Parms, Key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchResponse_eventGetHeader_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Response" },
		{ "ModuleRelativePath", "Public/FetchResponse.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchResponse, nullptr, "GetHeader", nullptr, nullptr, Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::FetchResponse_eventGetHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::FetchResponse_eventGetHeader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchResponse_GetHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchResponse_GetHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFetchResponse);
	UClass* Z_Construct_UClass_UFetchResponse_NoRegister()
	{
		return UFetchResponse::StaticClass();
	}
	struct Z_Construct_UClass_UFetchResponse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseText;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Headers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Headers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchResponse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchResponse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchResponse_GetHeader, "GetHeader" }, // 3121062447
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchResponse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "FetchResponse.h" },
		{ "ModuleRelativePath", "Public/FetchResponse.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchResponse_Statics::NewProp_StatusCode_MetaData[] = {
		{ "Category", "Fetch | Response" },
		{ "ModuleRelativePath", "Public/FetchResponse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFetchResponse_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFetchResponse, StatusCode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::NewProp_StatusCode_MetaData), Z_Construct_UClass_UFetchResponse_Statics::NewProp_StatusCode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchResponse_Statics::NewProp_ResponseText_MetaData[] = {
		{ "Category", "Fetch | Response" },
		{ "ModuleRelativePath", "Public/FetchResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFetchResponse_Statics::NewProp_ResponseText = { "ResponseText", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFetchResponse, ResponseText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::NewProp_ResponseText_MetaData), Z_Construct_UClass_UFetchResponse_Statics::NewProp_ResponseText_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFetchHeader, METADATA_PARAMS(0, nullptr) }; // 147067448
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers_MetaData[] = {
		{ "Category", "Fetch | Response" },
		{ "ModuleRelativePath", "Public/FetchResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFetchResponse, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers_MetaData), Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers_MetaData) }; // 147067448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFetchResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchResponse_Statics::NewProp_StatusCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchResponse_Statics::NewProp_ResponseText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchResponse_Statics::NewProp_Headers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchResponse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchResponse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFetchResponse_Statics::ClassParams = {
		&UFetchResponse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFetchResponse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::Class_MetaDataParams), Z_Construct_UClass_UFetchResponse_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchResponse_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFetchResponse()
	{
		if (!Z_Registration_Info_UClass_UFetchResponse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFetchResponse.OuterSingleton, Z_Construct_UClass_UFetchResponse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFetchResponse.OuterSingleton;
	}
	template<> FETCH_API UClass* StaticClass<UFetchResponse>()
	{
		return UFetchResponse::StaticClass();
	}
	UFetchResponse::UFetchResponse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchResponse);
	UFetchResponse::~UFetchResponse() {}
	struct Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchResponse_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchResponse_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFetchResponse, UFetchResponse::StaticClass, TEXT("UFetchResponse"), &Z_Registration_Info_UClass_UFetchResponse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFetchResponse), 3404592606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchResponse_h_867183911(TEXT("/Script/Fetch"),
		Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchResponse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchResponse_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
