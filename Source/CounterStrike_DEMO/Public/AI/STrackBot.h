// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "STrackBot.generated.h"

UCLASS()
class COUNTERSTRIKE_DEMO_API ASTrackBot : public APawn
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UStaticMeshComponent* BotMeshComp;

public:


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector GetNextPathPoint();
	FVector NextPathPoint;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float MoventForce;
	//是否使用速率变化
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	bool bUseVelocityChange;
	UPROPERTY(EditDefaultsOnly, Category = "TrackBot")
	float RequiredDistanceToTarget;

public:	
	// Sets default values for this pawn's properties
	ASTrackBot();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
