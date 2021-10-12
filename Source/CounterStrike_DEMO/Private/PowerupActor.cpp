// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerupActor.h"
#include "PickupActor.h"

// Sets default values
APowerupActor::APowerupActor()
{
	PowerupInterval = 0.f;
	TotalNumOfTicks = 0;

	TicksProcessed = 0;
}

// Called when the game starts or when spawned
void APowerupActor::BeginPlay()
{
	Super::BeginPlay();

}

void APowerupActor::OnTickPowerup()
{
	TicksProcessed++;
	OnPowerupTicked();
	if (TicksProcessed >= TotalNumOfTicks)
	{
		OnExpired();
		GetWorldTimerManager().ClearTimer(TH_PowerupTick);
	}
}

void APowerupActor::ActivatePowerup()
{

	if (PowerupInterval > 0.f)
	{
		GetWorldTimerManager().SetTimer(TH_PowerupTick, this, &APowerupActor::OnTickPowerup, PowerupInterval, true, 0.f);
	}
	else
	{
		//如果不设置时间则认为是马上生效的物品
		OnTickPowerup();
	}
}


