// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IFetch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFetchResponse;
class USimpleJsonValue;
#ifdef FETCH_IFetch_generated_h
#error "IFetch.generated.h already included, missing '#pragma once' in IFetch.h"
#endif
#define FETCH_IFetch_generated_h

#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_17_DELEGATE \
FETCH_API void FFetchResponseDelegate_DelegateWrapper(const FScriptDelegate& FetchResponseDelegate, int32 StatusCode, const FString& Content);


#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_18_DELEGATE \
FETCH_API void FFetchErrorDelegate_DelegateWrapper(const FScriptDelegate& FetchErrorDelegate, const FString& ErrorMessage);


#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_19_DELEGATE \
FETCH_API void FFetchTextResponseDelegate_DelegateWrapper(const FScriptDelegate& FetchTextResponseDelegate, const FString& TextContent, UFetchResponse* Response);


#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_20_DELEGATE \
FETCH_API void FFetchJsonResponseDelegate_DelegateWrapper(const FScriptDelegate& FetchJsonResponseDelegate, USimpleJsonValue* JsonValue, UFetchResponse* Response);


#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_SPARSE_DATA
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_ACCESSORS
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIFetch(); \
	friend struct Z_Construct_UClass_UIFetch_Statics; \
public: \
	DECLARE_CLASS(UIFetch, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Fetch"), NO_API) \
	DECLARE_SERIALIZER(UIFetch)


#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIFetch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIFetch(UIFetch&&); \
	NO_API UIFetch(const UIFetch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIFetch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFetch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFetch) \
	NO_API virtual ~UIFetch();


#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_25_PROLOG
#define FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_SPARSE_DATA \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_ACCESSORS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FETCH_API UClass* StaticClass<class UIFetch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_arist_OneDrive_Projets_FactoryLand_Plugins_Fetch_Source_Fetch_Public_IFetch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
