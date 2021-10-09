// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CounterStrike_DEMO/Public/Weapon_FRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_FRifle() {}
// Cross Module References
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_AWeapon_FRifle_NoRegister();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_AWeapon_FRifle();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_CounterStrike_DEMO();
// End Cross Module References
	void AWeapon_FRifle::StaticRegisterNativesAWeapon_FRifle()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_FRifle_NoRegister()
	{
		return AWeapon_FRifle::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_FRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_FRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CounterStrike_DEMO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_FRifle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon_FRifle.h" },
		{ "ModuleRelativePath", "Public/Weapon_FRifle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_FRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_FRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_FRifle_Statics::ClassParams = {
		&AWeapon_FRifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_FRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_FRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_FRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_FRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_FRifle, 455042309);
	template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<AWeapon_FRifle>()
	{
		return AWeapon_FRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_FRifle(Z_Construct_UClass_AWeapon_FRifle, &AWeapon_FRifle::StaticClass, TEXT("/Script/CounterStrike_DEMO"), TEXT("AWeapon_FRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_FRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
