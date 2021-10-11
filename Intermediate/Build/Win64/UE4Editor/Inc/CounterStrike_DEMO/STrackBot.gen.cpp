// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CounterStrike_DEMO/Public/AI/STrackBot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTrackBot() {}
// Cross Module References
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ASTrackBot_NoRegister();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ASTrackBot();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CounterStrike_DEMO();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASTrackBot::execHandleTakeAnyDamage)
	{
		P_GET_OBJECT(UHealthComponent,Z_Param_OwningHealthComp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthDelta);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakeAnyDamage(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void ASTrackBot::StaticRegisterNativesASTrackBot()
	{
		UClass* Class = ASTrackBot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakeAnyDamage", &ASTrackBot::execHandleTakeAnyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics
	{
		struct STrackBot_eventHandleTakeAnyDamage_Parms
		{
			UHealthComponent* OwningHealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_OwningHealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_OwningHealthComp = { "OwningHealthComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeAnyDamage_Parms, OwningHealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_OwningHealthComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_OwningHealthComp_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeAnyDamage_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeAnyDamage_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STrackBot_eventHandleTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_OwningHealthComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTrackBot, nullptr, "HandleTakeAnyDamage", nullptr, nullptr, sizeof(STrackBot_eventHandleTakeAnyDamage_Parms), Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASTrackBot_NoRegister()
	{
		return ASTrackBot::StaticClass();
	}
	struct Z_Construct_UClass_ASTrackBot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityChange_MetaData[];
#endif
		static void NewProp_bUseVelocityChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDistanceToTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredDistanceToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTrackBot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CounterStrike_DEMO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASTrackBot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTrackBot_HandleTakeAnyDamage, "HandleTakeAnyDamage" }, // 2515215113
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/STrackBot.h" },
		{ "ModuleRelativePath", "Public/AI/STrackBot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_BotMeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_BotMeshComp = { "BotMeshComp", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, BotMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_BotMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_BotMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_HealthComp = { "HealthComp", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, HealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_HealthComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_MovementForce_MetaData[] = {
		{ "Category", "TrackBot" },
		{ "ModuleRelativePath", "Public/AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_MovementForce = { "MovementForce", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, MovementForce), METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_MovementForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_MovementForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange_MetaData[] = {
		{ "Category", "TrackBot" },
		{ "Comment", "//?\xc7\xb7?\xca\xb9?????\xca\xb1\xe4\xbb\xaf\n" },
		{ "ModuleRelativePath", "Public/AI/STrackBot.h" },
		{ "ToolTip", "?\xc7\xb7?\xca\xb9?????\xca\xb1\xe4\xbb\xaf" },
	};
#endif
	void Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange_SetBit(void* Obj)
	{
		((ASTrackBot*)Obj)->bUseVelocityChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange = { "bUseVelocityChange", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASTrackBot), &Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_RequiredDistanceToTarget_MetaData[] = {
		{ "Category", "TrackBot" },
		{ "ModuleRelativePath", "Public/AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_RequiredDistanceToTarget = { "RequiredDistanceToTarget", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, RequiredDistanceToTarget), METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_RequiredDistanceToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_RequiredDistanceToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "TrackBot" },
		{ "ModuleRelativePath", "Public/AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplosionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "TrackBot" },
		{ "Comment", "//?\xcb\xba???\xd0\xa1???\xcb\xba??\xeb\xbe\xb6\n" },
		{ "ModuleRelativePath", "Public/AI/STrackBot.h" },
		{ "ToolTip", "?\xcb\xba???\xd0\xa1???\xcb\xba??\xeb\xbe\xb6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, Damage), METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTrackBot_Statics::NewProp_DamageRadius_MetaData[] = {
		{ "Category", "TrackBot" },
		{ "ModuleRelativePath", "Public/AI/STrackBot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTrackBot_Statics::NewProp_DamageRadius = { "DamageRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTrackBot, DamageRadius), METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::NewProp_DamageRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::NewProp_DamageRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTrackBot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_BotMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_HealthComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_MovementForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_bUseVelocityChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_RequiredDistanceToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_ExplosionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTrackBot_Statics::NewProp_DamageRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTrackBot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTrackBot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTrackBot_Statics::ClassParams = {
		&ASTrackBot::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASTrackBot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTrackBot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTrackBot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTrackBot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTrackBot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTrackBot, 573874097);
	template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<ASTrackBot>()
	{
		return ASTrackBot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTrackBot(Z_Construct_UClass_ASTrackBot, &ASTrackBot::StaticClass, TEXT("/Script/CounterStrike_DEMO"), TEXT("ASTrackBot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTrackBot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
