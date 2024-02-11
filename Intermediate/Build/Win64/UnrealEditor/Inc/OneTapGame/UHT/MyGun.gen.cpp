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
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyBullet_NoRegister();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyGun();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyGun_NoRegister();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyItem();
	ONETAPGAME_API UClass* Z_Construct_UClass_UMyAmmoCounter_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoCounterWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoCounterWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoCounterWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AmmoCounterWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GunSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BulletBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunProfilesDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GunProfilesDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GunProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFireButtonHeldDown_MetaData[];
#endif
		static void NewProp_bIsFireButtonHeldDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFireButtonHeldDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiringAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FiringAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAutomatic_MetaData[];
#endif
		static void NewProp_IsAutomatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAutomatic;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGun_Statics::NewProp_AmmoCounterWidget_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the AmmoCounterWidget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGun.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the AmmoCounterWidget" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGun_Statics::NewProp_AmmoCounterWidget = { "AmmoCounterWidget", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGun, AmmoCounterWidget), Z_Construct_UClass_UMyAmmoCounter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::NewProp_AmmoCounterWidget_MetaData), Z_Construct_UClass_AMyGun_Statics::NewProp_AmmoCounterWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGun_Statics::NewProp_AmmoCounterWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class of the AmmoCounterWidget, set this in the editor\n" },
#endif
		{ "ModuleRelativePath", "MyGun.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class of the AmmoCounterWidget, set this in the editor" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGun_Statics::NewProp_AmmoCounterWidgetClass = { "AmmoCounterWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGun, AmmoCounterWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMyAmmoCounter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::NewProp_AmmoCounterWidgetClass_MetaData), Z_Construct_UClass_AMyGun_Statics::NewProp_AmmoCounterWidgetClass_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGun_Statics::NewProp_GunProfilesDataTable_MetaData[] = {
		{ "Category", "Gun" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the Data Table\n" },
#endif
		{ "ModuleRelativePath", "MyGun.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Data Table" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGun_Statics::NewProp_GunProfilesDataTable = { "GunProfilesDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGun, GunProfilesDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::NewProp_GunProfilesDataTable_MetaData), Z_Construct_UClass_AMyGun_Statics::NewProp_GunProfilesDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGun_Statics::NewProp_GunProfileName_MetaData[] = {
		{ "Category", "Gun" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the DataRow in the DataTable\n" },
#endif
		{ "ModuleRelativePath", "MyGun.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the DataRow in the DataTable" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMyGun_Statics::NewProp_GunProfileName = { "GunProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGun, GunProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::NewProp_GunProfileName_MetaData), Z_Construct_UClass_AMyGun_Statics::NewProp_GunProfileName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGun_Statics::NewProp_bIsFireButtonHeldDown_MetaData[] = {
		{ "Category", "Gun" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates whether the fire button is currently being held down\n" },
#endif
		{ "ModuleRelativePath", "MyGun.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the fire button is currently being held down" },
#endif
	};
#endif
	void Z_Construct_UClass_AMyGun_Statics::NewProp_bIsFireButtonHeldDown_SetBit(void* Obj)
	{
		((AMyGun*)Obj)->bIsFireButtonHeldDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyGun_Statics::NewProp_bIsFireButtonHeldDown = { "bIsFireButtonHeldDown", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyGun), &Z_Construct_UClass_AMyGun_Statics::NewProp_bIsFireButtonHeldDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::NewProp_bIsFireButtonHeldDown_MetaData), Z_Construct_UClass_AMyGun_Statics::NewProp_bIsFireButtonHeldDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGun_Statics::NewProp_FiringAnimation_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gun firing animation\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGun.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gun firing animation" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGun_Statics::NewProp_FiringAnimation = { "FiringAnimation", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGun, FiringAnimation), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::NewProp_FiringAnimation_MetaData), Z_Construct_UClass_AMyGun_Statics::NewProp_FiringAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGun_Statics::NewProp_IsAutomatic_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "MyGun.h" },
	};
#endif
	void Z_Construct_UClass_AMyGun_Statics::NewProp_IsAutomatic_SetBit(void* Obj)
	{
		((AMyGun*)Obj)->IsAutomatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyGun_Statics::NewProp_IsAutomatic = { "IsAutomatic", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyGun), &Z_Construct_UClass_AMyGun_Statics::NewProp_IsAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGun_Statics::NewProp_IsAutomatic_MetaData), Z_Construct_UClass_AMyGun_Statics::NewProp_IsAutomatic_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGun_Statics::NewProp_AmmoCounterWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGun_Statics::NewProp_AmmoCounterWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGun_Statics::NewProp_GunSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGun_Statics::NewProp_BulletBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGun_Statics::NewProp_GunProfilesDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGun_Statics::NewProp_GunProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGun_Statics::NewProp_bIsFireButtonHeldDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGun_Statics::NewProp_FiringAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGun_Statics::NewProp_IsAutomatic,
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
		{ Z_Construct_UClass_AMyGun, AMyGun::StaticClass, TEXT("AMyGun"), &Z_Registration_Info_UClass_AMyGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGun), 884036109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyGun_h_3210945982(TEXT("/Script/OneTapGame"),
		Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyGun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
