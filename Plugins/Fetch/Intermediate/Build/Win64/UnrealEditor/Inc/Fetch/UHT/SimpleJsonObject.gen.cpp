// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/SimpleJsonObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleJsonObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonObject();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonObject_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Fetch();
// End Cross Module References
	DEFINE_FUNCTION(USimpleJsonObject::execIsValidObjectSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidObjectSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsValidObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execAsValueSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=P_THIS->AsValueSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execAsValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonValue**)Z_Param__Result=P_THIS->AsValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execStringifySync)
	{
		P_GET_UBOOL(Z_Param_pretty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->StringifySync(Z_Param_pretty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execStringify)
	{
		P_GET_UBOOL(Z_Param_pretty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Stringify(Z_Param_pretty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetArraySync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_TARRAY(USimpleJsonValue*,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetArraySync(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_TARRAY(USimpleJsonValue*,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetArray(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetObjectSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_OBJECT(USimpleJsonObject,Z_Param_JsonObjet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetObjectSync(Z_Param_Field,Z_Param_JsonObjet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_OBJECT(USimpleJsonObject,Z_Param_JsonObjet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetObject(Z_Param_Field,Z_Param_JsonObjet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetBoolSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetBoolSync(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetBool(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetStringSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetStringSync(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetString(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetNumberSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetNumberSync(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execSetNumber)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->SetNumber(Z_Param_Field,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execHasKeySync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasKeySync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execHasKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasKey(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsEmptySync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmptySync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsEmpty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsNoneSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNoneSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsNone)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNone(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsNullSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNullSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execIsNull)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNull(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetArraySync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USimpleJsonValue*>*)Z_Param__Result=P_THIS->GetArraySync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USimpleJsonValue*>*)Z_Param__Result=P_THIS->GetArray(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetBoolSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetStringSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetNumberSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNumberSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetNumber)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNumber(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetObjectSync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->GetObjectSync(Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonObject::execGetObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->GetObject(Z_Param_Field);
		P_NATIVE_END;
	}
	void USimpleJsonObject::StaticRegisterNativesUSimpleJsonObject()
	{
		UClass* Class = USimpleJsonObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsValue", &USimpleJsonObject::execAsValue },
			{ "AsValueSync", &USimpleJsonObject::execAsValueSync },
			{ "GetArray", &USimpleJsonObject::execGetArray },
			{ "GetArraySync", &USimpleJsonObject::execGetArraySync },
			{ "GetBool", &USimpleJsonObject::execGetBool },
			{ "GetBoolSync", &USimpleJsonObject::execGetBoolSync },
			{ "GetNumber", &USimpleJsonObject::execGetNumber },
			{ "GetNumberSync", &USimpleJsonObject::execGetNumberSync },
			{ "GetObject", &USimpleJsonObject::execGetObject },
			{ "GetObjectSync", &USimpleJsonObject::execGetObjectSync },
			{ "GetString", &USimpleJsonObject::execGetString },
			{ "GetStringSync", &USimpleJsonObject::execGetStringSync },
			{ "HasKey", &USimpleJsonObject::execHasKey },
			{ "HasKeySync", &USimpleJsonObject::execHasKeySync },
			{ "IsEmpty", &USimpleJsonObject::execIsEmpty },
			{ "IsEmptySync", &USimpleJsonObject::execIsEmptySync },
			{ "IsNone", &USimpleJsonObject::execIsNone },
			{ "IsNoneSync", &USimpleJsonObject::execIsNoneSync },
			{ "IsNull", &USimpleJsonObject::execIsNull },
			{ "IsNullSync", &USimpleJsonObject::execIsNullSync },
			{ "IsValidObject", &USimpleJsonObject::execIsValidObject },
			{ "IsValidObjectSync", &USimpleJsonObject::execIsValidObjectSync },
			{ "SetArray", &USimpleJsonObject::execSetArray },
			{ "SetArraySync", &USimpleJsonObject::execSetArraySync },
			{ "SetBool", &USimpleJsonObject::execSetBool },
			{ "SetBoolSync", &USimpleJsonObject::execSetBoolSync },
			{ "SetNumber", &USimpleJsonObject::execSetNumber },
			{ "SetNumberSync", &USimpleJsonObject::execSetNumberSync },
			{ "SetObject", &USimpleJsonObject::execSetObject },
			{ "SetObjectSync", &USimpleJsonObject::execSetObjectSync },
			{ "SetString", &USimpleJsonObject::execSetString },
			{ "SetStringSync", &USimpleJsonObject::execSetStringSync },
			{ "Stringify", &USimpleJsonObject::execStringify },
			{ "StringifySync", &USimpleJsonObject::execStringifySync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics
	{
		struct SimpleJsonObject_eventAsValue_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventAsValue_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "AsValue", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::SimpleJsonObject_eventAsValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::SimpleJsonObject_eventAsValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_AsValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_AsValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics
	{
		struct SimpleJsonObject_eventAsValueSync_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventAsValueSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "AsValueSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::SimpleJsonObject_eventAsValueSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::SimpleJsonObject_eventAsValueSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_AsValueSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_AsValueSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics
	{
		struct SimpleJsonObject_eventGetArray_Parms
		{
			FString Field;
			TArray<USimpleJsonValue*> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetArray_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetArray", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::SimpleJsonObject_eventGetArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::SimpleJsonObject_eventGetArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics
	{
		struct SimpleJsonObject_eventGetArraySync_Parms
		{
			FString Field;
			TArray<USimpleJsonValue*> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetArraySync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetArraySync_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetArraySync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::SimpleJsonObject_eventGetArraySync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::SimpleJsonObject_eventGetArraySync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetArraySync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetArraySync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics
	{
		struct SimpleJsonObject_eventGetBool_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetBool_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventGetBool_Parms), &Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetBool", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::SimpleJsonObject_eventGetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::SimpleJsonObject_eventGetBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics
	{
		struct SimpleJsonObject_eventGetBoolSync_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetBoolSync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventGetBoolSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventGetBoolSync_Parms), &Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetBoolSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::SimpleJsonObject_eventGetBoolSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::SimpleJsonObject_eventGetBoolSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetBoolSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetBoolSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics
	{
		struct SimpleJsonObject_eventGetNumber_Parms
		{
			FString Field;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetNumber_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetNumber", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::SimpleJsonObject_eventGetNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::SimpleJsonObject_eventGetNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics
	{
		struct SimpleJsonObject_eventGetNumberSync_Parms
		{
			FString Field;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetNumberSync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetNumberSync_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetNumberSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::SimpleJsonObject_eventGetNumberSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::SimpleJsonObject_eventGetNumberSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetNumberSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetNumberSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics
	{
		struct SimpleJsonObject_eventGetObject_Parms
		{
			FString Field;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetObject_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetObject", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::SimpleJsonObject_eventGetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::SimpleJsonObject_eventGetObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics
	{
		struct SimpleJsonObject_eventGetObjectSync_Parms
		{
			FString Field;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetObjectSync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetObjectSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetObjectSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::SimpleJsonObject_eventGetObjectSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::SimpleJsonObject_eventGetObjectSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetObjectSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetObjectSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetString_Statics
	{
		struct SimpleJsonObject_eventGetString_Parms
		{
			FString Field;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetString_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::SimpleJsonObject_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::SimpleJsonObject_eventGetString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics
	{
		struct SimpleJsonObject_eventGetStringSync_Parms
		{
			FString Field;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetStringSync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventGetStringSync_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "GetStringSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::SimpleJsonObject_eventGetStringSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::SimpleJsonObject_eventGetStringSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_GetStringSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_GetStringSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics
	{
		struct SimpleJsonObject_eventHasKey_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventHasKey_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventHasKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventHasKey_Parms), &Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "HasKey", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::SimpleJsonObject_eventHasKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::SimpleJsonObject_eventHasKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_HasKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_HasKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics
	{
		struct SimpleJsonObject_eventHasKeySync_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventHasKeySync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventHasKeySync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventHasKeySync_Parms), &Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "HasKeySync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::SimpleJsonObject_eventHasKeySync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::SimpleJsonObject_eventHasKeySync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_HasKeySync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_HasKeySync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics
	{
		struct SimpleJsonObject_eventIsEmpty_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsEmpty_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsEmpty_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsEmpty", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::SimpleJsonObject_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::SimpleJsonObject_eventIsEmpty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics
	{
		struct SimpleJsonObject_eventIsEmptySync_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsEmptySync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsEmptySync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsEmptySync_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsEmptySync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::SimpleJsonObject_eventIsEmptySync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::SimpleJsonObject_eventIsEmptySync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsEmptySync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsEmptySync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics
	{
		struct SimpleJsonObject_eventIsNone_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsNone_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsNone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsNone_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsNone", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::SimpleJsonObject_eventIsNone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::SimpleJsonObject_eventIsNone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsNone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsNone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics
	{
		struct SimpleJsonObject_eventIsNoneSync_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsNoneSync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsNoneSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsNoneSync_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsNoneSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::SimpleJsonObject_eventIsNoneSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::SimpleJsonObject_eventIsNoneSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsNoneSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsNoneSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics
	{
		struct SimpleJsonObject_eventIsNull_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsNull_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsNull_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsNull", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::SimpleJsonObject_eventIsNull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::SimpleJsonObject_eventIsNull_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics
	{
		struct SimpleJsonObject_eventIsNullSync_Parms
		{
			FString Field;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventIsNullSync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsNullSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsNullSync_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsNullSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::SimpleJsonObject_eventIsNullSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::SimpleJsonObject_eventIsNullSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsNullSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsNullSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics
	{
		struct SimpleJsonObject_eventIsValidObject_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsValidObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsValidObject_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsValidObject", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::SimpleJsonObject_eventIsValidObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::SimpleJsonObject_eventIsValidObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsValidObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsValidObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics
	{
		struct SimpleJsonObject_eventIsValidObjectSync_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventIsValidObjectSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventIsValidObjectSync_Parms), &Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "IsValidObjectSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::SimpleJsonObject_eventIsValidObjectSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::SimpleJsonObject_eventIsValidObjectSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics
	{
		struct SimpleJsonObject_eventSetArray_Parms
		{
			FString Field;
			TArray<USimpleJsonValue*> Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArray_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArray_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetArray", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::SimpleJsonObject_eventSetArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::SimpleJsonObject_eventSetArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics
	{
		struct SimpleJsonObject_eventSetArraySync_Parms
		{
			FString Field;
			TArray<USimpleJsonValue*> Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArraySync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArraySync_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetArraySync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetArraySync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::SimpleJsonObject_eventSetArraySync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::SimpleJsonObject_eventSetArraySync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetArraySync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetArraySync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics
	{
		struct SimpleJsonObject_eventSetBool_Parms
		{
			FString Field;
			bool Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetBool_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventSetBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventSetBool_Parms), &Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetBool_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetBool", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::SimpleJsonObject_eventSetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::SimpleJsonObject_eventSetBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics
	{
		struct SimpleJsonObject_eventSetBoolSync_Parms
		{
			FString Field;
			bool Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetBoolSync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventSetBoolSync_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventSetBoolSync_Parms), &Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetBoolSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetBoolSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::SimpleJsonObject_eventSetBoolSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::SimpleJsonObject_eventSetBoolSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetBoolSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetBoolSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics
	{
		struct SimpleJsonObject_eventSetNumber_Parms
		{
			FString Field;
			float Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumber_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumber_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumber_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetNumber", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::SimpleJsonObject_eventSetNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::SimpleJsonObject_eventSetNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics
	{
		struct SimpleJsonObject_eventSetNumberSync_Parms
		{
			FString Field;
			float Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumberSync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumberSync_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetNumberSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetNumberSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::SimpleJsonObject_eventSetNumberSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::SimpleJsonObject_eventSetNumberSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetNumberSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetNumberSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics
	{
		struct SimpleJsonObject_eventSetObject_Parms
		{
			FString Field;
			USimpleJsonObject* JsonObjet;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObjet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObject_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_JsonObjet = { "JsonObjet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObject_Parms, JsonObjet), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObject_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_JsonObjet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetObject", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::SimpleJsonObject_eventSetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::SimpleJsonObject_eventSetObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics
	{
		struct SimpleJsonObject_eventSetObjectSync_Parms
		{
			FString Field;
			USimpleJsonObject* JsonObjet;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObjet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObjectSync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_JsonObjet = { "JsonObjet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObjectSync_Parms, JsonObjet), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetObjectSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_JsonObjet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetObjectSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::SimpleJsonObject_eventSetObjectSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::SimpleJsonObject_eventSetObjectSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetObjectSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetObjectSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetString_Statics
	{
		struct SimpleJsonObject_eventSetString_Parms
		{
			FString Field;
			FString Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetString_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetString_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetString_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetString", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::SimpleJsonObject_eventSetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::SimpleJsonObject_eventSetString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics
	{
		struct SimpleJsonObject_eventSetStringSync_Parms
		{
			FString Field;
			FString Value;
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetStringSync_Parms, Field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetStringSync_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventSetStringSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "SetStringSync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::SimpleJsonObject_eventSetStringSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::SimpleJsonObject_eventSetStringSync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_SetStringSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_SetStringSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics
	{
		struct SimpleJsonObject_eventStringify_Parms
		{
			bool pretty;
			FString ReturnValue;
		};
		static void NewProp_pretty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_pretty;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_pretty_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventStringify_Parms*)Obj)->pretty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_pretty = { "pretty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventStringify_Parms), &Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_pretty_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventStringify_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_pretty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "CPP_Default_pretty", "false" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "Stringify", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::SimpleJsonObject_eventStringify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::SimpleJsonObject_eventStringify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_Stringify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_Stringify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics
	{
		struct SimpleJsonObject_eventStringifySync_Parms
		{
			bool pretty;
			FString ReturnValue;
		};
		static void NewProp_pretty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_pretty;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_pretty_SetBit(void* Obj)
	{
		((SimpleJsonObject_eventStringifySync_Parms*)Obj)->pretty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_pretty = { "pretty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleJsonObject_eventStringifySync_Parms), &Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_pretty_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleJsonObject_eventStringifySync_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_pretty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonObject" },
		{ "CPP_Default_pretty", "false" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonObject, nullptr, "StringifySync", nullptr, nullptr, Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::SimpleJsonObject_eventStringifySync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::SimpleJsonObject_eventStringifySync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleJsonObject_StringifySync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonObject_StringifySync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleJsonObject);
	UClass* Z_Construct_UClass_USimpleJsonObject_NoRegister()
	{
		return USimpleJsonObject::StaticClass();
	}
	struct Z_Construct_UClass_USimpleJsonObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleJsonObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleJsonObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleJsonObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleJsonObject_AsValue, "AsValue" }, // 2060822291
		{ &Z_Construct_UFunction_USimpleJsonObject_AsValueSync, "AsValueSync" }, // 3455440725
		{ &Z_Construct_UFunction_USimpleJsonObject_GetArray, "GetArray" }, // 2018308580
		{ &Z_Construct_UFunction_USimpleJsonObject_GetArraySync, "GetArraySync" }, // 414401953
		{ &Z_Construct_UFunction_USimpleJsonObject_GetBool, "GetBool" }, // 1036359609
		{ &Z_Construct_UFunction_USimpleJsonObject_GetBoolSync, "GetBoolSync" }, // 3300246615
		{ &Z_Construct_UFunction_USimpleJsonObject_GetNumber, "GetNumber" }, // 1231769282
		{ &Z_Construct_UFunction_USimpleJsonObject_GetNumberSync, "GetNumberSync" }, // 1089584518
		{ &Z_Construct_UFunction_USimpleJsonObject_GetObject, "GetObject" }, // 1636918470
		{ &Z_Construct_UFunction_USimpleJsonObject_GetObjectSync, "GetObjectSync" }, // 1939868898
		{ &Z_Construct_UFunction_USimpleJsonObject_GetString, "GetString" }, // 2790437549
		{ &Z_Construct_UFunction_USimpleJsonObject_GetStringSync, "GetStringSync" }, // 4062414252
		{ &Z_Construct_UFunction_USimpleJsonObject_HasKey, "HasKey" }, // 4128170938
		{ &Z_Construct_UFunction_USimpleJsonObject_HasKeySync, "HasKeySync" }, // 1139975909
		{ &Z_Construct_UFunction_USimpleJsonObject_IsEmpty, "IsEmpty" }, // 1091120047
		{ &Z_Construct_UFunction_USimpleJsonObject_IsEmptySync, "IsEmptySync" }, // 145603979
		{ &Z_Construct_UFunction_USimpleJsonObject_IsNone, "IsNone" }, // 147134836
		{ &Z_Construct_UFunction_USimpleJsonObject_IsNoneSync, "IsNoneSync" }, // 2303711599
		{ &Z_Construct_UFunction_USimpleJsonObject_IsNull, "IsNull" }, // 1136215421
		{ &Z_Construct_UFunction_USimpleJsonObject_IsNullSync, "IsNullSync" }, // 2030261577
		{ &Z_Construct_UFunction_USimpleJsonObject_IsValidObject, "IsValidObject" }, // 2976141736
		{ &Z_Construct_UFunction_USimpleJsonObject_IsValidObjectSync, "IsValidObjectSync" }, // 4096097672
		{ &Z_Construct_UFunction_USimpleJsonObject_SetArray, "SetArray" }, // 1317874799
		{ &Z_Construct_UFunction_USimpleJsonObject_SetArraySync, "SetArraySync" }, // 3185519382
		{ &Z_Construct_UFunction_USimpleJsonObject_SetBool, "SetBool" }, // 1821392729
		{ &Z_Construct_UFunction_USimpleJsonObject_SetBoolSync, "SetBoolSync" }, // 495803493
		{ &Z_Construct_UFunction_USimpleJsonObject_SetNumber, "SetNumber" }, // 4193212465
		{ &Z_Construct_UFunction_USimpleJsonObject_SetNumberSync, "SetNumberSync" }, // 522681138
		{ &Z_Construct_UFunction_USimpleJsonObject_SetObject, "SetObject" }, // 1411034352
		{ &Z_Construct_UFunction_USimpleJsonObject_SetObjectSync, "SetObjectSync" }, // 2744332393
		{ &Z_Construct_UFunction_USimpleJsonObject_SetString, "SetString" }, // 1727151407
		{ &Z_Construct_UFunction_USimpleJsonObject_SetStringSync, "SetStringSync" }, // 1011096897
		{ &Z_Construct_UFunction_USimpleJsonObject_Stringify, "Stringify" }, // 396410779
		{ &Z_Construct_UFunction_USimpleJsonObject_StringifySync, "StringifySync" }, // 1807735329
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleJsonObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleJsonObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "SimpleJsonObject.h" },
		{ "ModuleRelativePath", "Public/SimpleJsonObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleJsonObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleJsonObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleJsonObject_Statics::ClassParams = {
		&USimpleJsonObject::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleJsonObject_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleJsonObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleJsonObject()
	{
		if (!Z_Registration_Info_UClass_USimpleJsonObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleJsonObject.OuterSingleton, Z_Construct_UClass_USimpleJsonObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleJsonObject.OuterSingleton;
	}
	template<> FETCH_API UClass* StaticClass<USimpleJsonObject>()
	{
		return USimpleJsonObject::StaticClass();
	}
	USimpleJsonObject::USimpleJsonObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleJsonObject);
	USimpleJsonObject::~USimpleJsonObject() {}
	struct Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleJsonObject, USimpleJsonObject::StaticClass, TEXT("USimpleJsonObject"), &Z_Registration_Info_UClass_USimpleJsonObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleJsonObject), 423595149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_3418133772(TEXT("/Script/Fetch"),
		Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_SimpleJsonObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
