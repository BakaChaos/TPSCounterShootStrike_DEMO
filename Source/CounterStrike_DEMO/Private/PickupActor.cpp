// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupActor.h"
#include "PowerupActor.h"
#include "TimerManager.h"
#include "PlayerCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"

// Sets default values
APickupActor::APickupActor()
{
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	RootComponent = SphereComp;
	DecalComp->SetupAttachment(RootComponent);

	SphereComp->SetSphereRadius(75.f);
	DecalComp->SetRelativeRotation(FRotator(90.f, 0.f, 0.f));
	DecalComp->DecalSize = FVector(64.f, 75.f, 75.f);

	CooldownDuration = 10.f;
}

// Called when the game starts or when spawned
void APickupActor::BeginPlay()
{
	Super::BeginPlay();
	
	Respawn();
}

void APickupActor::Respawn()
{
	if (PowerupClass == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("PowerupClass is nullptr in %s, please update your blueprint"), *GetName());
		return;
	}
	//�ڳ���������Powerup��actor
	FActorSpawnParameters SpawnParam;
	SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	PowerupInstance = GetWorld()->SpawnActor<APowerupActor>(PowerupClass, GetTransform(), SpawnParam);
}

void APickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (Cast<APlayerCharacter>(OtherActor))
	{
		//������������������ʩ��buff
		if (PowerupInstance)
		{
			PowerupInstance->ActivatePowerup();
			PowerupInstance = nullptr;
	
			//���ü�ʱ��ȥ�������ɸõ���
			GetWorldTimerManager().SetTimer(TH_RespawnTimer, this, &APickupActor::Respawn, CooldownDuration);
		}
	}
}

