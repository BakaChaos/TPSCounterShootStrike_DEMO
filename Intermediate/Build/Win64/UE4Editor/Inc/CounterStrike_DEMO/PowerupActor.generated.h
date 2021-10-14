// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COUNTERSTRIKE_DEMO_PowerupActor_generated_h
#error "PowerupActor.generated.h already included, missing '#pragma once' in PowerupActor.h"
#endif
#define COUNTERSTRIKE_DEMO_PowerupActor_generated_h

#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_SPARSE_DATA
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_OnPowerupActive); \
	DECLARE_FUNCTION(execOnTickPowerup);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_OnPowerupActive); \
	DECLARE_FUNCTION(execOnTickPowerup);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_EVENT_PARMS \
	struct PowerupActor_eventOnPowerupStateChanged_Parms \
	{ \
		bool bNewIsActive; \
	};


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_CALLBACK_WRAPPERS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerupActor(); \
	friend struct Z_Construct_UClass_APowerupActor_Statics; \
public: \
	DECLARE_CLASS(APowerupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(APowerupActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPowerupActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsPowerupActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPowerupActor(); \
	friend struct Z_Construct_UClass_APowerupActor_Statics; \
public: \
	DECLARE_CLASS(APowerupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(APowerupActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPowerupActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsPowerupActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APowerupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APowerupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerupActor(APowerupActor&&); \
	NO_API APowerupActor(const APowerupActor&); \
public:


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerupActor(APowerupActor&&); \
	NO_API APowerupActor(const APowerupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerupActor)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PowerupInterval() { return STRUCT_OFFSET(APowerupActor, PowerupInterval); } \
	FORCEINLINE static uint32 __PPO__TotalNumOfTicks() { return STRUCT_OFFSET(APowerupActor, TotalNumOfTicks); } \
	FORCEINLINE static uint32 __PPO__bIsPowerupActive() { return STRUCT_OFFSET(APowerupActor, bIsPowerupActive); }


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_11_PROLOG \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_EVENT_PARMS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_RPC_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_INCLASS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_INCLASS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<class APowerupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PowerupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
