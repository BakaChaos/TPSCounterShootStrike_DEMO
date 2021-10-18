// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CounterStrike_DEMO/Public/BotPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotPlayerState() {}
// Cross Module References
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ABotPlayerState_NoRegister();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_ABotPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_CounterStrike_DEMO();
// End Cross Module References
	DEFINE_FUNCTION(ABotPlayerState::execAddScore)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScoreDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScore(Z_Param_ScoreDelta);
		P_NATIVE_END;
	}
	void ABotPlayerState::StaticRegisterNativesABotPlayerState()
	{
		UClass* Class = ABotPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScore", &ABotPlayerState::execAddScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABotPlayerState_AddScore_Statics
	{
		struct BotPlayerState_eventAddScore_Parms
		{
			float ScoreDelta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABotPlayerState_AddScore_Statics::NewProp_ScoreDelta = { "ScoreDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotPlayerState_eventAddScore_Parms, ScoreDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABotPlayerState_AddScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotPlayerState_AddScore_Statics::NewProp_ScoreDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotPlayerState_AddScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Public/BotPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotPlayerState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotPlayerState, nullptr, "AddScore", nullptr, nullptr, sizeof(BotPlayerState_eventAddScore_Parms), Z_Construct_UFunction_ABotPlayerState_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotPlayerState_AddScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotPlayerState_AddScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotPlayerState_AddScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotPlayerState_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABotPlayerState_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABotPlayerState_NoRegister()
	{
		return ABotPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ABotPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABotPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_CounterStrike_DEMO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABotPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABotPlayerState_AddScore, "AddScore" }, // 3861191057
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BotPlayerState.h" },
		{ "ModuleRelativePath", "Public/BotPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABotPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABotPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABotPlayerState_Statics::ClassParams = {
		&ABotPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABotPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABotPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABotPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABotPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABotPlayerState, 516085077);
	template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<ABotPlayerState>()
	{
		return ABotPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABotPlayerState(Z_Construct_UClass_ABotPlayerState, &ABotPlayerState::StaticClass, TEXT("/Script/CounterStrike_DEMO"), TEXT("ABotPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABotPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
