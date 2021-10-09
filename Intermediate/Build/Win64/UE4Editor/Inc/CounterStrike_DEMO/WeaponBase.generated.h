// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COUNTERSTRIKE_DEMO_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define COUNTERSTRIKE_DEMO_WeaponBase_generated_h

#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanTrace_Statics; \
	COUNTERSTRIKE_DEMO_API static class UScriptStruct* StaticStruct();


template<> COUNTERSTRIKE_DEMO_API UScriptStruct* StaticStruct<struct FHitScanTrace>();

#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_SPARSE_DATA
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_RPC_WRAPPERS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execFire);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execFire);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_EVENT_PARMS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_CALLBACK_WRAPPERS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrace=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrace	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrace=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrace	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AWeaponBase, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(AWeaponBase, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AWeaponBase, DamageType); } \
	FORCEINLINE static uint32 __PPO__TracerTargetName() { return STRUCT_OFFSET(AWeaponBase, TracerTargetName); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(AWeaponBase, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__RateOfFire() { return STRUCT_OFFSET(AWeaponBase, RateOfFire); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(AWeaponBase, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__TracerEffect() { return STRUCT_OFFSET(AWeaponBase, TracerEffect); } \
	FORCEINLINE static uint32 __PPO__FireCameraShake() { return STRUCT_OFFSET(AWeaponBase, FireCameraShake); } \
	FORCEINLINE static uint32 __PPO__WeaponSound() { return STRUCT_OFFSET(AWeaponBase, WeaponSound); } \
	FORCEINLINE static uint32 __PPO__DefaultImpactEffect() { return STRUCT_OFFSET(AWeaponBase, DefaultImpactEffect); } \
	FORCEINLINE static uint32 __PPO__FleshImapctEffect() { return STRUCT_OFFSET(AWeaponBase, FleshImapctEffect); } \
	FORCEINLINE static uint32 __PPO__HitScanTrace() { return STRUCT_OFFSET(AWeaponBase, HitScanTrace); }


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_27_PROLOG \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_EVENT_PARMS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_RPC_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_INCLASS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_INCLASS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
