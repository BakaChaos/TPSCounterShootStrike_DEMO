// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COUNTERSTRIKE_DEMO_STrackBot_generated_h
#error "STrackBot.generated.h already included, missing '#pragma once' in STrackBot.h"
#endif
#define COUNTERSTRIKE_DEMO_STrackBot_generated_h

#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_SPARSE_DATA
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_RPC_WRAPPERS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTrackBot(); \
	friend struct Z_Construct_UClass_ASTrackBot_Statics; \
public: \
	DECLARE_CLASS(ASTrackBot, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(ASTrackBot)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASTrackBot(); \
	friend struct Z_Construct_UClass_ASTrackBot_Statics; \
public: \
	DECLARE_CLASS(ASTrackBot, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(ASTrackBot)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTrackBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTrackBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackBot(ASTrackBot&&); \
	NO_API ASTrackBot(const ASTrackBot&); \
public:


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackBot(ASTrackBot&&); \
	NO_API ASTrackBot(const ASTrackBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTrackBot)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BotMeshComp() { return STRUCT_OFFSET(ASTrackBot, BotMeshComp); } \
	FORCEINLINE static uint32 __PPO__MoventForce() { return STRUCT_OFFSET(ASTrackBot, MoventForce); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(ASTrackBot, bUseVelocityChange); } \
	FORCEINLINE static uint32 __PPO__RequiredDistanceToTarget() { return STRUCT_OFFSET(ASTrackBot, RequiredDistanceToTarget); }


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_9_PROLOG
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_RPC_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_INCLASS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_INCLASS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<class ASTrackBot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_AI_STrackBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
