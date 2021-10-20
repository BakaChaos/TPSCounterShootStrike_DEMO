// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupItem.generated.h"

class USphereComponent;

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

public:	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this actor's properties
	APickupItem();

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
