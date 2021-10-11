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
	//ʹmesh���ܹ�Ӱ�쵼��
	BotMeshComp->SetCanEverAffectNavigation(false);

	bUseVelocityChange = true;
	RequiredDistanceToTarget = 100.f;
	MoventForce = 1000;
}

// Called when the game starts or when spawned
void ASTrackBot::BeginPlay()
{
	Super::BeginPlay();
	
	//�ҵ��ƶ�����λ��
	NextPathPoint = GetNextPathPoint();
}

FVector ASTrackBot::GetNextPathPoint()
{
	ACharacter* PlayPawn = UGameplayStatics::GetPlayerCharacter(this, 0);

	//��Ҫ��.build.cs���������"NavigationSystem"
	UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayPawn);

	if (NavPath->PathPoints.Num() > 1)
	{
		return NavPath->PathPoints[1];
	}
	//Ѱ��·��ʧ�ܷ���ԭ��
	return GetActorLocation();
}

// Called every frame
void ASTrackBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float DistanceToTarget = (GetActorLocation() - NextPathPoint).Size();

	//�����һ��Ŀ�������λ�ò�����򱣳�����������ֱ���ӽ�Ŀ��
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

