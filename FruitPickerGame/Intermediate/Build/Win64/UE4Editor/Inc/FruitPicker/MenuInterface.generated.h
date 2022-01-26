// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRUITPICKER_MenuInterface_generated_h
#error "MenuInterface.generated.h already included, missing '#pragma once' in MenuInterface.h"
#endif
#define FRUITPICKER_MenuInterface_generated_h

#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_SPARSE_DATA
#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_RPC_WRAPPERS
#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FRUITPICKER_API UMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FRUITPICKER_API, UMenuInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FRUITPICKER_API UMenuInterface(UMenuInterface&&); \
	FRUITPICKER_API UMenuInterface(const UMenuInterface&); \
public:


#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FRUITPICKER_API UMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FRUITPICKER_API UMenuInterface(UMenuInterface&&); \
	FRUITPICKER_API UMenuInterface(const UMenuInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FRUITPICKER_API, UMenuInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuInterface)


#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMenuInterface(); \
	friend struct Z_Construct_UClass_UMenuInterface_Statics; \
public: \
	DECLARE_CLASS(UMenuInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FruitPicker"), FRUITPICKER_API) \
	DECLARE_SERIALIZER(UMenuInterface)


#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMenuInterface() {} \
public: \
	typedef UMenuInterface UClassType; \
	typedef IMenuInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IMenuInterface() {} \
public: \
	typedef UMenuInterface UClassType; \
	typedef IMenuInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_10_PROLOG
#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_SPARSE_DATA \
	FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_RPC_WRAPPERS \
	FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FruitPickerGame_Source_FruitPicker_MenuInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_SPARSE_DATA \
	FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FruitPickerGame_Source_FruitPicker_MenuInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRUITPICKER_API UClass* StaticClass<class UMenuInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FruitPickerGame_Source_FruitPicker_MenuInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
