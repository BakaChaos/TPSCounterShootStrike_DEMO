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
#ifdef COUNTERSTRIKE_DEMO_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define COUNTERSTRIKE_DEMO_HealthComponent_generated_h

#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_9_DELEGATE \
struct _Script_CounterStrike_DEMO_eventOnHealthChangedSignature_Parms \
{ \
	UHealthComponent* HealthComp; \
	float Health; \
	float HealthDelta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCuser; \
}; \
static inline void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, UHealthComponent* HealthComp, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCuser) \
{ \
	_Script_CounterStrike_DEMO_eventOnHealthChangedSignature_Parms Parms; \
	Parms.HealthComp=HealthComp; \
	Parms.Health=Health; \
	Parms.HealthDelta=HealthDelta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCuser=DamageCuser; \
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_SPARSE_DATA
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActualHealth() { return STRUCT_OFFSET(UHealthComponent, ActualHealth); } \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(UHealthComponent, DefaultHealth); }


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_11_PROLOG
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_RPC_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_INCLASS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_INCLASS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
