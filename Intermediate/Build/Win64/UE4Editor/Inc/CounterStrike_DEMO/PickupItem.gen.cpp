// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CounterStrike_DEMO/Public/PickupItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupItem() {}
// Cross Module References
	COUNTERSTRIKE_DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FPickItem();
	UPackage* Z_Construct_UPackage__Script_CounterStrike_DEMO();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_APickupItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COUNTERSTRIKE_DEMO_API UScriptStruct* Z_Construct_UScriptStruct_FCraftingInfo();
	COUNTERSTRIKE_DEMO_API UClass* Z_Construct_UClass_APickupItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FPickItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPickItem cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPickItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COUNTERSTRIKE_DEMO_API uint32 Get_Z_Construct_UScriptStruct_FPickItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPickItem, Z_Construct_UPackage__Script_CounterStrike_DEMO(), TEXT("PickItem"), sizeof(FPickItem), Get_Z_Construct_UScriptStruct_FPickItem_Hash());
	}
	return Singleton;
}
template<> COUNTERSTRIKE_DEMO_API UScriptStruct* StaticStruct<FPickItem>()
{
	return FPickItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPickItem(FPickItem::StaticStruct, TEXT("/Script/CounterStrike_DEMO"), TEXT("PickItem"), false, nullptr, nullptr);
static struct FScriptStruct_CounterStrike_DEMO_StaticRegisterNativesFPickItem
{
	FScriptStruct_CounterStrike_DEMO_StaticRegisterNativesFPickItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PickItem")),new UScriptStruct::TCppStructOps<FPickItem>);
	}
} ScriptStruct_CounterStrike_DEMO_StaticRegisterNativesFPickItem;
	struct Z_Construct_UScriptStruct_FPickItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPickUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemPickUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemThumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanUsed_MetaData[];
#endif
		static void NewProp_bCanUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanUsed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CraftCombinations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CraftCombinations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CraftCombinations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDestroy_MetaData[];
