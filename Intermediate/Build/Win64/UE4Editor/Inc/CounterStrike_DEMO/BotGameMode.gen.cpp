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
	COUNTERSTRIKE_DEMO_API UFunction* Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CounterStrike_DEMO();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ABotGameMode_NoRegister();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ABotGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics
	{
		struct _Script_CounterStrike_DEMO_eventOnActorKilled_Parms
		{
			AActor* VictimActor;
			AActor* KillerActor;
			AController* KillerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictimActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::NewProp_VictimActor = { "VictimActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CounterStrike_DEMO_eventOnActorKilled_Parms, VictimActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::NewProp_KillerActor = { "KillerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CounterStrike_DEMO_eventOnActorKilled_Parms, KillerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::NewProp_KillerController = { "KillerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CounterStrike_DEMO_eventOnActorKilled_Parms, KillerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::NewProp_VictimActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::NewProp_KillerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::NewProp_KillerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BotGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CounterStrike_DEMO, nullptr, "OnActorKilled__DelegateSignature", nullptr, nullptr, sizeof(_Script_CounterStrike_DEMO_eventOnActorKilled_Parms), Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_ABotGameMode_SpawnNewBot = FName(TEXT("SpawnNewBot"));
	void ABotGameMode::SpawnNewBot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABotGameMode_SpawnNewBot),NULL);
	}
	void ABotGameMode::StaticRegisterNativesABotGameMode()
	{
	}
	struct Z_Construct_UFunction_ABotGameMode_SpawnNewBot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotGameMode_SpawnNewBot_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/BotGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotGameMode_SpawnNewBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotGameMode, nullptr, "SpawnNewBot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotGameMode_SpawnNewBot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotGameMode_SpawnNewBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotGameMode_SpawnNewBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABotGameMode_SpawnNewBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABotGameMode_NoRegister()
	{
		return ABotGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABotGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenWaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenWaves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorKilled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorKilled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABotGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CounterStrike_DEMO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABotGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABotGameMode_SpawnNewBot, "SpawnNewBot" }, // 626378565
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotGameMode_Statics::NewProp_TimeBetweenWaves_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Public/BotGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABotGameMode_Statics::NewProp_TimeBetweenWaves = { "TimeBetweenWaves", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotGameMode, TimeBetweenWaves), METADATA_PARAMS(Z_Construct_UClass_ABotGameMode_Statics::NewProp_TimeBetweenWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotGameMode_Statics::NewProp_TimeBetweenWaves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotGameMode_Statics::NewProp_OnActorKilled_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "//????\xd2\xaa???\xe3\xb2\xa5???\xc5\xba?\n" },
		{ "ModuleRelativePath", "Public/BotGameMode.h" },
		{ "ToolTip", "????\xd2\xaa???\xe3\xb2\xa5???\xc5\xba?" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABotGameMode_Statics::NewProp_OnActorKilled = { "OnActorKilled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotGameMode, OnActorKilled), Z_Construct_UDelegateFunction_CounterStrike_DEMO_OnActorKilled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABotGameMode_Statics::NewProp_OnActorKilled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotGameMode_Statics::NewProp_OnActorKilled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABotGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotGameMode_Statics::NewProp_TimeBetweenWaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotGameMode_Statics::NewProp_OnActorKilled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABotGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABotGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABotGameMode_Statics::ClassParams = {
		&ABotGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABotGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABotGameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ABotGameMode, 3495058657);
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
