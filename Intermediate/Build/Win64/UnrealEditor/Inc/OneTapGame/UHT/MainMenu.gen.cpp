// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneTapGame/MainMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}
// Cross Module References
	ONETAPGAME_API UClass* Z_Construct_UClass_UMainMenu();
	ONETAPGAME_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OneTapGame();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenu::execOnPlayClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayClicked();
		P_NATIVE_END;
	}
	void UMainMenu::StaticRegisterNativesUMainMenu()
	{
		UClass* Class = UMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayClicked", &UMainMenu::execOnPlayClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenu_OnPlayClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnPlayClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to be called when the 'Play' button is clicked\n" },
#endif
		{ "ModuleRelativePath", "MainMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to be called when the 'Play' button is clicked" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnPlayClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnPlayClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnPlayClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenu_OnPlayClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnPlayClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OnPlayClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenu);
	UClass* Z_Construct_UClass_UMainMenu_NoRegister()
	{
		return UMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OneTapGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenu_OnPlayClicked, "OnPlayClicked" }, // 81917764
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MainMenu.h" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_Statics::ClassParams = {
		&UMainMenu::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMainMenu()
	{
		if (!Z_Registration_Info_UClass_UMainMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenu.OuterSingleton, Z_Construct_UClass_UMainMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainMenu.OuterSingleton;
	}
	template<> ONETAPGAME_API UClass* StaticClass<UMainMenu>()
	{
		return UMainMenu::StaticClass();
	}
	UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu);
	UMainMenu::~UMainMenu() {}
	struct Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MainMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MainMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenu, UMainMenu::StaticClass, TEXT("UMainMenu"), &Z_Registration_Info_UClass_UMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenu), 3523027191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MainMenu_h_1246454674(TEXT("/Script/OneTapGame"),
		Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MainMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
