// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneTapGame/GunProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunProfile() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ONETAPGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGunProfile();
	UPackage* Z_Construct_UPackage__Script_OneTapGame();
// End Cross Module References

static_assert(std::is_polymorphic<FGunProfile>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FGunProfile cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GunProfile;
class UScriptStruct* FGunProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GunProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GunProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGunProfile, (UObject*)Z_Construct_UPackage__Script_OneTapGame(), TEXT("GunProfile"));
	}
	return Z_Registration_Info_UScriptStruct_GunProfile.OuterSingleton;
}
template<> ONETAPGAME_API UScriptStruct* StaticStruct<FGunProfile>()
{
	return FGunProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGunProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAutomatic_MetaData[];
#endif
		static void NewProp_IsAutomatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAutomatic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoCapacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GunProfile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGunProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGunProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "GunProfile.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunProfile, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "GunProfile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunProfile, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_FireRate_MetaData), Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_FireRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_IsAutomatic_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "GunProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_IsAutomatic_SetBit(void* Obj)
	{
		((FGunProfile*)Obj)->IsAutomatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_IsAutomatic = { "IsAutomatic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGunProfile), &Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_IsAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_IsAutomatic_MetaData), Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_IsAutomatic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_AmmoCapacity_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "GunProfile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_AmmoCapacity = { "AmmoCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunProfile, AmmoCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_AmmoCapacity_MetaData), Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_AmmoCapacity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGunProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_IsAutomatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunProfile_Statics::NewProp_AmmoCapacity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGunProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OneTapGame,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GunProfile",
		Z_Construct_UScriptStruct_FGunProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunProfile_Statics::PropPointers),
		sizeof(FGunProfile),
		alignof(FGunProfile),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGunProfile_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunProfile_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGunProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_GunProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GunProfile.InnerSingleton, Z_Construct_UScriptStruct_FGunProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GunProfile.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_GunProfile_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_GunProfile_h_Statics::ScriptStructInfo[] = {
		{ FGunProfile::StaticStruct, Z_Construct_UScriptStruct_FGunProfile_Statics::NewStructOps, TEXT("GunProfile"), &Z_Registration_Info_UScriptStruct_GunProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGunProfile), 2367691841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_GunProfile_h_4058636101(TEXT("/Script/OneTapGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_GunProfile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_GunProfile_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
