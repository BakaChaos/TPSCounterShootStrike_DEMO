// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class UCameraComponent;
class UMeshComponent;
class AWeapon_Rifle;
class USpringArmComponent;

UCLASS()
class COUNTERSTRIKE_DEMO_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	//创建摄像机组件，手臂组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* PlayerCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;
	
	//装载武器的类(这里将此类暴露给蓝图，让蓝图传入相应的值后才能获得值，一定要在bp中绑定对应的对象)
	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<AWeapon_Rifle> FirstWeaponClass;
	AWeapon_Rifle* CurrentWeapon;
	UPROPERTY(VisibleDefaultsOnly, Category = "Player")
	FName WeaponAttachSocketName;

	//换弹蒙太奇
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Anim", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* ReloadMontage;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual FVector GetPawnViewLocation() const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//创建角色移动函数(四周移动和跳跃和下蹲)
	void MoveForward(float value);
	void MoveRight(float value);
	void StartJump();
	void EndJump();
	void StartCrouch();
	void EndCrouch();
	void StartFire();
	void EndFire();
	void WeaponReload();
};
