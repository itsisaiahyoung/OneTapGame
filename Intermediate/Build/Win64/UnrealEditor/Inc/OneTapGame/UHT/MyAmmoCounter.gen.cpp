// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneTapGame/MyAmmoCounter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAmmoCounter() {}
// Cross Module References
	ONETAPGAME_API UClass* Z_Construct_UClass_UMyAmmoCounter();
	ONETAPGAME_API UClass* Z_Construct_UClass_UMyAmmoCounter_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OneTapGame();
// End Cross Module References
	struct MyAmmoCounter_eventSetAmmoCount_Parms
	{
		int32 AmmoCount;
	};
	static FName NAME_UMyAmmoCounter_SetAmmoCount = FName(TEXT("SetAmmoCount"));
	void UMyAmmoCounter::SetAmmoCount(int32 AmmoCount)
	{
		MyAmmoCounter_eventSetAmmoCount_Parms Parms;
		Parms.AmmoCount=AmmoCount;
		ProcessEvent(FindFunctionChecked(NAME_UMyAmmoCounter_SetAmmoCount),&Parms);
	}
	void UMyAmmoCounter::StaticRegisterNativesUMyAmmoCounter()
	{
	}
	struct Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics::NewProp_AmmoCount = { "AmmoCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyAmmoCounter_eventSetAmmoCount_Parms, AmmoCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics::NewProp_AmmoCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to update the ammo count display\n" },
#endif
		{ "ModuleRelativePath", "MyAmmoCounter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to update the ammo count display" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAmmoCounter, nullptr, "SetAmmoCount", nullptr, nullptr, Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics::PropPointers), sizeof(MyAmmoCounter_eventSetAmmoCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(MyAmmoCounter_eventSetAmmoCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAmmoCounter);
	UClass* Z_Construct_UClass_UMyAmmoCounter_NoRegister()
	{
		return UMyAmmoCounter::StaticClass();
	}
	struct Z_Construct_UClass_UMyAmmoCounter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAmmoCounter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OneTapGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAmmoCounter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyAmmoCounter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyAmmoCounter_SetAmmoCount, "SetAmmoCount" }, // 2657537564
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAmmoCounter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAmmoCounter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyAmmoCounter.h" },
		{ "ModuleRelativePath", "MyAmmoCounter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAmmoCounter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAmmoCounter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAmmoCounter_Statics::ClassParams = {
		&UMyAmmoCounter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAmmoCounter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAmmoCounter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyAmmoCounter()
	{
		if (!Z_Registration_Info_UClass_UMyAmmoCounter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAmmoCounter.OuterSingleton, Z_Construct_UClass_UMyAmmoCounter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyAmmoCounter.OuterSingleton;
	}
	template<> ONETAPGAME_API UClass* StaticClass<UMyAmmoCounter>()
	{
		return UMyAmmoCounter::StaticClass();
	}
	UMyAmmoCounter::UMyAmmoCounter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAmmoCounter);
	UMyAmmoCounter::~UMyAmmoCounter() {}
	struct Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyAmmoCounter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyAmmoCounter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyAmmoCounter, UMyAmmoCounter::StaticClass, TEXT("UMyAmmoCounter"), &Z_Registration_Info_UClass_UMyAmmoCounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAmmoCounter), 1505030060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyAmmoCounter_h_2007589419(TEXT("/Script/OneTapGame"),
		Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyAmmoCounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneTapGame_Source_OneTapGame_MyAmmoCounter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
