// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FETCH_Types_generated_h
#error "Types.generated.h already included, missing '#pragma once' in Types.h"
#endif
#define FETCH_Types_generated_h

#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFetchHeader_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FETCH_API UScriptStruct* StaticStruct<struct FFetchHeader>();

#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFetchOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FETCH_API UScriptStruct* StaticStruct<struct FFetchOptions>();

#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFetchJsonOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FETCH_API UScriptStruct* StaticStruct<struct FFetchJsonOptions>();

#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_SPARSE_DATA
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_ACCESSORS
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypes(); \
	friend struct Z_Construct_UClass_UTypes_Statics; \
public: \
	DECLARE_CLASS(UTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UTypes)


#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypes(UTypes&&); \
	NO_API UTypes(const UTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypes) \
	NO_API virtual ~UTypes();


#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_69_PROLOG
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_SPARSE_DATA \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_ACCESSORS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_INCLASS_NO_PURE_DECLS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FETCH_API UClass* StaticClass<class UTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_Types_h


#define FOREACH_ENUM_FFETCHOPTIONSMETHOD(op) \
	op(GET) \
	op(POST) \
	op(PUT) \
	op(DELETE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
