// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupActor.generated.h"

class USphereComponent;
class UDecalComponent;
class APowerupActor;

UCLASS()
class COUNTERSTRIKE_DEMO_API APickupActor : public AActor
{
	GENERATED_BODY()
	
public:	

protected:
	UPROPERTY(VisibleAnywhere, Category = "Items")
	USphereComponent* SphereComp;
	UPROPERTY(VisibleAnywhere, Category = "Items")
	UDecalComponent* DecalComp;
	//����Powerup������Ա�������ٴ����ɸ���(EditInstanceOnlyΪ���ԶԾ���ʵ���������õ����δ�)
	UPROPERTY(EditInstanceOnly, Category = "PickupActor")
	TSubclassOf<APowerupActor> PowerupClass;
	APowerupActor* PowerupInstance;

	UPROPERTY(EditDefaultsOnly, Category = "PickupActor")
	float CooldownDuration;
	FTimerHandle TH_RespawnTimer;

public:	
	// Sets default values for this actor's properties
	APickupActor();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void Respawn();
};
