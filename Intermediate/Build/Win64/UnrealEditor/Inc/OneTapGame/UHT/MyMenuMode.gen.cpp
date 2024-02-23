// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneTapGame/MyMenuMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMenuMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyMenuMode();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyMenuMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OneTapGame();
// End Cross Module References
	void AMyMenuMode::StaticRegisterNativesAMyMenuMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMenuMode);
	UClass* Z_Construct_UClass_AMyMenuMode_NoRegister()
	{
		return AMyMenuMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyMenuMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMenuMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OneTapGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMenuMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMenuMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyMenuMode.h" },
		{ "ModuleRelativePath", "MyMenuMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMenuMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMenuMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMenuMode_Statics::ClassParams = {
		&AMyMenuMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMenuMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMenuMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyMenuMode()
	{
		if (!Z_Registration_Info_UClass_AMyMenuMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMenuMode.OuterSingleton, Z_Construct_UClass_AMyMenuMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyMenuMode.OuterSingleton;
	}
	template<> ONETAPGAME_API UClass* StaticClass<AMyMenuMode>()
	{
		return AMyMenuMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMenuMode);
	AMyMenuMode::~AMyMenuMode() {}
	struct Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyMenuMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyMenuMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyMenuMode, AMyMenuMode::StaticClass, TEXT("AMyMenuMode"), &Z_Registration_Info_UClass_AMyMenuMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMenuMode), 3716375136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyMenuMode_h_3408063303(TEXT("/Script/OneTapGame"),
		Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyMenuMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyMenuMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
