// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneTapGame/MyGun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGun() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyBullet_NoRegister();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyGun();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyGun_NoRegister();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyItem();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OneTapGame();
// End Cross Module References
	void AMyGun::StaticRegisterNativesAMyGun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGun);
	UClass* Z_Construct_UClass_AMyGun_NoRegister()
	{
		return AMyGun::StaticClass();
	}
	struct Z_Construct_UClass_AMyGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GunSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BulletBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyItem,
		(UObject* (*)())Z_Construct_UPackage__Script_OneTapGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGun.h" },
		{ "ModuleRelativePath", "MyGun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGun_Statics::NewProp_GunSprite_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gun sprite component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGun.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gun sprite component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGun_Statics::NewProp_GunSprite = { "GunSprite", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGun, GunSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::NewProp_GunSprite_MetaData), Z_Construct_UClass_AMyGun_Statics::NewProp_GunSprite_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGun_Statics::NewProp_BulletBlueprint_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bullet blueprint\n" },
#endif
		{ "ModuleRelativePath", "MyGun.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bullet blueprint" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGun_Statics::NewProp_BulletBlueprint = { "BulletBlueprint", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGun, BulletBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyBullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::NewProp_BulletBlueprint_MetaData), Z_Construct_UClass_AMyGun_Statics::NewProp_BulletBlueprint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGun_Statics::NewProp_GunSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGun_Statics::NewProp_BulletBlueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGun_Statics::ClassParams = {
		&AMyGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGun_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyGun()
	{
		if (!Z_Registration_Info_UClass_AMyGun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGun.OuterSingleton, Z_Construct_UClass_AMyGun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGun.OuterSingleton;
	}
	template<> ONETAPGAME_API UClass* StaticClass<AMyGun>()
	{
		return AMyGun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGun);
	AMyGun::~AMyGun() {}
	struct Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyGun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyGun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGun, AMyGun::StaticClass, TEXT("AMyGun"), &Z_Registration_Info_UClass_AMyGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGun), 3374066130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyGun_h_190635256(TEXT("/Script/OneTapGame"),
		Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyGun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
