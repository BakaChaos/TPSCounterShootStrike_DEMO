// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

class UParticleSystem;
class USkeletalMeshComponent;
class UDamageType;

UCLASS()
class COUNTERSTRIKE_DEMO_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

protected:
	//武器基本属性
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
	USkeletalMeshComponent* WeaponMesh;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName MuzzleSocketName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> DamageType;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName TracerTargetName;
	UPROPERTY(BlueprintReadWrite, Category = "Weapon")
	float BaseDamage;

	//武器射速
	FTimerHandle TimerHandle_TimeBetweenFire;
	float LastTimeFire;
	float TimeBetweenFire;
	UPROPERTY(BlueprintReadWrite, Category = "Weapon")
	float RateOfFire;

	//武器特效
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* MuzzleEffect;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* TracerEffect;
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<UCameraShakeBase> FireCameraShake;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	USoundBase* WeaponSound;
	//击中物体的特效
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* DefaultImpactEffect;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* FleshImapctEffect;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int DefaultAmmo;
	int DefaultMag;
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	int ActualMag;
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	int ActualAmmo;
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	float TimeOfReload;
	bool bReload;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void Fire();

	void PlayFireImpact(EPhysicalSurface SurfaceType, FVector ImpactPoint);
	void PlayFireEffect(FVector TraceEndPoint);
};
