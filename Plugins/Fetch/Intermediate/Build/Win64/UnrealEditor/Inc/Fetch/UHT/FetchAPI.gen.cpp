// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/FetchAPI.h"
#include "Fetch/Public/Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchAPI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FETCH_API UClass* Z_Construct_UClass_UFetchAPI();
	FETCH_API UClass* Z_Construct_UClass_UFetchAPI_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_UFetchRequest_NoRegister();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchHeader();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchJsonOptions();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchOptions();
	UPackage* Z_Construct_UPackage__Script_Fetch();
// End Cross Module References
	DEFINE_FUNCTION(UFetchAPI::execMakeOAuthHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFetchHeader*)Z_Param__Result=UFetchAPI::MakeOAuthHeader(Z_Param_Token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchAPI::execMakeBasicAuthHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFetchHeader*)Z_Param__Result=UFetchAPI::MakeBasicAuthHeader(Z_Param_Username,Z_Param_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchAPI::execFetchJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_STRUCT(FFetchJsonOptions,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchRequest**)Z_Param__Result=UFetchAPI::FetchJson(Z_Param_Url,Z_Param_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchAPI::execFetch)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_STRUCT(FFetchOptions,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchRequest**)Z_Param__Result=UFetchAPI::Fetch(Z_Param_Url,Z_Param_Options);
		P_NATIVE_END;
	}
	void UFetchAPI::StaticRegisterNativesUFetchAPI()
	{
		UClass* Class = UFetchAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fetch", &UFetchAPI::execFetch },
			{ "FetchJson", &UFetchAPI::execFetchJson },
			{ "MakeBasicAuthHeader", &UFetchAPI::execMakeBasicAuthHeader },
			{ "MakeOAuthHeader", &UFetchAPI::execMakeOAuthHeader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchAPI_Fetch_Statics
	{
		struct FetchAPI_eventFetch_Parms
		{
			FString Url;
			FFetchOptions Options;
			UFetchRequest* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchAPI_eventFetch_Parms, Url), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchAPI_eventFetch_Parms, Options), Z_Construct_UScriptStruct_FFetchOptions, METADATA_PARAMS(0, nullptr) }; // 2467393469
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchAPI_eventFetch_Parms, ReturnValue), Z_Construct_UClass_UFetchRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchAPI_Fetch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_Fetch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchAPI_Fetch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch" },
		{ "ModuleRelativePath", "Public/FetchAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchAPI_Fetch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchAPI, nullptr, "Fetch", nullptr, nullptr, Z_Construct_UFunction_UFetchAPI_Fetch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_Fetch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchAPI_Fetch_Statics::FetchAPI_eventFetch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_Fetch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchAPI_Fetch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_Fetch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchAPI_Fetch_Statics::FetchAPI_eventFetch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchAPI_Fetch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchAPI_Fetch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchAPI_FetchJson_Statics
	{
		struct FetchAPI_eventFetchJson_Parms
		{
			FString Url;
			FFetchJsonOptions Options;
			UFetchRequest* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchAPI_eventFetchJson_Parms, Url), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchAPI_eventFetchJson_Parms, Options), Z_Construct_UScriptStruct_FFetchJsonOptions, METADATA_PARAMS(0, nullptr) }; // 2511189844
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchAPI_eventFetchJson_Parms, ReturnValue), Z_Construct_UClass_UFetchRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch" },
		{ "ModuleRelativePath", "Public/FetchAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchAPI, nullptr, "FetchJson", nullptr, nullptr, Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::FetchAPI_eventFetchJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::FetchAPI_eventFetchJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchAPI_FetchJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchAPI_FetchJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics
	{
		struct FetchAPI_eventMakeBasicAuthHeader_Parms
		{
			FString Username;
			FString Password;
			FFetchHeader ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchAPI_eventMakeBasicAuthHeader_Parms, Username), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchAPI_eventMakeBasicAuthHeader_Parms, Password), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchAPI_eventMakeBasicAuthHeader_Parms, ReturnValue), Z_Construct_UScriptStruct_FFetchHeader, METADATA_PARAMS(0, nullptr) }; // 147067448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_Username,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Headers" },
		{ "ModuleRelativePath", "Public/FetchAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchAPI, nullptr, "MakeBasicAuthHeader", nullptr, nullptr, Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::FetchAPI_eventMakeBasicAuthHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::FetchAPI_eventMakeBasicAuthHeader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics
	{
		struct FetchAPI_eventMakeOAuthHeader_Parms
		{
			FString Token;
			FFetchHeader ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchAPI_eventMakeOAuthHeader_Parms, Token), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchAPI_eventMakeOAuthHeader_Parms, ReturnValue), Z_Construct_UScriptStruct_FFetchHeader, METADATA_PARAMS(0, nullptr) }; // 147067448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::NewProp_Token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Headers" },
		{ "ModuleRelativePath", "Public/FetchAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchAPI, nullptr, "MakeOAuthHeader", nullptr, nullptr, Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::FetchAPI_eventMakeOAuthHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::FetchAPI_eventMakeOAuthHeader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFetchAPI);
	UClass* Z_Construct_UClass_UFetchAPI_NoRegister()
	{
		return UFetchAPI::StaticClass();
	}
	struct Z_Construct_UClass_UFetchAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchAPI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchAPI_Fetch, "Fetch" }, // 4244527119
		{ &Z_Construct_UFunction_UFetchAPI_FetchJson, "FetchJson" }, // 3414785689
		{ &Z_Construct_UFunction_UFetchAPI_MakeBasicAuthHeader, "MakeBasicAuthHeader" }, // 2896904123
		{ &Z_Construct_UFunction_UFetchAPI_MakeOAuthHeader, "MakeOAuthHeader" }, // 1376184170
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchAPI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchAPI_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )\n" },
#endif
		{ "IncludePath", "FetchAPI.h" },
		{ "ModuleRelativePath", "Public/FetchAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFetchAPI_Statics::ClassParams = {
		&UFetchAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UFetchAPI_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFetchAPI()
	{
		if (!Z_Registration_Info_UClass_UFetchAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFetchAPI.OuterSingleton, Z_Construct_UClass_UFetchAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFetchAPI.OuterSingleton;
	}
	template<> FETCH_API UClass* StaticClass<UFetchAPI>()
	{
		return UFetchAPI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchAPI);
	UFetchAPI::~UFetchAPI() {}
	struct Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFetchAPI, UFetchAPI::StaticClass, TEXT("UFetchAPI"), &Z_Registration_Info_UClass_UFetchAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFetchAPI), 1916802983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_2546373105(TEXT("/Script/Fetch"),
		Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
