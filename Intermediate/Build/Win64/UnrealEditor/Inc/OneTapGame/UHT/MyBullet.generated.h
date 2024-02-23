// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyBullet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONETAPGAME_MyBullet_generated_h
#error "MyBullet.generated.h already included, missing '#pragma once' in MyBullet.h"
#endif
#define ONETAPGAME_MyBullet_generated_h

#define FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_SPARSE_DATA
#define FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDespawnBullet);


#define FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_ACCESSORS
#define FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyBullet(); \
	friend struct Z_Construct_UClass_AMyBullet_Statics; \
public: \
	DECLARE_CLASS(AMyBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OneTapGame"), NO_API) \
	DECLARE_SERIALIZER(AMyBullet)


#define FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyBullet(AMyBullet&&); \
	NO_API AMyBullet(const AMyBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyBullet) \
	NO_API virtual ~AMyBullet();


#define FID_OneTapGame_Source_OneTapGame_MyBullet_h_7_PROLOG
#define FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_SPARSE_DATA \
	FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_ACCESSORS \
	FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_INCLASS_NO_PURE_DECLS \
	FID_OneTapGame_Source_OneTapGame_MyBullet_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONETAPGAME_API UClass* StaticClass<class AMyBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OneTapGame_Source_OneTapGame_MyBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
