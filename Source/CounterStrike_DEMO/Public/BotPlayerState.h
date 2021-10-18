// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BotPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class COUNTERSTRIKE_DEMO_API ABotPlayerState : public APlayerState
{
	GENERATED_BODY()
	
protected:
	float OldScore;

public:
	UFUNCTION(BlueprintCallable, Category = "PlayerState")
	void AddScore(float ScoreDelta);
};
