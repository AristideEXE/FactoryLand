// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FetchAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFetchRequest;
struct FFetchHeader;
struct FFetchJsonOptions;
struct FFetchOptions;
#ifdef FETCH_FetchAPI_generated_h
#error "FetchAPI.generated.h already included, missing '#pragma once' in FetchAPI.h"
#endif
#define FETCH_FetchAPI_generated_h

#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_SPARSE_DATA
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeOAuthHeader); \
	DECLARE_FUNCTION(execMakeBasicAuthHeader); \
	DECLARE_FUNCTION(execFetchJson); \
	DECLARE_FUNCTION(execFetch);


#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_ACCESSORS
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFetchAPI(); \
	friend struct Z_Construct_UClass_UFetchAPI_Statics; \
public: \
	DECLARE_CLASS(UFetchAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UFetchAPI)


#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchAPI(UFetchAPI&&); \
	NO_API UFetchAPI(const UFetchAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFetchAPI) \
	NO_API virtual ~UFetchAPI();


#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_15_PROLOG
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_SPARSE_DATA \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_ACCESSORS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FETCH_API UClass* StaticClass<class UFetchAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_FetchAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
