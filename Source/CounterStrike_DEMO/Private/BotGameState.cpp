// Fill out your copyright notice in the Description page of Project Settings.


#include "BotGameState.h"
#include "Net/UnrealNetwork.h"

void ABotGameState::OnRep_WaveState(EWaveState OldState)
{
	WaveStateChanged(WaveState, OldState);
}

void ABotGameState::SetWaveState(EWaveState NewState)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		EWaveState OldState = WaveState;
		WaveState = NewState;
		OnRep_WaveState(OldState);
	}
}

void ABotGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABotGameState, WaveState);
}
