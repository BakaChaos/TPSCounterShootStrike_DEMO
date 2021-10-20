// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h" 
#include "PickupItem.generated.h"

class USphereComponent;

USTRUCT(BlueprintType)
struct FCraftingInfo :public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FName ComponentID;//可被融合的物品的id
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FName ProductID;
	//是否销毁子物品
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		bool bDestroyItemA;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		bool bDestroyItemB;
};

//FTableRowBase所对应的DataTable.h的include声名应放在.h中
USTRUCT(BlueprintType)
struct FPickItem :public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	FPickItem()
	{
		ItemName = FText::FromString("ItemName");
		ItemAction = FText::FromString("ItemUse");
		ItemDescription = FText::FromString("Simple Description Of Item");
		ItemValue = 10;
	}
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FName ItemID;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		TSubclassOf<class APickupItem> ItemPickUp;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FText ItemAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FText ItemName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FText ItemDescription;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		int32 ItemValue;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		UTexture2D* ItemThumbnail;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		bool bCanUsed;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		TArray<FCraftingInfo> CraftCombinations;

	bool operator == (const FPickItem& Item) const
	{
		return ItemID == Item.ItemID ? true : false;

	}
};

UCLASS()
class COUNTERSTRIKE_DEMO_API APickupItem : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Items")
	FString ItemName;
	UPROPERTY(EditDefaultsOnly, Category = "Items")
	FString DoAction;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Items")
	USphereComponent* SphereMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Items")
	FName ItemID;

public:	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this actor's properties
	APickupItem();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Pickup")
	void OnUsed();

	UFUNCTION(BlueprintCallable, Category = "Pickup")
	FString GetUserText() const;

	UFUNCTION(BlueprintImplementableEvent, Category = "Pickup")
	void ShowWidget();
	UFUNCTION(BlueprintImplementableEvent, Category = "Pickup")
	void HiddenWidget();
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
