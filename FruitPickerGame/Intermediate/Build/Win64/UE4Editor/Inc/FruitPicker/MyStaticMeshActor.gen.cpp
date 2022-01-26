// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FruitPicker/MyStaticMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStaticMeshActor() {}
// Cross Module References
	FRUITPICKER_API UClass* Z_Construct_UClass_AMyStaticMeshActor_NoRegister();
	FRUITPICKER_API UClass* Z_Construct_UClass_AMyStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_FruitPicker();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMyStaticMeshActor::StaticRegisterNativesAMyStaticMeshActor()
	{
	}
	UClass* Z_Construct_UClass_AMyStaticMeshActor_NoRegister()
	{
		return AMyStaticMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyStaticMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTriggers_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ActiveTriggers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyStaticMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FruitPicker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyStaticMeshActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "MyStaticMeshActor.h" },
		{ "ModuleRelativePath", "MyStaticMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "MyStaticMeshActor" },
		{ "ModuleRelativePath", "MyStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyStaticMeshActor, Speed), METADATA_PARAMS(Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "MyStaticMeshActor" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "MyStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyStaticMeshActor, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_ActiveTriggers_MetaData[] = {
		{ "Category", "MyStaticMeshActor" },
		{ "ModuleRelativePath", "MyStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_ActiveTriggers = { "ActiveTriggers", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyStaticMeshActor, ActiveTriggers), METADATA_PARAMS(Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_ActiveTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_ActiveTriggers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyStaticMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyStaticMeshActor_Statics::NewProp_ActiveTriggers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyStaticMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyStaticMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyStaticMeshActor_Statics::ClassParams = {
		&AMyStaticMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyStaticMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyStaticMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyStaticMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyStaticMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyStaticMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyStaticMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyStaticMeshActor, 3733116345);
	template<> FRUITPICKER_API UClass* StaticClass<AMyStaticMeshActor>()
	{
		return AMyStaticMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyStaticMeshActor(Z_Construct_UClass_AMyStaticMeshActor, &AMyStaticMeshActor::StaticClass, TEXT("/Script/FruitPicker"), TEXT("AMyStaticMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyStaticMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
