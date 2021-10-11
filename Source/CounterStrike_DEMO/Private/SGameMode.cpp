// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameMode.h"
#include "HealthComponent.h"

void ASGameMode::CheckAnyPlayerAlive()
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
	{
		APlayerController* PC = It->Get();
		if (PC && PC->GetPawn())
		{
			APawn* PlayerPawn = PC->GetPawn();
			UHealthComponent* HealthComp = Cast<UHealthComponent>(PlayerPawn->GetComponentByClass(UHealthComponent::StaticClass()));
			//ensure:ȷ�ϴ���ı�����ֵ������ᴥ���ϵ�
			if (ensure(HealthComp) && HealthComp->GetHealth() > 0.f)
			{
				return;
			}
		}
	}

	GameOver();
}

void ASGameMode::GameOver()
{
	UE_LOG(LogTemp, Log, TEXT("GAME OVER! ALL PLAYER IS DIED"));
}

void ASGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckAnyPlayerAlive();
}