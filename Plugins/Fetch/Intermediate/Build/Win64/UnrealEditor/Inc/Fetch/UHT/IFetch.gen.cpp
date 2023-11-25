// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/IFetch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFetch() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FETCH_API UClass* Z_Construct_UClass_UFetchResponse_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_UIFetch();
	FETCH_API UClass* Z_Construct_UClass_UIFetch_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonValue_NoRegister();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Fetch();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_Fetch_eventFetchResponseDelegate_Parms
		{
			int32 StatusCode;
			FString Content;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchResponseDelegate_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchResponseDelegate_Parms, Content), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::NewProp_StatusCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFetch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Fetch, nullptr, "FetchResponseDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::_Script_Fetch_eventFetchResponseDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::_Script_Fetch_eventFetchResponseDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Fetch_FetchResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFetchResponseDelegate_DelegateWrapper(const FScriptDelegate& FetchResponseDelegate, int32 StatusCode, const FString& Content)
{
	struct _Script_Fetch_eventFetchResponseDelegate_Parms
	{
		int32 StatusCode;
		FString Content;
	};
	_Script_Fetch_eventFetchResponseDelegate_Parms Parms;
	Parms.StatusCode=StatusCode;
	Parms.Content=Content;
	FetchResponseDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_Fetch_eventFetchErrorDelegate_Parms
		{
			FString ErrorMessage;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFetch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Fetch, nullptr, "FetchErrorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::_Script_Fetch_eventFetchErrorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::_Script_Fetch_eventFetchErrorDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFetchErrorDelegate_DelegateWrapper(const FScriptDelegate& FetchErrorDelegate, const FString& ErrorMessage)
{
	struct _Script_Fetch_eventFetchErrorDelegate_Parms
	{
		FString ErrorMessage;
	};
	_Script_Fetch_eventFetchErrorDelegate_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	FetchErrorDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_Fetch_eventFetchTextResponseDelegate_Parms
		{
			FString TextContent;
			UFetchResponse* Response;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextContent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::NewProp_TextContent = { "TextContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchTextResponseDelegate_Parms, TextContent), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchTextResponseDelegate_Parms, Response), Z_Construct_UClass_UFetchResponse_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::NewProp_TextContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFetch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Fetch, nullptr, "FetchTextResponseDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::_Script_Fetch_eventFetchTextResponseDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::_Script_Fetch_eventFetchTextResponseDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFetchTextResponseDelegate_DelegateWrapper(const FScriptDelegate& FetchTextResponseDelegate, const FString& TextContent, UFetchResponse* Response)
{
	struct _Script_Fetch_eventFetchTextResponseDelegate_Parms
	{
		FString TextContent;
		UFetchResponse* Response;
	};
	_Script_Fetch_eventFetchTextResponseDelegate_Parms Parms;
	Parms.TextContent=TextContent;
	Parms.Response=Response;
	FetchTextResponseDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_Fetch_eventFetchJsonResponseDelegate_Parms
		{
			USimpleJsonValue* JsonValue;
			UFetchResponse* Response;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchJsonResponseDelegate_Parms, JsonValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Fetch_eventFetchJsonResponseDelegate_Parms, Response), Z_Construct_UClass_UFetchResponse_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::NewProp_JsonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFetch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Fetch, nullptr, "FetchJsonResponseDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::_Script_Fetch_eventFetchJsonResponseDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::_Script_Fetch_eventFetchJsonResponseDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFetchJsonResponseDelegate_DelegateWrapper(const FScriptDelegate& FetchJsonResponseDelegate, USimpleJsonValue* JsonValue, UFetchResponse* Response)
{
	struct _Script_Fetch_eventFetchJsonResponseDelegate_Parms
	{
		USimpleJsonValue* JsonValue;
		UFetchResponse* Response;
	};
	_Script_Fetch_eventFetchJsonResponseDelegate_Parms Parms;
	Parms.JsonValue=JsonValue;
	Parms.Response=Response;
	FetchJsonResponseDelegate.ProcessDelegate<UObject>(&Parms);
}
	void UIFetch::StaticRegisterNativesUIFetch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIFetch);
	UClass* Z_Construct_UClass_UIFetch_NoRegister()
	{
		return UIFetch::StaticClass();
	}
	struct Z_Construct_UClass_UIFetch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIFetch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIFetch_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFetch_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "IFetch.h" },
		{ "ModuleRelativePath", "Public/IFetch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIFetch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIFetch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIFetch_Statics::ClassParams = {
		&UIFetch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIFetch_Statics::Class_MetaDataParams), Z_Construct_UClass_UIFetch_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIFetch()
	{
		if (!Z_Registration_Info_UClass_UIFetch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIFetch.OuterSingleton, Z_Construct_UClass_UIFetch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIFetch.OuterSingleton;
	}
	template<> FETCH_API UClass* StaticClass<UIFetch>()
	{
		return UIFetch::StaticClass();
	}
	UIFetch::UIFetch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIFetch);
	UIFetch::~UIFetch() {}
	struct Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIFetch, UIFetch::StaticClass, TEXT("UIFetch"), &Z_Registration_Info_UClass_UIFetch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIFetch), 1453855868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_869019839(TEXT("/Script/Fetch"),
		Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
