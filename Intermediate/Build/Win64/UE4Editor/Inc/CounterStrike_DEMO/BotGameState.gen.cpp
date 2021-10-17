// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CounterStrike_DEMO/Public/BotGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotGameState() {}
// Cross Module References
	COUNTERSTRIKE_DEMO_API UEnum* Z_Construct_UEnum_CounterStrike_DEMO_EWaveState();
	UPackage* Z_Construct_UPackage__Script_CounterStrike_DEMO();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ABotGameState_NoRegister();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ABotGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
// End Cross Module References
	static UEnum* EWaveState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CounterStrike_DEMO_EWaveState, Z_Construct_UPackage__Script_CounterStrike_DEMO(), TEXT("EWaveState"));
		}
		return Singleton;
	}
	template<> COUNTERSTRIKE_DEMO_API UEnum* StaticEnum<EWaveState>()
	{
		return EWaveState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWaveState(EWaveState_StaticEnum, TEXT("/Script/CounterStrike_DEMO"), TEXT("EWaveState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CounterStrike_DEMO_EWaveState_Hash() { return 2156172831U; }
	UEnum* Z_Construct_UEnum_CounterStrike_DEMO_EWaveState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CounterStrike_DEMO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWaveState"), 0, Get_Z_Construct_UEnum_CounterStrike_DEMO_EWaveState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWaveState::WaitingToStart", (int64)EWaveState::WaitingToStart },
				{ "EWaveState::WaveInProgress", (int64)EWaveState::WaveInProgress },
				{ "EWaveState::WaitingToComplete", (int64)EWaveState::WaitingToComplete },
				{ "EWaveState::WaveComplete", (int64)EWaveState::WaveComplete },
				{ "EWaveState::GameOver", (int64)EWaveState::GameOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GameOver.Name", "EWaveState::GameOver" },
				{ "ModuleRelativePath", "Public/BotGameState.h" },
				{ "WaitingToComplete.Comment", "//????????bot???\xc8\xb4?bot\xc8\xab????\xca\xa7\n" },
				{ "WaitingToComplete.Name", "EWaveState::WaitingToComplete" },
				{ "WaitingToComplete.ToolTip", "????????bot???\xc8\xb4?bot\xc8\xab????\xca\xa7" },
				{ "WaitingToStart.Name", "EWaveState::WaitingToStart" },
				{ "WaveComplete.Name", "EWaveState::WaveComplete" },
				{ "WaveInProgress.Name", "EWaveState::WaveInProgress" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CounterStrike_DEMO,
				nullptr,
				"EWaveState",
				"EWaveState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ABotGameState::execOnRep_WaveState)
	{
		P_GET_ENUM(EWaveState,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WaveState(EWaveState(Z_Param_OldState));
		P_NATIVE_END;
	}
	static FName NAME_ABotGameState_WaveStateChanged = FName(TEXT("WaveStateChanged"));
	void ABotGameState::WaveStateChanged(EWaveState NewState, EWaveState OldState)
	{
		BotGameState_eventWaveStateChanged_Parms Parms;
		Parms.NewState=NewState;
		Parms.OldState=OldState;
		ProcessEvent(FindFunctionChecked(NAME_ABotGameState_WaveStateChanged),&Parms);
	}
	void ABotGameState::StaticRegisterNativesABotGameState()
	{
		UClass* Class = ABotGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_WaveState", &ABotGameState::execOnRep_WaveState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics
	{
		struct BotGameState_eventOnRep_WaveState_Parms
		{
			EWaveState OldState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotGameState_eventOnRep_WaveState_Parms, OldState), Z_Construct_UEnum_CounterStrike_DEMO_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BotGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotGameState, nullptr, "OnRep_WaveState", nullptr, nullptr, sizeof(BotGameState_eventOnRep_WaveState_Parms), Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotGameState_OnRep_WaveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABotGameState_OnRep_WaveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotGameState_eventWaveStateChanged_Parms, NewState), Z_Construct_UEnum_CounterStrike_DEMO_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotGameState_eventWaveStateChanged_Parms, OldState), Z_Construct_UEnum_CounterStrike_DEMO_EWaveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Public/BotGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotGameState, nullptr, "WaveStateChanged", nullptr, nullptr, sizeof(BotGameState_eventWaveStateChanged_Parms), Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotGameState_WaveStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABotGameState_WaveStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABotGameState_NoRegister()
	{
		return ABotGameState::StaticClass();
	}
	struct Z_Construct_UClass_ABotGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WaveState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WaveState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABotGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CounterStrike_DEMO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABotGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABotGameState_OnRep_WaveState, "OnRep_WaveState" }, // 3738308303
		{ &Z_Construct_UFunction_ABotGameState_WaveStateChanged, "WaveStateChanged" }, // 1288185074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BotGameState.h" },
		{ "ModuleRelativePath", "Public/BotGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABotGameState_Statics::NewProp_WaveState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotGameState_Statics::NewProp_WaveState_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Public/BotGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABotGameState_Statics::NewProp_WaveState = { "WaveState", "OnRep_waveState", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotGameState, WaveState), Z_Construct_UEnum_CounterStrike_DEMO_EWaveState, METADATA_PARAMS(Z_Construct_UClass_ABotGameState_Statics::NewProp_WaveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotGameState_Statics::NewProp_WaveState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABotGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotGameState_Statics::NewProp_WaveState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotGameState_Statics::NewProp_WaveState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABotGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABotGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABotGameState_Statics::ClassParams = {
		&ABotGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABotGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABotGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABotGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABotGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABotGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABotGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABotGameState, 2936581064);
	template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<ABotGameState>()
	{
		return ABotGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABotGameState(Z_Construct_UClass_ABotGameState, &ABotGameState::StaticClass, TEXT("/Script/CounterStrike_DEMO"), TEXT("ABotGameState"), false, nullptr, nullptr, nullptr);

	void ABotGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WaveState(TEXT("WaveState"));

		const bool bIsValid = true
			&& Name_WaveState == ClassReps[(int32)ENetFields_Private::WaveState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABotGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABotGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
