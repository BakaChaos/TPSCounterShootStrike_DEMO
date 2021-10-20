// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupItem.h"
#include "PlayerCharacter.h"
#include "Components/SphereComponent.h"

// Sets default values
APickupItem::APickupItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereMesh = CreateDefaultSubobject<USphereComponent>(TEXT("SphereMesh"));
	SphereMesh->SetSphereRadius(75.f);
	SetRootComponent(SphereMesh);
	ItemName = TEXT("DefaultItem");

}

FString APickupItem::GetUserText() const
{
	return FString::Printf(TEXT("%s :PRESS E TO GET"), *ItemName);
}

void APickupItem::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if (Cast<APlayerCharacter>(OtherActor))
	{
		ShowWidget();
	}

}

void APickupItem::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);
	if (Cast<APlayerCharacter>(OtherActor))
	{
		HiddenWidget();
	}
}

// Called when the game starts or when spawned
void APickupItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

