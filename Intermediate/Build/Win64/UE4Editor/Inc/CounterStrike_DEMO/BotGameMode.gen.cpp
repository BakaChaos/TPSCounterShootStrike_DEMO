// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CounterStrike_DEMO/Public/BotGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotGameMode() {}
// Cross Module References
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ABotGameMode_NoRegister();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ABotGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CounterStrike_DEMO();
// End Cross Module References
	void ABotGameMode::StaticRegisterNativesABotGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABotGameMode_NoRegister()
	{
		return ABotGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABotGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABotGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CounterStrike_DEMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BotGameMode.h" },
		{ "ModuleRelativePath", "Public/BotGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABotGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABotGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABotGameMode_Statics::ClassParams = {
		&ABotGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABotGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABotGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABotGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABotGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABotGameMode, 1145605982);
	template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<ABotGameMode>()
	{
		return ABotGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABotGameMode(Z_Construct_UClass_ABotGameMode, &ABotGameMode::StaticClass, TEXT("/Script/CounterStrike_DEMO"), TEXT("ABotGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABotGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
