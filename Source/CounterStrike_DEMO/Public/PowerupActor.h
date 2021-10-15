// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerupActor.generated.h"

class APickupActor;

UCLASS()
class COUNTERSTRIKE_DEMO_API APowerupActor : public AActor
{
	GENERATED_BODY()
	
public:	


protected:
	//增幅的更新时间和更新次数
	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	float PowerupInterval;
	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	int32 TotalNumOfTicks;
	//已被更新过的次数
	int32 TicksProcessed;
	FTimerHandle TH_PowerupTick;

	//检测物品是否正在其效果
	UPROPERTY(ReplicatedUsing = OnRep_OnPowerupActive)
	bool bIsPowerupActive;

public:
	// Sets default values for this actor's properties
	APowerupActor();

	void ActivatePowerup(AActor* ActiveFor);
	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnActivated(AActor* ActiveFor);
	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnExpired();
	//当在更新效果的时候调用的函数
	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnPowerupTicked();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:

	UFUNCTION()
	void OnTickPowerup();

	UFUNCTION()
	void OnRep_OnPowerupActive();
	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnPowerupStateChanged(bool bNewIsActive);
};
