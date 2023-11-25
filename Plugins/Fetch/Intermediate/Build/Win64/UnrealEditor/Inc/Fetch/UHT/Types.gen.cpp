// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonValue_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_UTypes();
	FETCH_API UClass* Z_Construct_UClass_UTypes_NoRegister();
	FETCH_API UEnum* Z_Construct_UEnum_Fetch_FFetchOptionsMethod();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchHeader();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchJsonOptions();
	FETCH_API UScriptStruct* Z_Construct_UScriptStruct_FFetchOptions();
	UPackage* Z_Construct_UPackage__Script_Fetch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FFetchOptionsMethod;
	static UEnum* FFetchOptionsMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FFetchOptionsMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FFetchOptionsMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Fetch_FFetchOptionsMethod, (UObject*)Z_Construct_UPackage__Script_Fetch(), TEXT("FFetchOptionsMethod"));
		}
		return Z_Registration_Info_UEnum_FFetchOptionsMethod.OuterSingleton;
	}
	template<> FETCH_API UEnum* StaticEnum<FFetchOptionsMethod>()
	{
		return FFetchOptionsMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Fetch_FFetchOptionsMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Fetch_FFetchOptionsMethod_Statics::Enumerators[] = {
		{ "GET", (int64)GET },
		{ "POST", (int64)POST },
		{ "PUT", (int64)PUT },
		{ "DELETE", (int64)DELETE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Fetch_FFetchOptionsMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DELETE.Name", "DELETE" },
		{ "GET.Name", "GET" },
		{ "ModuleRelativePath", "Public/Types.h" },
		{ "POST.Name", "POST" },
		{ "PUT.Name", "PUT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Fetch_FFetchOptionsMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Fetch,
		nullptr,
		"FFetchOptionsMethod",
		"FFetchOptionsMethod",
		Z_Construct_UEnum_Fetch_FFetchOptionsMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Fetch_FFetchOptionsMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Fetch_FFetchOptionsMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Fetch_FFetchOptionsMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Fetch_FFetchOptionsMethod()
	{
		if (!Z_Registration_Info_UEnum_FFetchOptionsMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FFetchOptionsMethod.InnerSingleton, Z_Construct_UEnum_Fetch_FFetchOptionsMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FFetchOptionsMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FetchHeader;
class UScriptStruct* FFetchHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FetchHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FetchHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFetchHeader, (UObject*)Z_Construct_UPackage__Script_Fetch(), TEXT("FetchHeader"));
	}
	return Z_Registration_Info_UScriptStruct_FetchHeader.OuterSingleton;
}
template<> FETCH_API UScriptStruct* StaticStruct<FFetchHeader>()
{
	return FFetchHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFetchHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFetchHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFetchHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Fetch | Header" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFetchHeader, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Fetch | Header" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFetchHeader, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFetchHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchHeader_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFetchHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
		nullptr,
		&NewStructOps,
		"FetchHeader",
		Z_Construct_UScriptStruct_FFetchHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchHeader_Statics::PropPointers),
		sizeof(FFetchHeader),
		alignof(FFetchHeader),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFetchHeader_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchHeader_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFetchHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_FetchHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FetchHeader.InnerSingleton, Z_Construct_UScriptStruct_FFetchHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FetchHeader.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FetchOptions;
class UScriptStruct* FFetchOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FetchOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FetchOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFetchOptions, (UObject*)Z_Construct_UPackage__Script_Fetch(), TEXT("FetchOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FetchOptions.OuterSingleton;
}
template<> FETCH_API UScriptStruct* StaticStruct<FFetchOptions>()
{
	return FFetchOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFetchOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Body;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Headers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Headers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFetchOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFetchOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Fetch | Options" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFetchOptions, Method), Z_Construct_UEnum_Fetch_FFetchOptionsMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Method_MetaData), Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Method_MetaData) }; // 3670443058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Fetch | Options" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFetchOptions, Body), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Body_MetaData), Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Body_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFetchHeader, METADATA_PARAMS(0, nullptr) }; // 147067448
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers_MetaData[] = {
		{ "Category", "Fetch | Options" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFetchOptions, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers_MetaData), Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers_MetaData) }; // 147067448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFetchOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchOptions_Statics::NewProp_Headers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFetchOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
		nullptr,
		&NewStructOps,
		"FetchOptions",
		Z_Construct_UScriptStruct_FFetchOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchOptions_Statics::PropPointers),
		sizeof(FFetchOptions),
		alignof(FFetchOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFetchOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFetchOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_FetchOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FetchOptions.InnerSingleton, Z_Construct_UScriptStruct_FFetchOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FetchOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FetchJsonOptions;
class UScriptStruct* FFetchJsonOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FetchJsonOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FetchJsonOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFetchJsonOptions, (UObject*)Z_Construct_UPackage__Script_Fetch(), TEXT("FetchJsonOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FetchJsonOptions.OuterSingleton;
}
template<> FETCH_API UScriptStruct* StaticStruct<FFetchJsonOptions>()
{
	return FFetchJsonOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFetchJsonOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Headers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Headers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFetchJsonOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Fetch | JSONOptions" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFetchJsonOptions, Method), Z_Construct_UEnum_Fetch_FFetchOptionsMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Method_MetaData), Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Method_MetaData) }; // 3670443058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Fetch | JSONOptions" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFetchJsonOptions, Body), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Body_MetaData), Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Body_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFetchHeader, METADATA_PARAMS(0, nullptr) }; // 147067448
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers_MetaData[] = {
		{ "Category", "Fetch | JSONOptions" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFetchJsonOptions, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers_MetaData), Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers_MetaData) }; // 147067448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewProp_Headers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
		nullptr,
		&NewStructOps,
		"FetchJsonOptions",
		Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::PropPointers),
		sizeof(FFetchJsonOptions),
		alignof(FFetchJsonOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFetchJsonOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_FetchJsonOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FetchJsonOptions.InnerSingleton, Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FetchJsonOptions.InnerSingleton;
	}
	void UTypes::StaticRegisterNativesUTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypes);
	UClass* Z_Construct_UClass_UTypes_NoRegister()
	{
		return UTypes::StaticClass();
	}
	struct Z_Construct_UClass_UTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypes_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Types.h" },
		{ "ModuleRelativePath", "Public/Types.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypes_Statics::ClassParams = {
		&UTypes::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypes()
	{
		if (!Z_Registration_Info_UClass_UTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypes.OuterSingleton, Z_Construct_UClass_UTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypes.OuterSingleton;
	}
	template<> FETCH_API UClass* StaticClass<UTypes>()
	{
		return UTypes::StaticClass();
	}
	UTypes::UTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypes);
	UTypes::~UTypes() {}
	struct Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_Statics::EnumInfo[] = {
		{ FFetchOptionsMethod_StaticEnum, TEXT("FFetchOptionsMethod"), &Z_Registration_Info_UEnum_FFetchOptionsMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3670443058U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_Statics::ScriptStructInfo[] = {
		{ FFetchHeader::StaticStruct, Z_Construct_UScriptStruct_FFetchHeader_Statics::NewStructOps, TEXT("FetchHeader"), &Z_Registration_Info_UScriptStruct_FetchHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFetchHeader), 147067448U) },
		{ FFetchOptions::StaticStruct, Z_Construct_UScriptStruct_FFetchOptions_Statics::NewStructOps, TEXT("FetchOptions"), &Z_Registration_Info_UScriptStruct_FetchOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFetchOptions), 2467393469U) },
		{ FFetchJsonOptions::StaticStruct, Z_Construct_UScriptStruct_FFetchJsonOptions_Statics::NewStructOps, TEXT("FetchJsonOptions"), &Z_Registration_Info_UScriptStruct_FetchJsonOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFetchJsonOptions), 2511189844U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypes, UTypes::StaticClass, TEXT("UTypes"), &Z_Registration_Info_UClass_UTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypes), 221230203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_81777704(TEXT("/Script/Fetch"),
		Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
