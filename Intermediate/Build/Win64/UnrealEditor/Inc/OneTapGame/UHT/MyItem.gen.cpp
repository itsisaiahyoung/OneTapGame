// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneTapGame/MyItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyItem();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OneTapGame();
// End Cross Module References
	void AMyItem::StaticRegisterNativesAMyItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyItem);
	UClass* Z_Construct_UClass_AMyItem_NoRegister()
	{
		return AMyItem::StaticClass();
	}
	struct Z_Construct_UClass_AMyItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OneTapGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyItem.h" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyItem_Statics::ClassParams = {
		&AMyItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyItem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyItem()
	{
		if (!Z_Registration_Info_UClass_AMyItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyItem.OuterSingleton, Z_Construct_UClass_AMyItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyItem.OuterSingleton;
	}
	template<> ONETAPGAME_API UClass* StaticClass<AMyItem>()
	{
		return AMyItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyItem);
	AMyItem::~AMyItem() {}
	struct Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyItem, AMyItem::StaticClass, TEXT("AMyItem"), &Z_Registration_Info_UClass_AMyItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyItem), 2355320179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyItem_h_1403532220(TEXT("/Script/OneTapGame"),
		Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
