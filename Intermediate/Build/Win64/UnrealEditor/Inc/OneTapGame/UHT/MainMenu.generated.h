// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONETAPGAME_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define ONETAPGAME_MainMenu_generated_h

#define FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_SPARSE_DATA
#define FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMap1Clicked); \
	DECLARE_FUNCTION(execOnPlayClicked);


#define FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_ACCESSORS
#define FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OneTapGame"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	NO_API virtual ~UMainMenu();


#define FID_OneTapGame_Source_OneTapGame_MainMenu_h_10_PROLOG
#define FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_SPARSE_DATA \
	FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_ACCESSORS \
	FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_INCLASS_NO_PURE_DECLS \
	FID_OneTapGame_Source_OneTapGame_MainMenu_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONETAPGAME_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OneTapGame_Source_OneTapGame_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
