// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWaveState : uint8;
#ifdef COUNTERSTRIKE_DEMO_BotGameState_generated_h
#error "BotGameState.generated.h already included, missing '#pragma once' in BotGameState.h"
#endif
#define COUNTERSTRIKE_DEMO_BotGameState_generated_h

#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_SPARSE_DATA
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_EVENT_PARMS \
	struct BotGameState_eventWaveStateChanged_Parms \
	{ \
		EWaveState NewState; \
		EWaveState OldState; \
	};


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_CALLBACK_WRAPPERS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABotGameState(); \
	friend struct Z_Construct_UClass_ABotGameState_Statics; \
public: \
	DECLARE_CLASS(ABotGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(ABotGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WaveState=NETFIELD_REP_START, \
		NETFIELD_REP_END=WaveState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_INCLASS \
private: \
	static void StaticRegisterNativesABotGameState(); \
	friend struct Z_Construct_UClass_ABotGameState_Statics; \
public: \
	DECLARE_CLASS(ABotGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(ABotGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WaveState=NETFIELD_REP_START, \
		NETFIELD_REP_END=WaveState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABotGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABotGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotGameState(ABotGameState&&); \
	NO_API ABotGameState(const ABotGameState&); \
public:


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABotGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotGameState(ABotGameState&&); \
	NO_API ABotGameState(const ABotGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABotGameState)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaveState() { return STRUCT_OFFSET(ABotGameState, WaveState); }


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_27_PROLOG \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_EVENT_PARMS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_RPC_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_INCLASS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_INCLASS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<class ABotGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameState_h


#define FOREACH_ENUM_EWAVESTATE(op) \
	op(EWaveState::WaitingToStart) \
	op(EWaveState::WaveInProgress) \
	op(EWaveState::WaitingToComplete) \
	op(EWaveState::WaveComplete) \
	op(EWaveState::GameOver) 

enum class EWaveState : uint8;
template<> COUNTERSTRIKE_DEMO_API UEnum* StaticEnum<EWaveState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