#endif
		static void NewProp_bCanDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDestroy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//FTableRowBase????\xd3\xa6??DataTable.h??include????\xd3\xa6????.h??\n" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
		{ "ToolTip", "FTableRowBase????\xd3\xa6??DataTable.h??include????\xd3\xa6????.h??" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPickItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPickItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPickItem, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemPickUp_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemPickUp = { "ItemPickUp", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPickItem, ItemPickUp), Z_Construct_UClass_APickupItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemPickUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemPickUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemAction_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemAction = { "ItemAction", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPickItem, ItemAction), METADATA_PARAMS(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPickItem, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPickItem, ItemDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemValue_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemValue = { "ItemValue", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPickItem, ItemValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemThumbnail_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemThumbnail = { "ItemThumbnail", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPickItem, ItemThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanUsed_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanUsed_SetBit(void* Obj)
	{
		((FPickItem*)Obj)->bCanUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanUsed = { "bCanUsed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPickItem), &Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanUsed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanUsed_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_CraftCombinations_Inner = { "CraftCombinations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCraftingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_CraftCombinations_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_CraftCombinations = { "CraftCombinations", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPickItem, CraftCombinations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_CraftCombinations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_CraftCombinations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanDestroy_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanDestroy_SetBit(void* Obj)
	{
		((FPickItem*)Obj)->bCanDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanDestroy = { "bCanDestroy", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPickItem), &Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanDestroy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanDestroy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPickItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemPickUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_ItemThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_CraftCombinations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_CraftCombinations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickItem_Statics::NewProp_bCanDestroy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPickItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CounterStrike_DEMO,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PickItem",
		sizeof(FPickItem),
		alignof(FPickItem),
		Z_Construct_UScriptStruct_FPickItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPickItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPickItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPickItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CounterStrike_DEMO();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PickItem"), sizeof(FPickItem), Get_Z_Construct_UScriptStruct_FPickItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPickItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPickItem_Hash() { return 4017741410U; }

static_assert(std::is_polymorphic<FCraftingInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCraftingInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCraftingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COUNTERSTRIKE_DEMO_API uint32 Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCraftingInfo, Z_Construct_UPackage__Script_CounterStrike_DEMO(), TEXT("CraftingInfo"), sizeof(FCraftingInfo), Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash());
	}
	return Singleton;
}
template<> COUNTERSTRIKE_DEMO_API UScriptStruct* StaticStruct<FCraftingInfo>()
{
	return FCraftingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCraftingInfo(FCraftingInfo::StaticStruct, TEXT("/Script/CounterStrike_DEMO"), TEXT("CraftingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CounterStrike_DEMO_StaticRegisterNativesFCraftingInfo
{
	FScriptStruct_CounterStrike_DEMO_StaticRegisterNativesFCraftingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CraftingInfo")),new UScriptStruct::TCppStructOps<FCraftingInfo>);
	}
} ScriptStruct_CounterStrike_DEMO_StaticRegisterNativesFCraftingInfo;
	struct Z_Construct_UScriptStruct_FCraftingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProductID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyItemA_MetaData[];
#endif
		static void NewProp_bDestroyItemA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyItemA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyItemB_MetaData[];
#endif
		static void NewProp_bDestroyItemB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyItemB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCraftingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ComponentID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ComponentID = { "ComponentID", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCraftingInfo, ComponentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ComponentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ProductID_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//?\xc9\xb1??\xda\xba\xcf\xb5???\xc6\xb7??id\n" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
		{ "ToolTip", "?\xc9\xb1??\xda\xba\xcf\xb5???\xc6\xb7??id" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ProductID = { "ProductID", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCraftingInfo, ProductID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "//?\xc7\xb7?????????\xc6\xb7\n" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
		{ "ToolTip", "?\xc7\xb7?????????\xc6\xb7" },
	};
#endif
	void Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA_SetBit(void* Obj)
	{
		((FCraftingInfo*)Obj)->bDestroyItemA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA = { "bDestroyItemA", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCraftingInfo), &Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB_SetBit(void* Obj)
	{
		((FCraftingInfo*)Obj)->bDestroyItemB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB = { "bDestroyItemB", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCraftingInfo), &Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCraftingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ComponentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CounterStrike_DEMO,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CraftingInfo",
		sizeof(FCraftingInfo),
		alignof(FCraftingInfo),
		Z_Construct_UScriptStruct_FCraftingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCraftingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CounterStrike_DEMO();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CraftingInfo"), sizeof(FCraftingInfo), Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCraftingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash() { return 2214473153U; }
	DEFINE_FUNCTION(APickupItem::execGetUserText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUserText();
		P_NATIVE_END;
	}
	static FName NAME_APickupItem_HiddenWidget = FName(TEXT("HiddenWidget"));
	void APickupItem::HiddenWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickupItem_HiddenWidget),NULL);
	}
	static FName NAME_APickupItem_OnUsed = FName(TEXT("OnUsed"));
	void APickupItem::OnUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickupItem_OnUsed),NULL);
	}
	static FName NAME_APickupItem_ShowWidget = FName(TEXT("ShowWidget"));
	void APickupItem::ShowWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickupItem_ShowWidget),NULL);
	}
	void APickupItem::StaticRegisterNativesAPickupItem()
	{
		UClass* Class = APickupItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserText", &APickupItem::execGetUserText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupItem_GetUserText_Statics
	{
		struct PickupItem_eventGetUserText_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APickupItem_GetUserText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupItem_eventGetUserText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupItem_GetUserText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupItem_GetUserText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_GetUserText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_GetUserText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItem, nullptr, "GetUserText", nullptr, nullptr, sizeof(PickupItem_eventGetUserText_Parms), Z_Construct_UFunction_APickupItem_GetUserText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_GetUserText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_GetUserText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_GetUserText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItem_GetUserText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupItem_GetUserText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupItem_HiddenWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_HiddenWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_HiddenWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItem, nullptr, "HiddenWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_HiddenWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_HiddenWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItem_HiddenWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupItem_HiddenWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupItem_OnUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_OnUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_OnUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItem, nullptr, "OnUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_OnUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_OnUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItem_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupItem_OnUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupItem_ShowWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_ShowWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_ShowWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItem, nullptr, "ShowWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_ShowWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_ShowWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItem_ShowWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupItem_ShowWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickupItem_NoRegister()
	{
		return APickupItem::StaticClass();
	}
	struct Z_Construct_UClass_APickupItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DoAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CounterStrike_DEMO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupItem_GetUserText, "GetUserText" }, // 3439521857
		{ &Z_Construct_UFunction_APickupItem_HiddenWidget, "HiddenWidget" }, // 3633983863
		{ &Z_Construct_UFunction_APickupItem_OnUsed, "OnUsed" }, // 1021044571
		{ &Z_Construct_UFunction_APickupItem_ShowWidget, "ShowWidget" }, // 2958124011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupItem.h" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupItem, ItemName), METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_DoAction_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_DoAction = { "DoAction", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupItem, DoAction), METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_DoAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_DoAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_SphereMesh_MetaData[] = {
		{ "Category", "Items" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_SphereMesh = { "SphereMesh", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupItem, SphereMesh), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_SphereMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_SphereMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupItem, ItemID), METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_ItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_DoAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_SphereMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_ItemID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupItem_Statics::ClassParams = {
		&APickupItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupItem, 1742615535);
	template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<APickupItem>()
	{
		return APickupItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupItem(Z_Construct_UClass_APickupItem, &APickupItem::StaticClass, TEXT("/Script/CounterStrike_DEMO"), TEXT("APickupItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
