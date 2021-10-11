// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/STrackBot.h"
#include "PlayerCharacter.h"
#include "NavigationPath.h" 
#include "NavigationSystem.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ASTrackBot::ASTrackBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BotMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = BotMeshComp;

	BotMeshComp->SetSimulatePhysics(true);
	//使mesh不能够影响导航
	BotMeshComp->SetCanEverAffectNavigation(false);

	bUseVelocityChange = true;
	RequiredDistanceToTarget = 100.f;
	MoventForce = 1000;
}

// Called when the game starts or when spawned
void ASTrackBot::BeginPlay()
{
	Super::BeginPlay();
	
	//找到移动起点的位置
	NextPathPoint = GetNextPathPoint();
}

FVector ASTrackBot::GetNextPathPoint()
{
	ACharacter* PlayPawn = UGameplayStatics::GetPlayerCharacter(this, 0);

	//需要在.build.cs里添加依赖"NavigationSystem"
	UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayPawn);

	if (NavPath->PathPoints.Num() > 1)
	{
		return NavPath->PathPoints[1];
	}
	//寻找路线失败返回原点
	return GetActorLocation();
}

// Called every frame
void ASTrackBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float DistanceToTarget = (GetActorLocation() - NextPathPoint).Size();

	//如果下一个目标点和玩家位置不相近则保持增加作用力直到接近目标
	if (DistanceToTarget <= RequiredDistanceToTarget)
	{
		NextPathPoint = GetNextPathPoint();
	}
	else
	{
		FVector ForceDirection = NextPathPoint - GetActorLocation();
		ForceDirection.Normalize();
		ForceDirection *= MoventForce;

		BotMeshComp->AddForce(ForceDirection, NAME_None, bUseVelocityChange);
	}
}

