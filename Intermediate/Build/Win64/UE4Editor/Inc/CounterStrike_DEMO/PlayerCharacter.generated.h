// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthComponent;
class UDamageType;
class AController;
class AActor;
struct FPickItem;
#ifdef COUNTERSTRIKE_DEMO_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define COUNTERSTRIKE_DEMO_PlayerCharacter_generated_h

#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_SPARSE_DATA
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execCraftItem); \
	DECLARE_FUNCTION(execAddItemToBackPackByID);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execCraftItem); \
	DECLARE_FUNCTION(execAddItemToBackPackByID);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_EVENT_PARMS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_CALLBACK_WRAPPERS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		bDied, \
		NETFIELD_REP_END=bDied	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		bDied, \
		NETFIELD_REP_END=bDied	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_STANDARD_CONSTRUCTORS \
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


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCamera() { return STRUCT_OFFSET(APlayerCharacter, PlayerCamera); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(APlayerCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(APlayerCharacter, HealthComp); } \
	FORCEINLINE static uint32 __PPO__FirstWeaponClass() { return STRUCT_OFFSET(APlayerCharacter, FirstWeaponClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(APlayerCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName() { return STRUCT_OFFSET(APlayerCharacter, WeaponAttachSocketName); } \
	FORCEINLINE static uint32 __PPO__ReloadMontage() { return STRUCT_OFFSET(APlayerCharacter, ReloadMontage); } \
	FORCEINLINE static uint32 __PPO__bReload() { return STRUCT_OFFSET(APlayerCharacter, bReload); } \
	FORCEINLINE static uint32 __PPO__bDied() { return STRUCT_OFFSET(APlayerCharacter, bDied); } \
	FORCEINLINE static uint32 __PPO__ZoomedFOV() { return STRUCT_OFFSET(APlayerCharacter, ZoomedFOV); } \
	FORCEINLINE static uint32 __PPO__ZoomInterpSpeed() { return STRUCT_OFFSET(APlayerCharacter, ZoomInterpSpeed); }


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_17_PROLOG \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_EVENT_PARMS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_RPC_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_INCLASS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
