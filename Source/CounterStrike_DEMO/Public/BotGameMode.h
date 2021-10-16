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

public:

protected:
	UFUNCTION(BlueprintImplementableEvent, Category ="Gamemode")
	void SpawnNewBot();

public:
	
};
