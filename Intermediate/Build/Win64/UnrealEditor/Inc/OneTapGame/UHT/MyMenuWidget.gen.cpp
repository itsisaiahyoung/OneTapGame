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
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OneTapGame();
// End Cross Module References
	DEFINE_FUNCTION(UMyMenuWidget::execOnButton2Hovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButton2Hovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyMenuWidget::execOnButton1Hovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButton1Hovered();
		P_NATIVE_END;
	}
	void UMyMenuWidget::StaticRegisterNativesUMyMenuWidget()
	{
		UClass* Class = UMyMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButton1Hovered", &UMyMenuWidget::execOnButton1Hovered },
			{ "OnButton2Hovered", &UMyMenuWidget::execOnButton2Hovered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyMenuWidget_OnButton1Hovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyMenuWidget_OnButton1Hovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyMenuWidget_OnButton1Hovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyMenuWidget, nullptr, "OnButton1Hovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyMenuWidget_OnButton1Hovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyMenuWidget_OnButton1Hovered_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyMenuWidget_OnButton1Hovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyMenuWidget_OnButton1Hovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyMenuWidget_OnButton2Hovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyMenuWidget_OnButton2Hovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyMenuWidget_OnButton2Hovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyMenuWidget, nullptr, "OnButton2Hovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyMenuWidget_OnButton2Hovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyMenuWidget_OnButton2Hovered_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyMenuWidget_OnButton2Hovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyMenuWidget_OnButton2Hovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyMenuWidget);
	UClass* Z_Construct_UClass_UMyMenuWidget_NoRegister()
	{
		return UMyMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyButton1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyButton1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyButton2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyButton2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OneTapGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyMenuWidget_OnButton1Hovered, "OnButton1Hovered" }, // 880415786
		{ &Z_Construct_UFunction_UMyMenuWidget_OnButton2Hovered, "OnButton2Hovered" }, // 1026002717
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyMenuWidget.h" },
		{ "ModuleRelativePath", "MyMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyButton1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyButton1 = { "MyButton1", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyMenuWidget, MyButton1), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyButton1_MetaData), Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyButton1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyButton2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyButton2 = { "MyButton2", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyMenuWidget, MyButton2), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyButton2_MetaData), Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyButton2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyImage = { "MyImage", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyMenuWidget, MyImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyImage_MetaData), Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyImage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyMenuWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyButton1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyButton2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMenuWidget_Statics::NewProp_MyImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyMenuWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyMenuWidget_Statics::ClassParams = {
		&UMyMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyMenuWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyMenuWidget_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_UMyMenuWidget, UMyMenuWidget::StaticClass, TEXT("UMyMenuWidget"), &Z_Registration_Info_UClass_UMyMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyMenuWidget), 2874375141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyMenuWidget_h_1443836658(TEXT("/Script/OneTapGame"),
		Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_conta_OneDrive_Documents_Unreal_Projects_OneTapGame_Source_OneTapGame_MyMenuWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
