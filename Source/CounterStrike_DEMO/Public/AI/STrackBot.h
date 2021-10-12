// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "STrackBot.generated.h"

class USoundCue;
class UHealthComponent;
class USphereComponent;

UCLASS()
class COUNTERSTRIKE_DEMO_API ASTrackBot : public APawn
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UStaticMeshComponent* BotMeshComp;
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	USphereComponent* SphereComp;
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

	//�ܵ��˺�������˸�Ĳ��ʺͱ�ըЧ��(����Ч��)
	UMaterialInstanceDynamic* MatInst;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	UParticleSystem* ExplosionEffect;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	USoundCue* SelfDestructSound;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	USoundCue* ExplodeEffect;

	//�˺���С���˺��뾶
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float Damage;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float DamageRadius;
	bool bExploded;

	//�Իٳ���
	FTimerHandle TH_SelfDamage;
	bool bStartSelfDestruction;//ȷ���Իٳ���ֻ������һ��
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float SelfDamageInteval;

public:


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector GetNextPathPoint();

	UFUNCTION()
	void HandleTakeAnyDamage(UHealthComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	void SelfDestruct();

	void DamageSelf();

public:	
	// Sets default values for this pawn's properties
	ASTrackBot();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
