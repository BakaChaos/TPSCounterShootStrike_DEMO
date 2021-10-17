// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BotGameMode.generated.h"

enum class EWaveState : uint8;

/**
 * 
 */
UCLASS()
class COUNTERSTRIKE_DEMO_API ABotGameMode : public AGameModeBase
{
	GENERATED_BODY()
protected:
	FTimerHandle TH_BotSpawner;
	FTimerHandle TH_NextWaveStart;

	int NumberOfBotToSpawn;
	int WaveCount;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GameMode")
	float TimeBetweenWaves;

public:

protected:
	UFUNCTION(BlueprintImplementableEvent, Category ="GameMode")
	void SpawnNewBot();

	//ʹ�ô˺���������ͼ��cpp��������
	void SpawnBotTimerElapsed();

	void StartWave();
	void EndWave();
	void PorpareForNextWave();
	void CheckWaveState();

	void CheckAnyPlayerAlive();
	void GameOver();

	void SetWaveState(EWaveState NewState);

public:
	ABotGameMode();

	virtual void StartPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	
};
