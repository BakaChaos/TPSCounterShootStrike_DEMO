// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Weapon_Rifle.h"
#include "UObject/ConstructorHelpers.h"
#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "CounterStrike_DEMO/CounterStrike_DEMO.h"

APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//初始化摄像机和弹簧组件，允许玩家进行下蹲
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	PlayerCamera->SetupAttachment(SpringArmComp);

	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComp"));
	
	GetCapsuleComponent()->SetCollisionResponseToChannel(WEAPONCOLLISION, ECR_Ignore);
	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	WeaponAttachSocketName = "Rifle_rSocket";

	//初始化瞄准值
	ZoomedFOV = 65.f;
	ZoomInterpSpeed = 20.f;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> ReloadMontageObject(TEXT("AnimMontage'/Game/Animation/Montage_Reload.Montage_Reload'"));
	if (ReloadMontageObject.Succeeded())
	{
		ReloadMontage = ReloadMontageObject.Object;
	}
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	DefaultFOV = PlayerCamera->FieldOfView;
	HealthComp->OnHealthChanged.AddDynamic(this, &APlayerCharacter::OnHealthChanged);
	
	if (GetLocalRole() == ROLE_Authority)
	{
		FActorSpawnParameters SpawnParam;
		SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		CurrentWeapon = GetWorld()->SpawnActor<AWeapon_Rifle>(FirstWeaponClass, FVector(0, 0, -160.0f), FRotator::ZeroRotator, SpawnParam);
		if (CurrentWeapon)
		{
			CurrentWeapon->SetOwner(this);
			CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttachSocketName);
		}
	}
}

void APlayerCharacter::OnHealthChanged(UHealthComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Health <= 0.f && !bDied)
	{
		bDied = true;
		GetMovementComponent()->StopMovementImmediately();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		//等待销毁时解除玩家控制
		DetachFromControllerPendingDestroy();
		SetLifeSpan(10.f);
	}
}


// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float TargetFOV = bWantsToZoom ? ZoomedFOV : DefaultFOV;
	float NewFOV = FMath::FInterpTo(PlayerCamera->FieldOfView, TargetFOV, DeltaTime, ZoomInterpSpeed);
	PlayerCamera->SetFieldOfView(NewFOV);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlayerCharacter::EndJump);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &APlayerCharacter::StartCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &APlayerCharacter::EndCrouch);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayerCharacter::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &APlayerCharacter::EndFire);
	PlayerInputComponent->BindAction("Zoom", IE_Pressed, this, &APlayerCharacter::StartZoom);
	PlayerInputComponent->BindAction("Zoom",IE_Released, this, &APlayerCharacter::EndZoom);

	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &APlayerCharacter::StartReload);
}

FVector APlayerCharacter::GetPawnViewLocation() const
{
	if (PlayerCamera)
	{
		return PlayerCamera->GetComponentLocation();
	}
	return Super::GetPawnViewLocation();
}

void APlayerCharacter::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector() * value);
}

void APlayerCharacter::MoveRight(float value)
{
	AddMovementInput(GetActorRightVector() * value);
}

void APlayerCharacter::StartJump()
{
	bPressedJump = true;
}

void APlayerCharacter::EndJump()
{
	bPressedJump = false;
}

void APlayerCharacter::StartCrouch()
{
	Crouch();
}

void APlayerCharacter::EndCrouch()
{
	UnCrouch();
}

void APlayerCharacter::StartFire()
{
	CurrentWeapon->StartFire();
}

void APlayerCharacter::EndFire()
{
	CurrentWeapon->StopFire();
}

void APlayerCharacter::StartZoom()
{
	bWantsToZoom = true;
}

void APlayerCharacter::EndZoom()
{
	bWantsToZoom = false;
}

void APlayerCharacter::StartReload()
{
	if (CurrentWeapon->ActualMag == CurrentWeapon->DefaultMag || CurrentWeapon->ActualAmmo == 0)
	{
		return;
	}
	if (bReload)
	{
		return;
	}
	SetIsReload();
	GetWorldTimerManager().SetTimer(TH_Reload, this, &APlayerCharacter::SetNoReload, CurrentWeapon->TimeOfReload, false);
	WeaponReload();
}

void APlayerCharacter::SetIsReload()
{
	bReload = true;
	CurrentWeapon->bReload = bReload;
}

void APlayerCharacter::SetNoReload()
{
	bReload = false;
	CurrentWeapon->bReload = bReload;
}

void APlayerCharacter::WeaponReload()
{
	if (CurrentWeapon)
	{
		if (ReloadMontage)
		{
			//int32 Count = ReloadMontage->CompositeSections.Num();
			PlayAnimMontage(ReloadMontage, 1.f, "Default");
			
			float TempAmmo;
			TempAmmo = CurrentWeapon->ActualAmmo;
			if (TempAmmo >= 30 || (CurrentWeapon->ActualMag + CurrentWeapon->ActualAmmo >= 30))
			{
				CurrentWeapon->ActualAmmo = CurrentWeapon->ActualAmmo - CurrentWeapon->DefaultMag + CurrentWeapon->ActualMag;
				CurrentWeapon->ActualMag = CurrentWeapon->DefaultMag;
			}
			else
			{
				CurrentWeapon->ActualMag += CurrentWeapon->ActualAmmo;
				CurrentWeapon->ActualAmmo = 0;
			}
		}
	}
}

void APlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APlayerCharacter, CurrentWeapon);
	DOREPLIFETIME(APlayerCharacter, bDied);
	DOREPLIFETIME(APlayerCharacter, bReload);
}
