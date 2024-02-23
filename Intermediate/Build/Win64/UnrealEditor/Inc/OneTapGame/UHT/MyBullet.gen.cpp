// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneTapGame/MyBullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBullet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyBullet();
	ONETAPGAME_API UClass* Z_Construct_UClass_AMyBullet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OneTapGame();
// End Cross Module References
	DEFINE_FUNCTION(AMyBullet::execDespawnBullet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DespawnBullet();
		P_NATIVE_END;
	}
	void AMyBullet::StaticRegisterNativesAMyBullet()
	{
		UClass* Class = AMyBullet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DespawnBullet", &AMyBullet::execDespawnBullet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyBullet_DespawnBullet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyBullet_DespawnBullet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBullet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBullet_DespawnBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBullet, nullptr, "DespawnBullet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBullet_DespawnBullet_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyBullet_DespawnBullet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyBullet_DespawnBullet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyBullet_DespawnBullet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyBullet);
	UClass* Z_Construct_UClass_AMyBullet_NoRegister()
	{
		return AMyBullet::StaticClass();
	}
	struct Z_Construct_UClass_AMyBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletLifespan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletLifespan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OneTapGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBullet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyBullet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyBullet_DespawnBullet, "DespawnBullet" }, // 928153108
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBullet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyBullet.h" },
		{ "ModuleRelativePath", "MyBullet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBullet_Statics::NewProp_BulletMovement_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bullet movement component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyBullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bullet movement component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBullet_Statics::NewProp_BulletMovement = { "BulletMovement", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyBullet, BulletMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBullet_Statics::NewProp_BulletMovement_MetaData), Z_Construct_UClass_AMyBullet_Statics::NewProp_BulletMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBullet_Statics::NewProp_BulletLifespan_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "MyBullet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBullet_Statics::NewProp_BulletLifespan = { "BulletLifespan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyBullet, BulletLifespan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBullet_Statics::NewProp_BulletLifespan_MetaData), Z_Construct_UClass_AMyBullet_Statics::NewProp_BulletLifespan_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyBullet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBullet_Statics::NewProp_BulletMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBullet_Statics::NewProp_BulletLifespan,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBullet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyBullet_Statics::ClassParams = {
		&AMyBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBullet_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyBullet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBullet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyBullet()
	{
		if (!Z_Registration_Info_UClass_AMyBullet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyBullet.OuterSingleton, Z_Construct_UClass_AMyBullet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyBullet.OuterSingleton;
	}
	template<> ONETAPGAME_API UClass* StaticClass<AMyBullet>()
	{
		return AMyBullet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyBullet);
	AMyBullet::~AMyBullet() {}
	struct Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyBullet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyBullet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyBullet, AMyBullet::StaticClass, TEXT("AMyBullet"), &Z_Registration_Info_UClass_AMyBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyBullet), 434926162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyBullet_h_3593508862(TEXT("/Script/OneTapGame"),
		Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyBullet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
