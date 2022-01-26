// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRUITPICKER_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define FRUITPICKER_MainMenu_generated_h

#define FruitPickerGame_Source_FruitPicker_MainMenu_h_16_SPARSE_DATA
#define FruitPickerGame_Source_FruitPicker_MainMenu_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenMainMenu); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer);


#define FruitPickerGame_Source_FruitPicker_MainMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenMainMenu); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer);


#define FruitPickerGame_Source_FruitPicker_MainMenu_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FruitPicker"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define FruitPickerGame_Source_FruitPicker_MainMenu_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FruitPicker"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define FruitPickerGame_Source_FruitPicker_MainMenu_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public:


#define FruitPickerGame_Source_FruitPicker_MainMenu_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu)


#define FruitPickerGame_Source_FruitPicker_MainMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HostButton() { return STRUCT_OFFSET(UMainMenu, HostButton); } \
	FORCEINLINE static uint32 __PPO__JoinButton() { return STRUCT_OFFSET(UMainMenu, JoinButton); } \
	FORCEINLINE static uint32 __PPO__BackButton() { return STRUCT_OFFSET(UMainMenu, BackButton); } \
	FORCEINLINE static uint32 __PPO__MenuSwitcher() { return STRUCT_OFFSET(UMainMenu, MenuSwitcher); } \
	FORCEINLINE static uint32 __PPO__JoinMenu() { return STRUCT_OFFSET(UMainMenu, JoinMenu); } \
	FORCEINLINE static uint32 __PPO__JoinGameButton() { return STRUCT_OFFSET(UMainMenu, JoinGameButton); } \
	FORCEINLINE static uint32 __PPO__MainMenu() { return STRUCT_OFFSET(UMainMenu, MainMenu); } \
	FORCEINLINE static uint32 __PPO__IPAddressField() { return STRUCT_OFFSET(UMainMenu, IPAddressField); } \
	FORCEINLINE static uint32 __PPO__NameField() { return STRUCT_OFFSET(UMainMenu, NameField); }


#define FruitPickerGame_Source_FruitPicker_MainMenu_h_13_PROLOG
#define FruitPickerGame_Source_FruitPicker_MainMenu_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FruitPickerGame_Source_FruitPicker_MainMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	FruitPickerGame_Source_FruitPicker_MainMenu_h_16_SPARSE_DATA \
	FruitPickerGame_Source_FruitPicker_MainMenu_h_16_RPC_WRAPPERS \
	FruitPickerGame_Source_FruitPicker_MainMenu_h_16_INCLASS \
	FruitPickerGame_Source_FruitPicker_MainMenu_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FruitPickerGame_Source_FruitPicker_MainMenu_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FruitPickerGame_Source_FruitPicker_MainMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	FruitPickerGame_Source_FruitPicker_MainMenu_h_16_SPARSE_DATA \
	FruitPickerGame_Source_FruitPicker_MainMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FruitPickerGame_Source_FruitPicker_MainMenu_h_16_INCLASS_NO_PURE_DECLS \
	FruitPickerGame_Source_FruitPicker_MainMenu_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRUITPICKER_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FruitPickerGame_Source_FruitPicker_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
