// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "Weapon_Rifle.generated.h"

/**
 * 
 */
UCLASS()
class COUNTERSTRIKE_DEMO_API AWeapon_Rifle : public AWeaponBase
{
	GENERATED_BODY()
public:

protected:

public:
	AWeapon_Rifle();

	void StopFire();
	void StartFire();

protected:
	void BeginPlay() override;
};
