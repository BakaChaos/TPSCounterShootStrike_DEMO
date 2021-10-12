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
	//是否使用速率变化
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	bool bUseVelocityChange;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float RequiredDistanceToTarget;

	//受到伤害进行闪烁的材质和爆炸效果(声音效果)
	UMaterialInstanceDynamic* MatInst;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	UParticleSystem* ExplosionEffect;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	USoundCue* SelfDestructSound;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	USoundCue* ExplodeEffect;

	//伤害大小和伤害半径
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float Damage;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float DamageRadius;
	bool bExploded;

	//自毁程序
	FTimerHandle TH_SelfDamage;
	bool bStartSelfDestruction;//确保自毁程序只会启动一次
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
