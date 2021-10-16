// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BotGameMode.generated.h"

/**
 * 
 */
UCLASS()
class COUNTERSTRIKE_DEMO_API ABotGameMode : public AGameModeBase
{
	GENERATED_BODY()
protected:
	FTimerHandle TH_BotSpawner;

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

public:
	ABotGameMode();

	virtual void StartPlay() override;
	
};
