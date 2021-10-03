// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Weapon_Rifle.h"
#include "UObject/ConstructorHelpers.h"
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
	
	GetCapsuleComponent()->SetCollisionResponseToChannel(WEAPONCOLLISION, ECR_Ignore);
	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	WeaponAttachSocketName = "Rifle_rSocket";

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
	
	FActorSpawnParameters SpawnParam;
	SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	CurrentWeapon = GetWorld()->SpawnActor<AWeapon_Rifle>(FirstWeaponClass, FVector(0, 0, -160.0f), FRotator::ZeroRotator, SpawnParam);
	if (CurrentWeapon)
	{
		CurrentWeapon->SetOwner(this);
		CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttachSocketName);
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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

	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &APlayerCharacter::WeaponReload);
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

void APlayerCharacter::WeaponReload()
{
	if (ReloadMontage)
	{
		//int32 Count = ReloadMontage->CompositeSections.Num();
		PlayAnimMontage(ReloadMontage, 1.f, "Default");
	}
}

