// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "CounterStrike_DEMO/CounterStrike_DEMO.h"

static int32 DebugWeaponDrawing = 0;
FAutoConsoleVariableRef CVARDebugWeaponDrawing(TEXT("COOP.DebugWeapons"), DebugWeaponDrawing, TEXT("Draw Debug Line For Weapons"), ECVF_Cheat);

// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RifleMeshComp"));
	RootComponent = WeaponMesh;

	MuzzleSocketName = "MuzzleSocket";
	TracerTargetName = "Target";
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWeaponBase::Fire()
{
	AActor* WeaponOwner = GetOwner();
	if (WeaponOwner)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		WeaponOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);
		//射击方向
		FVector ShootDirection = EyeRotation.Vector();
		FVector TraceEnd = EyeLocation + (ShootDirection * 10000);

		//碰撞条件
		FCollisionQueryParams ColliParams;
		ColliParams.AddIgnoredActor(WeaponOwner);
		ColliParams.AddIgnoredActor(this);
		ColliParams.bTraceComplex = true;
		ColliParams.bReturnPhysicalMaterial = true;

		FVector TraceEndPoint = TraceEnd;

		float ActualDamage = BaseDamage;

		EPhysicalSurface SurfaceType = SurfaceType_Default;

		FHitResult WeaponHit;
		if (GetWorld()->LineTraceSingleByChannel(WeaponHit, EyeLocation, TraceEndPoint, WEAPONCOLLISION, ColliParams))
		{
			AActor* HitActor = WeaponHit.GetActor();

			SurfaceType = WeaponHit.PhysMaterial.Get()->SurfaceType;

			if (SurfaceType == SURFACETYPE_FLESHVULNERABLE)
			{
				ActualDamage *= 1.25f;
			}

			//给被射中的对象加上伤害信息
			UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShootDirection, WeaponHit, WeaponOwner->GetInstigatorController(), this, DamageType);
			TraceEndPoint = WeaponHit.ImpactPoint;
		}
		PlayFireEffect(TraceEndPoint);
		PlayFireImpact(SurfaceType, TraceEndPoint);

		//获得最后一次的开火时间
		LastTimeFire = GetWorld()->TimeSeconds;
	}
}

void AWeaponBase::PlayFireEffect(FVector TraceEndPoint)
{
	FVector MuzzleLocation = WeaponMesh->GetSocketLocation(MuzzleSocketName);
	if (MuzzleEffect)
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, WeaponMesh, MuzzleSocketName);
	}
	if (TracerEffect)
	{
		UParticleSystemComponent* TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TracerEffect, MuzzleLocation);
		if (TracerComp)
		{
			TracerComp->SetVectorParameter(TracerTargetName, TraceEndPoint);
		}
	}

	APawn* PlayOwner = Cast<APawn>(GetOwner());
	if (PlayOwner)
	{
		APlayerController* PC = Cast<APlayerController>(PlayOwner->GetController());
		if (PC)
		{
			PC->ClientStartCameraShake(FireCameraShake);
		}
	}

	if (DebugWeaponDrawing > 0)
	{
		DrawDebugLine(GetWorld(), MuzzleLocation, TraceEndPoint, FColor::White, false, 1.0f, 0, 1.0f);
	}
}

void AWeaponBase::PlayFireImpact(EPhysicalSurface SurfaceType, FVector ImpactPoint)
{
	//需要创建PhysicalMaterial，再去玩家的Physics绑定对应的Material
	FVector MuzzleLocation = WeaponMesh->GetSocketLocation(MuzzleSocketName);
	UParticleSystem* SurfaceSelect = nullptr;
	switch (SurfaceType)
	{
	case SURFACETYPE_FLESHDEFAULT :
	case SURFACETYPE_FLESHVULNERABLE :
		SurfaceSelect = FleshImapctEffect;
		break;
	default:
		SurfaceSelect = DefaultImpactEffect;
		break;
	}
	if (SurfaceSelect)
	{
		FVector ShootDirection = ImpactPoint - MuzzleLocation;
		ShootDirection.Normalize();
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SurfaceSelect, ImpactPoint, ShootDirection.Rotation());
	}
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

