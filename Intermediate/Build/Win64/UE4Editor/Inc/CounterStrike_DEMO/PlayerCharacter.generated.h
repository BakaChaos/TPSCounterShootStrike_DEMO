// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COUNTERSTRIKE_DEMO_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define COUNTERSTRIKE_DEMO_PlayerCharacter_generated_h

#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_SPARSE_DATA
#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_RPC_WRAPPERS
#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCamera() { return STRUCT_OFFSET(APlayerCharacter, PlayerCamera); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(APlayerCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__FirstWeaponClass() { return STRUCT_OFFSET(APlayerCharacter, FirstWeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName() { return STRUCT_OFFSET(APlayerCharacter, WeaponAttachSocketName); } \
	FORCEINLINE static uint32 __PPO__ReloadMontage() { return STRUCT_OFFSET(APlayerCharacter, ReloadMontage); }


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_14_PROLOG
#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_SPARSE_DATA \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_RPC_WRAPPERS \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_INCLASS \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_SPARSE_DATA \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
