// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/SimpleJson.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleJson() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FETCH_API UClass* Z_Construct_UClass_USimpleJson();
	FETCH_API UClass* Z_Construct_UClass_USimpleJson_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Fetch();
// End Cross Module References
	DEFINE_FUNCTION(USimpleJson::execMakeJsonNullSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonNullSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonNull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonNull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonStringSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonStringSync(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonBoolSync)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonBoolSync(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonBool)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonBool(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonNumberSync)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonNumberSync(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonNumber)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonNumber(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJsonSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJsonSync(Z_Param_InputJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJson::execMakeJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=USimpleJson::MakeJson(Z_Param_InputJson);
		P_NATIVE_END;
	}
	void USimpleJson::StaticRegisterNativesUSimpleJson()
	{
		UClass* Class = USimpleJson::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeJson", &USimpleJson::execMakeJson },
			{ "MakeJsonBool", &USimpleJson::execMakeJsonBool },
			{ "MakeJsonBoolSync", &USimpleJson::execMakeJsonBoolSync },
			{ "MakeJsonNull", &USimpleJson::execMakeJsonNull },
			{ "MakeJsonNullSync", &USimpleJson::execMakeJsonNullSync },
			{ "MakeJsonNumber", &USimpleJson::execMakeJsonNumber },
			{ "MakeJsonNumberSync", &USimpleJson::execMakeJsonNumberSync },
			{ "MakeJsonString", &USimpleJson::execMakeJsonString },
			{ "MakeJsonStringSync", &USimpleJson::execMakeJsonStringSync },
			{ "MakeJsonSync", &USimpleJson::execMakeJsonSync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJson_Statics
	{
		struct SimpleJson_eventMakeJson_Parms
		{
			FString InputJson;
			USimpleJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputJson;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJson_MakeJson_Statics::NewProp_InputJson = { "InputJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJson_Parms, InputJson), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJson_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJson_Statics::NewProp_InputJson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJson", nullptr, nullptr, Z_Construct_UFunction_USimpleJson_MakeJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJson_MakeJson_Statics::SimpleJson_eventMakeJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJson_MakeJson_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJson_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJson_MakeJson_Statics::SimpleJson_eventMakeJson_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics
	{
		struct SimpleJson_eventMakeJsonBool_Parms
		{
			bool Value;
			USimpleJsonValue* ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SimpleJson_eventMakeJsonBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJson_eventMakeJsonBool_Parms), &Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonBool_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonBool", nullptr, nullptr, Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::SimpleJson_eventMakeJsonBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::SimpleJson_eventMakeJsonBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics
	{
		struct SimpleJson_eventMakeJsonBoolSync_Parms
		{
			bool Value;
			USimpleJsonValue* ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SimpleJson_eventMakeJsonBoolSync_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJson_eventMakeJsonBoolSync_Parms), &Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonBoolSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonBoolSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::SimpleJson_eventMakeJsonBoolSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::SimpleJson_eventMakeJsonBoolSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics
	{
		struct SimpleJson_eventMakeJsonNull_Parms
		{
			USimpleJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNull_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonNull", nullptr, nullptr, Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::SimpleJson_eventMakeJsonNull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::SimpleJson_eventMakeJsonNull_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics
	{
		struct SimpleJson_eventMakeJsonNullSync_Parms
		{
			USimpleJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNullSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonNullSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::SimpleJson_eventMakeJsonNullSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::SimpleJson_eventMakeJsonNullSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonNullSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonNullSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics
	{
		struct SimpleJson_eventMakeJsonNumber_Parms
		{
			float Number;
			USimpleJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNumber_Parms, Number), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNumber_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonNumber", nullptr, nullptr, Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::SimpleJson_eventMakeJsonNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::SimpleJson_eventMakeJsonNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics
	{
		struct SimpleJson_eventMakeJsonNumberSync_Parms
		{
			float Number;
			USimpleJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNumberSync_Parms, Number), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonNumberSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonNumberSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::SimpleJson_eventMakeJsonNumberSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::SimpleJson_eventMakeJsonNumberSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics
	{
		struct SimpleJson_eventMakeJsonString_Parms
		{
			FString Value;
			USimpleJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonString_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonString_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonString", nullptr, nullptr, Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::SimpleJson_eventMakeJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::SimpleJson_eventMakeJsonString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics
	{
		struct SimpleJson_eventMakeJsonStringSync_Parms
		{
			FString Value;
			USimpleJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonStringSync_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonStringSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonStringSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::SimpleJson_eventMakeJsonStringSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::SimpleJson_eventMakeJsonStringSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonStringSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonStringSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics
	{
		struct SimpleJson_eventMakeJsonSync_Parms
		{
			FString InputJson;
			USimpleJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputJson;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::NewProp_InputJson = { "InputJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonSync_Parms, InputJson), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJson_eventMakeJsonSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::NewProp_InputJson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJson" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJson, nullptr, "MakeJsonSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::SimpleJson_eventMakeJsonSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::SimpleJson_eventMakeJsonSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJson_MakeJsonSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJson_MakeJsonSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleJson);
	UClass* Z_Construct_UClass_USimpleJson_NoRegister()
	{
		return USimpleJson::StaticClass();
	}
	struct Z_Construct_UClass_USimpleJson_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleJson_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleJson_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleJson_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleJson_MakeJson, "MakeJson" }, // 3721014310
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonBool, "MakeJsonBool" }, // 1326652236
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonBoolSync, "MakeJsonBoolSync" }, // 839160961
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonNull, "MakeJsonNull" }, // 1729798342
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonNullSync, "MakeJsonNullSync" }, // 247838069
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonNumber, "MakeJsonNumber" }, // 3395764050
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonNumberSync, "MakeJsonNumberSync" }, // 85257010
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonString, "MakeJsonString" }, // 3133734609
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonStringSync, "MakeJsonStringSync" }, // 1679476552
		{ &Z_Construct_UFunction_USimpleJson_MakeJsonSync, "MakeJsonSync" }, // 657526983
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleJson_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleJson_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SimpleJson.h" },
		{ "ModuleRelativePath", "Public/SimpleJson.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleJson_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleJson>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleJson_Statics::ClassParams = {
		&USimpleJson::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleJson_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleJson_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleJson()
	{
		if (!Z_Registration_Info_UClass_USimpleJson.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleJson.OuterSingleton, Z_Construct_UClass_USimpleJson_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleJson.OuterSingleton;
	}
	template<> FETCH_API UClass* StaticClass<USimpleJson>()
	{
		return USimpleJson::StaticClass();
	}
	USimpleJson::USimpleJson(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleJson);
	USimpleJson::~USimpleJson() {}
	struct Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleJson, USimpleJson::StaticClass, TEXT("USimpleJson"), &Z_Registration_Info_UClass_USimpleJson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleJson), 463285689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_2296938595(TEXT("/Script/Fetch"),
		Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_SimpleJson_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
