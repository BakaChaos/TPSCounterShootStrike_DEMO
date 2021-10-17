// Fill out your copyright notice in the Description page of Project Settings.


#include "BotGameMode.h"
#include "TimerManager.h"
#include "EngineUtils.h"
#include "HealthComponent.h"

ABotGameMode::ABotGameMode()
{
	TimeBetweenWaves = 2.f;
	//设置更新频率为一秒一次
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.f;
}

void ABotGameMode::StartPlay()
{
	Super::StartPlay();
	PorpareForNextWave();
}

void ABotGameMode::StartWave()
{
	WaveCount++;
	NumberOfBotToSpawn = 2 * WaveCount;
	GetWorldTimerManager().SetTimer(TH_BotSpawner, this, &ABotGameMode::SpawnBotTimerElapsed, 1.f, true, 0.f);
}

void ABotGameMode::EndWave()
{
	GetWorldTimerManager().ClearTimer(TH_BotSpawner);
}

void ABotGameMode::PorpareForNextWave()
{
	GetWorldTimerManager().SetTimer(TH_NextWaveStart, this, &ABotGameMode::StartWave, TimeBetweenWaves, false);
}

void ABotGameMode::CheckWaveState()
{
	//检查是否有待生成的机器人，或是否在准备生成下一波机器人
	bool IsPerparingForWave = GetWorldTimerManager().IsTimerActive(TH_NextWaveStart);
	if (NumberOfBotToSpawn > 0 || IsPerparingForWave)
	{
		return;
	}
	bool bIsAnyBotAlive = false;

	//检查场上是否还有存活的机器人，无则准备第二次生成
	for (TActorIterator<APawn> It(GetWorld()); It; ++It)
	{
		APawn* NowPawn = *It;
		if (NowPawn == nullptr || NowPawn->IsPlayerControlled())
		{
			continue;
		}
		UHealthComponent* NowHealComp = Cast<UHealthComponent>(NowPawn->GetComponentByClass(UHealthComponent::StaticClass()));
		if (NowHealComp && NowHealComp->GetHealth() > 0.f)
		{
			bIsAnyBotAlive = true;
			break;
		}
	}
	if (!bIsAnyBotAlive)
	{
		PorpareForNextWave();
	}
}

void ABotGameMode::SpawnBotTimerElapsed()
{
	SpawnNewBot();
	NumberOfBotToSpawn--;
	if (NumberOfBotToSpawn <= 0)
	{
		EndWave();
	}
}

void ABotGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	CheckWaveState();
}
