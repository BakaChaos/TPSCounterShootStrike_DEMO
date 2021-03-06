// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COUNTERSTRIKE_DEMO_PickupItem_generated_h
#error "PickupItem.generated.h already included, missing '#pragma once' in PickupItem.h"
#endif
#define COUNTERSTRIKE_DEMO_PickupItem_generated_h

#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPickItem_Statics; \
	COUNTERSTRIKE_DEMO_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> COUNTERSTRIKE_DEMO_API UScriptStruct* StaticStruct<struct FPickItem>();

#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCraftingInfo_Statics; \
	COUNTERSTRIKE_DEMO_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> COUNTERSTRIKE_DEMO_API UScriptStruct* StaticStruct<struct FCraftingInfo>();

#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_SPARSE_DATA
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserText);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserText);


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_EVENT_PARMS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_CALLBACK_WRAPPERS
#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupItem(); \
	friend struct Z_Construct_UClass_APickupItem_Statics; \
public: \
	DECLARE_CLASS(APickupItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(APickupItem)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_INCLASS \
private: \
	static void StaticRegisterNativesAPickupItem(); \
	friend struct Z_Construct_UClass_APickupItem_Statics; \
public: \
	DECLARE_CLASS(APickupItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(APickupItem)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupItem(APickupItem&&); \
	NO_API APickupItem(const APickupItem&); \
public:


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupItem(APickupItem&&); \
	NO_API APickupItem(const APickupItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupItem)


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemName() { return STRUCT_OFFSET(APickupItem, ItemName); } \
	FORCEINLINE static uint32 __PPO__DoAction() { return STRUCT_OFFSET(APickupItem, DoAction); } \
	FORCEINLINE static uint32 __PPO__SphereMesh() { return STRUCT_OFFSET(APickupItem, SphereMesh); } \
	FORCEINLINE static uint32 __PPO__ItemID() { return STRUCT_OFFSET(APickupItem, ItemID); }


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_70_PROLOG \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_EVENT_PARMS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_RPC_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_INCLASS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_PRIVATE_PROPERTY_OFFSET \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_SPARSE_DATA \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_CALLBACK_WRAPPERS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_INCLASS_NO_PURE_DECLS \
	TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<class APickupItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TPSCounterShootStrike_DEMO_Source_CounterStrike_DEMO_Public_PickupItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
