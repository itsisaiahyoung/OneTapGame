// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneTapGame/MyMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMenuWidget() {}
// Cross Module References
	ONETAPGAME_API UClass* Z_Construct_UClass_UMyMenuWidget();
	ONETAPGAME_API UClass* Z_Construct_UClass_UMyMenuWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OneTapGame();
// End Cross Module References
	void UMyMenuWidget::StaticRegisterNativesUMyMenuWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyMenuWidget);
	UClass* Z_Construct_UClass_UMyMenuWidget_NoRegister()
	{
		return UMyMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OneTapGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMenuWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyMenuWidget.h" },
		{ "ModuleRelativePath", "MyMenuWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyMenuWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyMenuWidget_Statics::ClassParams = {
		&UMyMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyMenuWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyMenuWidget()
	{
		if (!Z_Registration_Info_UClass_UMyMenuWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyMenuWidget.OuterSingleton, Z_Construct_UClass_UMyMenuWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyMenuWidget.OuterSingleton;
	}
	template<> ONETAPGAME_API UClass* StaticClass<UMyMenuWidget>()
	{
		return UMyMenuWidget::StaticClass();
	}
	UMyMenuWidget::UMyMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyMenuWidget);
	UMyMenuWidget::~UMyMenuWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyMenuWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyMenuWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyMenuWidget, UMyMenuWidget::StaticClass, TEXT("UMyMenuWidget"), &Z_Registration_Info_UClass_UMyMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyMenuWidget), 1700618808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyMenuWidget_h_3216134246(TEXT("/Script/OneTapGame"),
		Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyMenuWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
