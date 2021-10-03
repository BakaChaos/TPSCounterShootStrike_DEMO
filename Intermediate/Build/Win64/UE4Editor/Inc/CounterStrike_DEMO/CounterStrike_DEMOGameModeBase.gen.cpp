// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CounterStrike_DEMO/CounterStrike_DEMOGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCounterStrike_DEMOGameModeBase() {}
// Cross Module References
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ACounterStrike_DEMOGameModeBase_NoRegister();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ACounterStrike_DEMOGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CounterStrike_DEMO();
// End Cross Module References
	void ACounterStrike_DEMOGameModeBase::StaticRegisterNativesACounterStrike_DEMOGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACounterStrike_DEMOGameModeBase_NoRegister()
	{
		return ACounterStrike_DEMOGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACounterStrike_DEMOGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACounterStrike_DEMOGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CounterStrike_DEMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACounterStrike_DEMOGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CounterStrike_DEMOGameModeBase.h" },
		{ "ModuleRelativePath", "CounterStrike_DEMOGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACounterStrike_DEMOGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACounterStrike_DEMOGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACounterStrike_DEMOGameModeBase_Statics::ClassParams = {
		&ACounterStrike_DEMOGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACounterStrike_DEMOGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACounterStrike_DEMOGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACounterStrike_DEMOGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACounterStrike_DEMOGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACounterStrike_DEMOGameModeBase, 1553502486);
	template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<ACounterStrike_DEMOGameModeBase>()
	{
		return ACounterStrike_DEMOGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACounterStrike_DEMOGameModeBase(Z_Construct_UClass_ACounterStrike_DEMOGameModeBase, &ACounterStrike_DEMOGameModeBase::StaticClass, TEXT("/Script/CounterStrike_DEMO"), TEXT("ACounterStrike_DEMOGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACounterStrike_DEMOGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
