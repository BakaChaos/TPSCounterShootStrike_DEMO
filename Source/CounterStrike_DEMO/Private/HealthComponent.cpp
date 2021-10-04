// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	DefaultHealth = 100.f;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
	AActor* HealthOwner = GetOwner();
	if (HealthOwner)
	{
		HealthOwner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::HandleTakeAnyDamage);
	}
	ActualHealth = DefaultHealth;
}



void UHealthComponent::HandleTakeAnyDamage(AActor* DamageActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.f)
	{
		return;
	}
	//让血量在默认值和0之间，不会超出
	ActualHealth = FMath::Clamp(ActualHealth - Damage, 0.f, DefaultHealth);

	UE_LOG(LogTemp, Log, TEXT("HealthChanged : %s"), *FString::SanitizeFloat(ActualHealth));

	OnHealthChanged.Broadcast(this, ActualHealth, Damage, DamageType, InstigatedBy, DamageCauser);
}

// Called every frame
// void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
// {
// 	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
// 
// 	// ...
// }

