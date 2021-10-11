// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

class UParticleSystem;
class USkeletalMeshComponent;
class UDamageType;
class USoundBase;

USTRUCT()
struct FHitScanTrace
{
	GENERATED_BODY()

public:
	//此处需要在.build.cs里包含"PhysicsCore"(物理表面在新版中已被设成模块)
	UPROPERTY()
	TEnumAsByte<EPhysicalSurface> SurfaceType;
	UPROPERTY()
	FVector_NetQuantize TraceTo;
};

UCLASS()
class COUNTERSTRIKE_DEMO_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();
	//子弹系统
	int DefaultAmmo;
	int DefaultMag;
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	int ActualMag;
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	int ActualAmmo;
	//换弹值(暴露给所持有的character)
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	float TimeOfReload;
	bool bReload;

	//后坐力
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	float Recoil;

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

	//网络复制武器特效
	UPROPERTY(ReplicatedUsing = OnRep_HitScanTrace)
	FHitScanTrace HitScanTrace;

// 	FTimeline TL_Recoil;
// 	FTimeline TL_ReturnRecoil;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void Fire();

	void PlayFireImpact(EPhysicalSurface SurfaceType, FVector ImpactPoint);
	void PlayFireEffect(FVector TraceEndPoint);
/*	void PlayRecoil(float Recoil);*/

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFire();

	UFUNCTION()
	void OnRep_HitScanTrace();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
