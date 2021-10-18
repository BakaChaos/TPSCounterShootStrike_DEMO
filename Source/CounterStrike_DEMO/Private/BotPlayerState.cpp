// Fill out your copyright notice in the Description page of Project Settings.


#include "BotPlayerState.h"

void ABotPlayerState::AddScore(float ScoreDelta)
{
	OldScore = GetScore();
	SetScore(OldScore + ScoreDelta);
}
