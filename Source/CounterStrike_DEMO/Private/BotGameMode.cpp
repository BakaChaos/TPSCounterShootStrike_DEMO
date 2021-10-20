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
	//���ø���Ƶ��Ϊһ��һ��
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.f;

	//����Ĭ�ϵ���Ϸ״̬
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
			//ensure:ȷ����ȷ��������health��������û���������ϵ�
			if (ensure(PlayerHealthComp) && PlayerHealthComp->GetHealth() > 0.f)
			{
				//������������Ѫ������ֱ���˳�����
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
	//��Ϸ��������ʾ���
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
