// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerupActor.h"
#include "PickupActor.h"
#include "Net/UnrealNetwork.h"

// Sets default values
APowerupActor::APowerupActor()
{
	PowerupInterval = 0.f;
	TotalNumOfTicks = 0;

	TicksProcessed = 0;

	bIsPowerupActive = false;

	SetReplicates(true);
}

void APowerupActor::OnTickPowerup()
{
	TicksProcessed++;
	OnPowerupTicked();
	if (TicksProcessed >= TotalNumOfTicks)
	{
		OnExpired();

		bIsPowerupActive = false;
		OnRep_OnPowerupActive();

		GetWorldTimerManager().ClearTimer(TH_PowerupTick);
	}
}

//�˺������ᱻ����������
void APowerupActor::OnRep_OnPowerupActive()
{
	OnPowerupStateChanged(bIsPowerupActive);
}

void APowerupActor::ActivatePowerup(AActor* ActiveFor)
{
	OnActivated(ActiveFor);
	bIsPowerupActive = true;
	OnRep_OnPowerupActive();

	if (PowerupInterval > 0.f)
	{
		GetWorldTimerManager().SetTimer(TH_PowerupTick, this, &APowerupActor::OnTickPowerup, PowerupInterval, true);
	}
	else
	{
		//���������ʱ������Ϊ��������Ч����Ʒ
		OnTickPowerup();
	}
}

void APowerupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(APowerupActor, bIsPowerupActive);
}

