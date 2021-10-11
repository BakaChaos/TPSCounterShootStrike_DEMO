// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Rifle.h"


//必须在头文件中显示声名，且Super对应的构造函数
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
	//将射速转换成时间单位
	TimeBetweenFire = 60 / RateOfFire;

	ActualAmmo = DefaultAmmo;
	ActualMag = DefaultMag;
}


void AWeapon_Rifle::StartFire()
{
	//两次开枪间的间隔，不是两次开火间的间隔(此为TimeBetweenFire)
	float FireDelay = FMath::Max(LastTimeFire + TimeBetweenFire - GetWorld()->TimeSeconds, 0.f);
	GetWorldTimerManager().SetTimer(TimerHandle_TimeBetweenFire, this, &AWeapon_Rifle::Fire, TimeBetweenFire, true, FireDelay);
}

void AWeapon_Rifle::StopFire()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_TimeBetweenFire);
}

