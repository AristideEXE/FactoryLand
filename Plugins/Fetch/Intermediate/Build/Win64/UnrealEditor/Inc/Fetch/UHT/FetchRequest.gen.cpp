// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/FetchRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchRequest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FETCH_API UClass* Z_Construct_UClass_UFetchRequest();
	FETCH_API UClass* Z_Construct_UClass_UFetchRequest_NoRegister();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature();
	FETCH_API UFunction* Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Fetch();
// End Cross Module References
	DEFINE_FUNCTION(UFetchRequest::execOnJson)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchRequest**)Z_Param__Result=P_THIS->OnJson(FFetchJsonResponseDelegate(Z_Param_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchRequest::execOnError)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchRequest**)Z_Param__Result=P_THIS->OnError(FFetchErrorDelegate(Z_Param_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchRequest::execOnText)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchRequest**)Z_Param__Result=P_THIS->OnText(FFetchTextResponseDelegate(Z_Param_Event));
		P_NATIVE_END;
	}
	void UFetchRequest::StaticRegisterNativesUFetchRequest()
	{
		UClass* Class = UFetchRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnError", &UFetchRequest::execOnError },
			{ "OnJson", &UFetchRequest::execOnJson },
			{ "OnText", &UFetchRequest::execOnText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchRequest_OnError_Statics
	{
		struct FetchRequest_eventOnError_Parms
		{
			FScriptDelegate Event;
			UFetchRequest* ReturnValue;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFetchRequest_OnError_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchRequest_eventOnError_Parms, Event), Z_Construct_UDelegateFunction_Fetch_FetchErrorDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2262054568
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchRequest_OnError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchRequest_eventOnError_Parms, ReturnValue), Z_Construct_UClass_UFetchRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchRequest_OnError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnError_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchRequest_OnError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Request" },
		{ "ModuleRelativePath", "Public/FetchRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchRequest_OnError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchRequest, nullptr, "OnError", nullptr, nullptr, Z_Construct_UFunction_UFetchRequest_OnError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchRequest_OnError_Statics::FetchRequest_eventOnError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchRequest_OnError_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnError_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchRequest_OnError_Statics::FetchRequest_eventOnError_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchRequest_OnError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchRequest_OnError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchRequest_OnJson_Statics
	{
		struct FetchRequest_eventOnJson_Parms
		{
			FScriptDelegate Event;
			UFetchRequest* ReturnValue;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFetchRequest_OnJson_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchRequest_eventOnJson_Parms, Event), Z_Construct_UDelegateFunction_Fetch_FetchJsonResponseDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2902248673
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchRequest_OnJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchRequest_eventOnJson_Parms, ReturnValue), Z_Construct_UClass_UFetchRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchRequest_OnJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnJson_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchRequest_OnJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Request" },
		{ "ModuleRelativePath", "Public/FetchRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchRequest_OnJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchRequest, nullptr, "OnJson", nullptr, nullptr, Z_Construct_UFunction_UFetchRequest_OnJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchRequest_OnJson_Statics::FetchRequest_eventOnJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchRequest_OnJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchRequest_OnJson_Statics::FetchRequest_eventOnJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchRequest_OnJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchRequest_OnJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchRequest_OnText_Statics
	{
		struct FetchRequest_eventOnText_Parms
		{
			FScriptDelegate Event;
			UFetchRequest* ReturnValue;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFetchRequest_OnText_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchRequest_eventOnText_Parms, Event), Z_Construct_UDelegateFunction_Fetch_FetchTextResponseDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3816984171
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchRequest_OnText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchRequest_eventOnText_Parms, ReturnValue), Z_Construct_UClass_UFetchRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchRequest_OnText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnText_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchRequest_OnText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchRequest_OnText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | Request" },
		{ "ModuleRelativePath", "Public/FetchRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchRequest_OnText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchRequest, nullptr, "OnText", nullptr, nullptr, Z_Construct_UFunction_UFetchRequest_OnText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchRequest_OnText_Statics::FetchRequest_eventOnText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchRequest_OnText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchRequest_OnText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchRequest_OnText_Statics::FetchRequest_eventOnText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchRequest_OnText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchRequest_OnText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFetchRequest);
	UClass* Z_Construct_UClass_UFetchRequest_NoRegister()
	{
		return UFetchRequest::StaticClass();
	}
	struct Z_Construct_UClass_UFetchRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchRequest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchRequest_OnError, "OnError" }, // 2284211421
		{ &Z_Construct_UFunction_UFetchRequest_OnJson, "OnJson" }, // 1038833895
		{ &Z_Construct_UFunction_UFetchRequest_OnText, "OnText" }, // 3685686904
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchRequest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "FetchRequest.h" },
		{ "ModuleRelativePath", "Public/FetchRequest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchRequest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFetchRequest_Statics::ClassParams = {
		&UFetchRequest::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchRequest_Statics::Class_MetaDataParams), Z_Construct_UClass_UFetchRequest_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFetchRequest()
	{
		if (!Z_Registration_Info_UClass_UFetchRequest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFetchRequest.OuterSingleton, Z_Construct_UClass_UFetchRequest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFetchRequest.OuterSingleton;
	}
	template<> FETCH_API UClass* StaticClass<UFetchRequest>()
	{
		return UFetchRequest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchRequest);
	UFetchRequest::~UFetchRequest() {}
	struct Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFetchRequest, UFetchRequest::StaticClass, TEXT("UFetchRequest"), &Z_Registration_Info_UClass_UFetchRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFetchRequest), 1529573152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_3947332037(TEXT("/Script/Fetch"),
		Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchRequest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
