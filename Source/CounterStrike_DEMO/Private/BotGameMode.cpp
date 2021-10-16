// Fill out your copyright notice in the Description page of Project Settings.


#include "BotGameMode.h"
#include "TimerManager.h"

ABotGameMode::ABotGameMode()
{
	TimeBetweenWaves = 2.f;
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
	PorpareForNextWave();
}

void ABotGameMode::PorpareForNextWave()
{
	FTimerHandle TH_NextWaveStart;
	GetWorldTimerManager().SetTimer(TH_NextWaveStart, this, &ABotGameMode::StartWave, TimeBetweenWaves, false);
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
