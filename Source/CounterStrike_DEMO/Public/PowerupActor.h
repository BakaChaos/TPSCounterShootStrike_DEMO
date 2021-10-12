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
	//�����ĸ���ʱ��͸��´���
	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	float PowerupInterval;
	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	int32 TotalNumOfTicks;
	//�ѱ����¹��Ĵ���
	int32 TicksProcessed;
	FTimerHandle TH_PowerupTick;

public:
	// Sets default values for this actor's properties
	APowerupActor();

	void ActivatePowerup();
	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnActivated();
	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnExpired();
	//���ڸ���Ч����ʱ����õĺ���
	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnPowerupTicked();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnTickPowerup();
};
