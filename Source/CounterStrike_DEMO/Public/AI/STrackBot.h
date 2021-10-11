// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "STrackBot.generated.h"

class UHealthComponent;

UCLASS()
class COUNTERSTRIKE_DEMO_API ASTrackBot : public APawn
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UStaticMeshComponent* BotMeshComp;
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UHealthComponent* HealthComp;

	FVector NextPathPoint;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float MovementForce;
	//�Ƿ�ʹ�����ʱ仯
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	bool bUseVelocityChange;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float RequiredDistanceToTarget;

	//�ܵ��˺�������˸�Ĳ��ʺͱ�ըЧ��
	UMaterialInstanceDynamic* MatInst;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	UParticleSystem* ExplosionEffect;

	//�˺���С���˺��뾶
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float Damage;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float DamageRadius;
	bool bExploded;

public:


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector GetNextPathPoint();

	UFUNCTION()
	void HandleTakeAnyDamage(UHealthComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	void SelfDestruct();

public:	
	// Sets default values for this pawn's properties
	ASTrackBot();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
