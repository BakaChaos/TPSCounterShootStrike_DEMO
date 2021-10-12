// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/STrackBot.h"
#include "PlayerCharacter.h"
#include "NavigationPath.h" 
#include "NavigationSystem.h"
#include "HealthComponent.h"
#include "Sound/SoundCue.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ASTrackBot::ASTrackBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseVelocityChange = true;
	RequiredDistanceToTarget = 100.f;
	MovementForce = 1000;
	DamageRadius = 200.f;
	SelfDamageInteval = 0.25f;
	Damage = 40.f;

	BotMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = BotMeshComp;
	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("HealComp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ASTrackBot::HandleTakeAnyDamage);
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetSphereRadius(DamageRadius);
	SphereComp->SetupAttachment(RootComponent);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	BotMeshComp->SetSimulatePhysics(true);
	//ʹmesh���ܹ�Ӱ�쵼��
	BotMeshComp->SetCanEverAffectNavigation(false);
}

// Called when the game starts or when spawned
void ASTrackBot::BeginPlay()
{
	Super::BeginPlay();
	
	//�ҵ��ƶ�����λ��
	NextPathPoint = GetNextPathPoint();
}

FVector ASTrackBot::GetNextPathPoint()
{
	ACharacter* PlayPawn = UGameplayStatics::GetPlayerCharacter(this, 0);

	//��Ҫ��.build.cs���������"NavigationSystem"
	UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayPawn);

	if (NavPath->PathPoints.Num() > 1)
	{
		return NavPath->PathPoints[1];
	}
	//Ѱ��·��ʧ�ܷ���ԭ��
	return GetActorLocation();
}

void ASTrackBot::HandleTakeAnyDamage(UHealthComponent* OwningHealthComp, 
	float Health, float HealthDelta, const class UDamageType* DamageType,
	class AController* InstigatedBy, AActor* DamageCauser)
{
	//����������ը�ͱ����к������Ч
	if (MatInst == nullptr)
	{
		MatInst = BotMeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, BotMeshComp->GetMaterial(0));
	}
	//������еĽڵ��LastTimeDamage
	if (MatInst)
	{
		MatInst->SetScalarParameterValue("LastTimeDamage", GetWorld()->TimeSeconds);
	}

	UE_LOG(LogTemp, Log, TEXT("Health %s of %s"), *FString::SanitizeFloat(Health), *GetName());

	if (Health <= 0.f)
	{
		SelfDestruct();
	}
}

void ASTrackBot::SelfDestruct()
{
	if (bExploded)
	{
		return;
	}
	bExploded = true;
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());

	//������ԵĶ���(����)
	TArray<AActor*> IgnoredActors;
	IgnoredActors.Add(this);

	UGameplayStatics::ApplyRadialDamage(this, Damage, GetActorLocation(), DamageRadius, nullptr, IgnoredActors, this, GetInstigatorController(), true);
	UGameplayStatics::PlaySoundAtLocation(this, ExplodeEffect, GetActorLocation());
	Destroy();
}

void ASTrackBot::DamageSelf()
{
	UGameplayStatics::ApplyDamage(this, 20.f, GetInstigatorController(), this, nullptr);
}

// Called every frame
void ASTrackBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float DistanceToTarget = (GetActorLocation() - NextPathPoint).Size();

	//�����һ��Ŀ�������λ�ò�����򱣳�����������ֱ���ӽ�Ŀ��
	if (DistanceToTarget <= RequiredDistanceToTarget)
	{
		NextPathPoint = GetNextPathPoint();
	}
	else
	{
		FVector ForceDirection = NextPathPoint - GetActorLocation();
		ForceDirection.Normalize();
		ForceDirection *= MovementForce;

		BotMeshComp->AddForce(ForceDirection, NAME_None, bUseVelocityChange);
	}
}

void ASTrackBot::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//Super::NotifyActorBeginOverlap(OtherActor);

	if (!bStartSelfDestruction)
	{
		APlayerCharacter* PlayerPawn = Cast<APlayerCharacter>(OtherActor);
		if (PlayerPawn)
		{
			//�����ص������Ϊ�������б�ը
			GetWorldTimerManager().SetTimer(TH_SelfDamage, this, &ASTrackBot::DamageSelf, SelfDamageInteval, true, 0.f);
			bStartSelfDestruction = true;

			UGameplayStatics::SpawnSoundAttached(SelfDestructSound, RootComponent);
		}
	}
}

