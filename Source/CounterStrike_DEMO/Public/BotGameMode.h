// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BotGameMode.generated.h"

enum class EWaveState : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled, AActor*, VictimActor, AActor*, KillerActor, AController*, KillerController);

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
	//创建要被广播的信号
	UPROPERTY(BlueprintAssignable, Category = "GameMode")
	FOnActorKilled OnActorKilled;

protected:
	UFUNCTION(BlueprintImplementableEvent, Category ="GameMode")
	void SpawnNewBot();

	//使用此函数降低蓝图和cpp代码的耦合
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
