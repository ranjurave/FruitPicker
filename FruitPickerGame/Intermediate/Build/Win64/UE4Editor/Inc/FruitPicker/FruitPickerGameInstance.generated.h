// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRUITPICKER_FruitPickerGameInstance_generated_h
#error "FruitPickerGameInstance.generated.h already included, missing '#pragma once' in FruitPickerGameInstance.h"
#endif
#define FRUITPICKER_FruitPickerGameInstance_generated_h

#define FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_SPARSE_DATA
#define FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadMainMenu); \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost);


#define FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadMainMenu); \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost);


#define FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFruitPickerGameInstance(); \
	friend struct Z_Construct_UClass_UFruitPickerGameInstance_Statics; \
public: \
	DECLARE_CLASS(UFruitPickerGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FruitPicker"), NO_API) \
	DECLARE_SERIALIZER(UFruitPickerGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UFruitPickerGameInstance*>(this); }


#define FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFruitPickerGameInstance(); \
	friend struct Z_Construct_UClass_UFruitPickerGameInstance_Statics; \
public: \
	DECLARE_CLASS(UFruitPickerGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FruitPicker"), NO_API) \
	DECLARE_SERIALIZER(UFruitPickerGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UFruitPickerGameInstance*>(this); }


#define FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFruitPickerGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFruitPickerGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFruitPickerGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFruitPickerGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFruitPickerGameInstance(UFruitPickerGameInstance&&); \
	NO_API UFruitPickerGameInstance(const UFruitPickerGameInstance&); \
public:


#define FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFruitPickerGameInstance(UFruitPickerGameInstance&&); \
	NO_API UFruitPickerGameInstance(const UFruitPickerGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFruitPickerGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFruitPickerGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFruitPickerGameInstance)


#define FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_PRIVATE_PROPERTY_OFFSET
#define FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_10_PROLOG
#define FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_PRIVATE_PROPERTY_OFFSET \
	FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_SPARSE_DATA \
	FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_RPC_WRAPPERS \
	FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_INCLASS \
	FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_PRIVATE_PROPERTY_OFFSET \
	FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_SPARSE_DATA \
	FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_INCLASS_NO_PURE_DECLS \
	FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRUITPICKER_API UClass* StaticClass<class UFruitPickerGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FruitPickerGame_Source_FruitPicker_FruitPickerGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
