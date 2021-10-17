// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "BotGameState.generated.h"

UENUM(BlueprintType)
enum class EWaveState : uint8
{
	WaitingToStart,

	WaveInProgress,
	
//��������bot���ȴ�botȫ����ʧ
	WaitingToComplete,

	WaveComplete,

	GameOver,
};

/**
 * 
 */
UCLASS()
class COUNTERSTRIKE_DEMO_API ABotGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	
protected:
	UFUNCTION()
	void OnRep_WaveState(EWaveState OldState);
	UFUNCTION(BlueprintImplementableEvent, Category = "GameState")
	void WaveStateChanged(EWaveState NewState, EWaveState OldState);
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_waveState, Category = "GameState")
	EWaveState WaveState;

public:
	void SetWaveState(EWaveState NewState);
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
