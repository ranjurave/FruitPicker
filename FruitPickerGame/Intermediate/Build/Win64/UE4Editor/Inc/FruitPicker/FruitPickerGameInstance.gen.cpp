// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FruitPicker/FruitPickerGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFruitPickerGameInstance() {}
// Cross Module References
	FRUITPICKER_API UClass* Z_Construct_UClass_UFruitPickerGameInstance_NoRegister();
	FRUITPICKER_API UClass* Z_Construct_UClass_UFruitPickerGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_FruitPicker();
	FRUITPICKER_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFruitPickerGameInstance::execLoadMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFruitPickerGameInstance::execJoin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Join(Z_Param_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFruitPickerGameInstance::execHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Host();
		P_NATIVE_END;
	}
	void UFruitPickerGameInstance::StaticRegisterNativesUFruitPickerGameInstance()
	{
		UClass* Class = UFruitPickerGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", &UFruitPickerGameInstance::execHost },
			{ "Join", &UFruitPickerGameInstance::execJoin },
			{ "LoadMainMenu", &UFruitPickerGameInstance::execLoadMainMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFruitPickerGameInstance_Host_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFruitPickerGameInstance_Host_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FruitPickerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFruitPickerGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFruitPickerGameInstance, nullptr, "Host", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFruitPickerGameInstance_Host_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFruitPickerGameInstance_Host_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFruitPickerGameInstance_Host()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFruitPickerGameInstance_Host_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics
	{
		struct FruitPickerGameInstance_eventJoin_Parms
		{
			FString Address;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FruitPickerGameInstance_eventJoin_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FruitPickerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFruitPickerGameInstance, nullptr, "Join", nullptr, nullptr, sizeof(FruitPickerGameInstance_eventJoin_Parms), Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFruitPickerGameInstance_Join()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFruitPickerGameInstance_Join_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFruitPickerGameInstance_LoadMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFruitPickerGameInstance_LoadMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FruitPickerGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFruitPickerGameInstance_LoadMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFruitPickerGameInstance, nullptr, "LoadMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFruitPickerGameInstance_LoadMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFruitPickerGameInstance_LoadMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFruitPickerGameInstance_LoadMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFruitPickerGameInstance_LoadMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFruitPickerGameInstance_NoRegister()
	{
		return UFruitPickerGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFruitPickerGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFruitPickerGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FruitPicker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFruitPickerGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFruitPickerGameInstance_Host, "Host" }, // 1726594712
		{ &Z_Construct_UFunction_UFruitPickerGameInstance_Join, "Join" }, // 935097103
		{ &Z_Construct_UFunction_UFruitPickerGameInstance_LoadMainMenu, "LoadMainMenu" }, // 2606642252
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFruitPickerGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FruitPickerGameInstance.h" },
		{ "ModuleRelativePath", "FruitPickerGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFruitPickerGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMenuInterface_NoRegister, (int32)VTABLE_OFFSET(UFruitPickerGameInstance, IMenuInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFruitPickerGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFruitPickerGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFruitPickerGameInstance_Statics::ClassParams = {
		&UFruitPickerGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFruitPickerGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFruitPickerGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFruitPickerGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFruitPickerGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFruitPickerGameInstance, 154127368);
	template<> FRUITPICKER_API UClass* StaticClass<UFruitPickerGameInstance>()
	{
		return UFruitPickerGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFruitPickerGameInstance(Z_Construct_UClass_UFruitPickerGameInstance, &UFruitPickerGameInstance::StaticClass, TEXT("/Script/FruitPicker"), TEXT("UFruitPickerGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFruitPickerGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
