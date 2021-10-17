// Fill out your copyright notice in the Description page of Project Settings.


#include "BotGameMode.h"
#include "TimerManager.h"
#include "EngineUtils.h"
#include "HealthComponent.h"

ABotGameMode::ABotGameMode()
{
	TimeBetweenWaves = 2.f;
	//���ø���Ƶ��Ϊһ��һ��
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
	//����Ƿ��д����ɵĻ����ˣ����Ƿ���׼��������һ��������
	bool IsPerparingForWave = GetWorldTimerManager().IsTimerActive(TH_NextWaveStart);
	if (NumberOfBotToSpawn > 0 || IsPerparingForWave)
	{
		return;
	}
	bool bIsAnyBotAlive = false;

	//��鳡���Ƿ��д��Ļ����ˣ�����׼���ڶ�������
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
