// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class UCameraComponent;
class UMeshComponent;
class AWeapon_Rifle;
class USpringArmComponent;
class UHealthComponent;

UCLASS()
class COUNTERSTRIKE_DEMO_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	//���������������ֱ������Ѫ�����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* PlayerCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UHealthComponent* HealthComp;
	
	//װ����������(���ｫ���౩¶����ͼ������ͼ������Ӧ��ֵ����ܻ��ֵ��һ��Ҫ��bp�а󶨶�Ӧ�Ķ���)
	//EditDefaultsOnly��ʾ�������Ҳ��޸�ֵ��BlueprintReadOnly��ʾ��ͼ�п��Ե��ø�ֵ�������޸�(Write��ʾ���޸Ĵ�ֵ)
	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<AWeapon_Rifle> FirstWeaponClass;
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Player")
	AWeapon_Rifle* CurrentWeapon;
	UPROPERTY(VisibleDefaultsOnly, Category = "Player")
	FName WeaponAttachSocketName;

	//������̫��
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Anim", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* ReloadMontage;
	bool bReload;
	FTimerHandle TH_Reload;

	//�������
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Player")
	bool bDied;

	//��׼�߼�
	bool bWantsToZoom;
	float DefaultFOV;
	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float ZoomedFOV;
	UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (ClampMin = 0.1, ClampMax = 100.0))
	float ZoomInterpSpeed;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual FVector GetPawnViewLocation() const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnHealthChanged(UHealthComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

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
	void StartZoom();
	void EndZoom();
	void StartReload();
	void SetIsReload();
	void SetNoReload();
};
