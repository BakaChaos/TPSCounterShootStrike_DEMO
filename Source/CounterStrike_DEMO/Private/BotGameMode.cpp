// Fill out your copyright notice in the Description page of Project Settings.


#include "BotGameMode.h"
#include "TimerManager.h"
#include "EngineUtils.h"
#include "BotGameState.h"
#include "BotPlayerState.h"
#include "HealthComponent.h"
#include "PickupItem.h"
#include "Engine/DataTable.h"

ABotGameMode::ABotGameMode()
{
	TimeBetweenWaves = 2.f;
	//设置更新频率为一秒一次
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.f;

	//设置默认的游戏状态
	GameStateClass = ABotGameState::StaticClass();
	PlayerStateClass = ABotPlayerState::StaticClass();
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

	SetWaveState(EWaveState::WaveInProgress);
}

void ABotGameMode::EndWave()
{
	GetWorldTimerManager().ClearTimer(TH_BotSpawner);
	SetWaveState(EWaveState::WaitingToComplete);
}

void ABotGameMode::PorpareForNextWave()
{
	GetWorldTimerManager().SetTimer(TH_NextWaveStart, this, &ABotGameMode::StartWave, TimeBetweenWaves, false);
	SetWaveState(EWaveState::WaitingToComplete);
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
		SetWaveState(EWaveState::WaveComplete);
		PorpareForNextWave();
	}
}

void ABotGameMode::CheckAnyPlayerAlive()
{
	for (TActorIterator<APlayerController> It(GetWorld()); It; ++It)
	{
		APlayerController* PC = *It;
		if (PC && PC->GetPawn())
		{
			APawn* PlayerPawn = PC->GetPawn();
			UHealthComponent* PlayerHealthComp = Cast<UHealthComponent>(PlayerPawn->GetComponentByClass(UHealthComponent::StaticClass()));
			//ensure:确保的确获得了玩家health组件，如果没有则会产生断点
			if (ensure(PlayerHealthComp) && PlayerHealthComp->GetHealth() > 0.f)
			{
				//如果还有玩家有血量，则直接退出函数
				return;
			}
		}
	}
	GameOver();
}

void ABotGameMode::GameOver()
{
	EndWave();
	SetWaveState(EWaveState::GameOver);
	//游戏结束，提示玩家
	UE_LOG(LogTemp, Log, TEXT("GameOver!"));
}

void ABotGameMode::SetWaveState(EWaveState NewState)
{
	ABotGameState* BotGS = GetGameState<ABotGameState>();
	if (ensureAlways(BotGS))
	{
		BotGS->SetWaveState(NewState);
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
	CheckAnyPlayerAlive();
}
