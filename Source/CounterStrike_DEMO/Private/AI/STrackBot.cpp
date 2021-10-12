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
	//使mesh不能够影响导航
	BotMeshComp->SetCanEverAffectNavigation(false);
}

// Called when the game starts or when spawned
void ASTrackBot::BeginPlay()
{
	Super::BeginPlay();
	
	//找到移动起点的位置
	NextPathPoint = GetNextPathPoint();
}

FVector ASTrackBot::GetNextPathPoint()
{
	ACharacter* PlayPawn = UGameplayStatics::GetPlayerCharacter(this, 0);

	//需要在.build.cs里添加依赖"NavigationSystem"
	UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayPawn);

	if (NavPath->PathPoints.Num() > 1)
	{
		return NavPath->PathPoints[1];
	}
	//寻找路线失败返回原点
	return GetActorLocation();
}

void ASTrackBot::HandleTakeAnyDamage(UHealthComponent* OwningHealthComp, 
	float Health, float HealthDelta, const class UDamageType* DamageType,
	class AController* InstigatedBy, AActor* DamageCauser)
{
	//创建死亡后爆炸和被击中后产生特效
	if (MatInst == nullptr)
	{
		MatInst = BotMeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, BotMeshComp->GetMaterial(0));
	}
	//与材质中的节点绑定LastTimeDamage
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

	//加入忽略的对象(自身)
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

	//如果下一个目标点和玩家位置不相近则保持增加作用力直到接近目标
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
			//发生重叠后如果为玩家则进行爆炸
			GetWorldTimerManager().SetTimer(TH_SelfDamage, this, &ASTrackBot::DamageSelf, SelfDamageInteval, true, 0.f);
			bStartSelfDestruction = true;

			UGameplayStatics::SpawnSoundAttached(SelfDestructSound, RootComponent);
		}
	}
}

