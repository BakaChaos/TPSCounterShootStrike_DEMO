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
	//���������������ֱ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* PlayerCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;
	
	//װ����������(���ｫ���౩¶����ͼ������ͼ������Ӧ��ֵ����ܻ��ֵ��һ��Ҫ��bp�а󶨶�Ӧ�Ķ���)
	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<AWeapon_Rifle> FirstWeaponClass;
	AWeapon_Rifle* CurrentWeapon;
	UPROPERTY(VisibleDefaultsOnly, Category = "Player")
	FName WeaponAttachSocketName;

	//������̫��
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

	//������ɫ�ƶ�����(�����ƶ�����Ծ���¶�)
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
