// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Rifle.h"


//������ͷ�ļ�����ʾ��������Super��Ӧ�Ĺ��캯��
AWeapon_Rifle::AWeapon_Rifle()
	: Super()
{
	BaseDamage = 20.f;
	RateOfFire = 300.f;

	DefaultAmmo = 180;
	DefaultMag = 30;

	TimeOfReload = 2.0f;

	Recoil = 15.f;
}

void AWeapon_Rifle::BeginPlay()
{
	Super::BeginPlay();
	//������ת����ʱ�䵥λ
	TimeBetweenFire = 60 / RateOfFire;

	ActualAmmo = DefaultAmmo;
	ActualMag = DefaultMag;
}


void AWeapon_Rifle::StartFire()
{
	//���ο�ǹ��ļ�����������ο����ļ��(��ΪTimeBetweenFire)
	float FireDelay = FMath::Max(LastTimeFire + TimeBetweenFire - GetWorld()->TimeSeconds, 0.f);
	GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenFire, this, &AWeapon_Rifle::Fire, TimeBetweenFire, true, FireDelay);
}

void AWeapon_Rifle::StopFire()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_TimeBetweenFire);
}

