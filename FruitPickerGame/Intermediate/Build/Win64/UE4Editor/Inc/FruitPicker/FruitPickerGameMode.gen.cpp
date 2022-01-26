// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FruitPicker/FruitPickerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFruitPickerGameMode() {}
// Cross Module References
	FRUITPICKER_API UClass* Z_Construct_UClass_AFruitPickerGameMode_NoRegister();
	FRUITPICKER_API UClass* Z_Construct_UClass_AFruitPickerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FruitPicker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FRUITPICKER_API UClass* Z_Construct_UClass_AFruitPickable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFruitPickerGameMode::execGameOverMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameOverMenu_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AFruitPickerGameMode_GameOverMenu = FName(TEXT("GameOverMenu"));
	void AFruitPickerGameMode::GameOverMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFruitPickerGameMode_GameOverMenu),NULL);
	}
	void AFruitPickerGameMode::StaticRegisterNativesAFruitPickerGameMode()
	{
		UClass* Class = AFruitPickerGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameOverMenu", &AFruitPickerGameMode::execGameOverMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFruitPickerGameMode_GameOverMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFruitPickerGameMode_GameOverMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FruitPickerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFruitPickerGameMode_GameOverMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFruitPickerGameMode, nullptr, "GameOverMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFruitPickerGameMode_GameOverMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFruitPickerGameMode_GameOverMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFruitPickerGameMode_GameOverMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFruitPickerGameMode_GameOverMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFruitPickerGameMode_NoRegister()
	{
		return AFruitPickerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFruitPickerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FruitDropList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FruitDropList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FruitDropList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnMinX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnMinX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnMaxX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnMaxX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnMinY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnMinY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnMaxY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnMaxY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFruitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxFruitCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFruitPickerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FruitPicker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFruitPickerGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFruitPickerGameMode_GameOverMenu, "GameOverMenu" }, // 1607928504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFruitPickerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FruitPickerGameMode.h" },
		{ "ModuleRelativePath", "FruitPickerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_FruitDropList_Inner = { "FruitDropList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFruitPickable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_FruitDropList_MetaData[] = {
		{ "Category", "FruitPickerGameMode" },
		{ "ModuleRelativePath", "FruitPickerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_FruitDropList = { "FruitDropList", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFruitPickerGameMode, FruitDropList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_FruitDropList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_FruitDropList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMinX_MetaData[] = {
		{ "Category", "FruitPickerGameMode" },
		{ "ModuleRelativePath", "FruitPickerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMinX = { "SpawnMinX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFruitPickerGameMode, SpawnMinX), METADATA_PARAMS(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMinX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMinX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMaxX_MetaData[] = {
		{ "Category", "FruitPickerGameMode" },
		{ "ModuleRelativePath", "FruitPickerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMaxX = { "SpawnMaxX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFruitPickerGameMode, SpawnMaxX), METADATA_PARAMS(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMaxX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMaxX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMinY_MetaData[] = {
		{ "Category", "FruitPickerGameMode" },
		{ "ModuleRelativePath", "FruitPickerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMinY = { "SpawnMinY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFruitPickerGameMode, SpawnMinY), METADATA_PARAMS(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMinY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMinY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMaxY_MetaData[] = {
		{ "Category", "FruitPickerGameMode" },
		{ "ModuleRelativePath", "FruitPickerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMaxY = { "SpawnMaxY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFruitPickerGameMode, SpawnMaxY), METADATA_PARAMS(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMaxY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMaxY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_MaxFruitCount_MetaData[] = {
		{ "Category", "FruitPickerGameMode" },
		{ "ModuleRelativePath", "FruitPickerGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_MaxFruitCount = { "MaxFruitCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFruitPickerGameMode, MaxFruitCount), METADATA_PARAMS(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_MaxFruitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_MaxFruitCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFruitPickerGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_FruitDropList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_FruitDropList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMinX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMaxX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMinY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_SpawnMaxY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFruitPickerGameMode_Statics::NewProp_MaxFruitCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFruitPickerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFruitPickerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFruitPickerGameMode_Statics::ClassParams = {
		&AFruitPickerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFruitPickerGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFruitPickerGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFruitPickerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFruitPickerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFruitPickerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFruitPickerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFruitPickerGameMode, 25898087);
	template<> FRUITPICKER_API UClass* StaticClass<AFruitPickerGameMode>()
	{
		return AFruitPickerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFruitPickerGameMode(Z_Construct_UClass_AFruitPickerGameMode, &AFruitPickerGameMode::StaticClass, TEXT("/Script/FruitPicker"), TEXT("AFruitPickerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFruitPickerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
