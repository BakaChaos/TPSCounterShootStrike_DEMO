// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "BotGameMode.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	bIsDead = false;
	DefaultHealth = 100.f;
	SetIsReplicatedByDefault(true);
}

float UHealthComponent::GetHealth() const
{
	return ActualHealth;
}

// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
	AActor* HealthOwner = GetOwner();
	if (GetOwnerRole() == ROLE_Authority)
	{
		if (HealthOwner)
		{
			HealthOwner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::HandleTakeAnyDamage);
		}
		ActualHealth = DefaultHealth;
	}
}

void UHealthComponent::OnRep_Health(float OldHealth)
{
	float Damage = ActualHealth - OldHealth;
	OnHealthChanged.Broadcast(this, ActualHealth, Damage, nullptr, nullptr, nullptr);
}

void UHealthComponent::HandleTakeAnyDamage(AActor* DamageActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.f || bIsDead)
	{
		return;
	}
	//��Ѫ����Ĭ��ֵ��0֮�䣬���ᳬ��
	ActualHealth = FMath::Clamp(ActualHealth - Damage, 0.f, DefaultHealth);

	UE_LOG(LogTemp, Log, TEXT("HealthChanged : %s"), *FString::SanitizeFloat(ActualHealth));

	OnHealthChanged.Broadcast(this, ActualHealth, Damage, DamageType, InstigatedBy, DamageCauser);

	bIsDead = ActualHealth <= 0.f;
	if (bIsDead)
	{
		ABotGameMode* GM = Cast<ABotGameMode>(GetWorld()->GetAuthGameMode());
		if (GM)
		{
			//��ʱDamageCauserΪ�����õ��������߼�����ȷ
			GM->OnActorKilled.Broadcast(GetOwner(), DamageCauser, InstigatedBy);
		}
	}
}

void UHealthComponent::Heal(float HealAmount)
{
	if (HealAmount <= 0.f || ActualHealth <= 0.f)
	{
		return;
	}
	ActualHealth = FMath::Clamp(ActualHealth + HealAmount, 0.f, DefaultHealth);
	//SanitizeFloat���Ժ���С��������Ч��
	UE_LOG(LogTemp, Log, TEXT("HealthChanged : %s (+ %s)"), *FString::SanitizeFloat(ActualHealth), *FString::SanitizeFloat(HealAmount));
	//��ֵΪ����˺���ֵΪ�ظ�Ѫ��
	OnHealthChanged.Broadcast(this, ActualHealth, -HealAmount, nullptr, nullptr, nullptr);
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UHealthComponent, ActualHealth);
}

// Called every frame
// void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
// {
// 	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
// 
// 	// ...
// }

