// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
#ifdef COUNTERSTRIKE_DEMO_BotGameMode_generated_h
#error "BotGameMode.generated.h already included, missing '#pragma once' in BotGameMode.h"
#endif
#define COUNTERSTRIKE_DEMO_BotGameMode_generated_h

#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_11_DELEGATE \
struct _Script_CounterStrike_DEMO_eventOnActorKilled_Parms \
{ \
	AActor* VictimActor; \
	AActor* KillerActor; \
	AController* KillerController; \
}; \
static inline void FOnActorKilled_DelegateWrapper(const FMulticastScriptDelegate& OnActorKilled, AActor* VictimActor, AActor* KillerActor, AController* KillerController) \
{ \
	_Script_CounterStrike_DEMO_eventOnActorKilled_Parms Parms; \
	Parms.VictimActor=VictimActor; \
	Parms.KillerActor=KillerActor; \
	Parms.KillerController=KillerController; \
	OnActorKilled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_SPARSE_DATA
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_RPC_WRAPPERS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_EVENT_PARMS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_CALLBACK_WRAPPERS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABotGameMode(); \
	friend struct Z_Construct_UClass_ABotGameMode_Statics; \
public: \
	DECLARE_CLASS(ABotGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(ABotGameMode)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABotGameMode(); \
	friend struct Z_Construct_UClass_ABotGameMode_Statics; \
public: \
	DECLARE_CLASS(ABotGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(ABotGameMode)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABotGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABotGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotGameMode(ABotGameMode&&); \
	NO_API ABotGameMode(const ABotGameMode&); \
public:


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotGameMode(ABotGameMode&&); \
	NO_API ABotGameMode(const ABotGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABotGameMode)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeBetweenWaves() { return STRUCT_OFFSET(ABotGameMode, TimeBetweenWaves); }


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_16_PROLOG \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_EVENT_PARMS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_RPC_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_INCLASS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_INCLASS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<class ABotGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_BotGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
