#include "Player/C_Player.h"

#include "Kismet/KismetmathLibrary.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/ArrowComponent.h"

#include "Camera/CameraComponent.h"

AC_Player::AC_Player()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);

	bUseControllerRotationYaw = false;
	// Controller �� yaw ���� ������� �ʵ��� �����մϴ�.
	GetCharacterMovement()->bOrientRotationToMovement = true;
	// Actor �� �̵��ϴ� ���� �������� ȸ���ϴ� ���� �����մϴ�.
	GetCharacterMovement()->MaxWalkSpeed = 400;
	// ĳ������ �̵��ӵ��� 400���� �����մϴ�.
	GetCharacterMovement()->JumpZVelocity = 500.0f; // ���� ����.
	JumpMaxCount = 1; // �ѹ��� ���� ������ Ƚ��. 1�� �⺻ ��.

	ConstructorHelpers::FObjectFinder<USkeletalMesh> mesh(L"SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
	if (mesh.Succeeded()) GetMesh()->SetSkeletalMesh(mesh.Object);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	// FClassFinder : Class , Blueprint ������ ������ ã���ϴ�.
	// Object �� �ƴ� Class �� �����մϴ�.
	// �츮�� �߰��� ������ �ִϸ��̼��� �ƴ� �ִϸ��̼� �������Ʈ�̱�
	// ������ FClassFinder �������� ã�ƾ��մϴ�.
	 
	ConstructorHelpers::FClassFinder<UAnimInstance> anim(L"AnimBlueprint'/Game/Player/ABP_Player.ABP_Player_C'");
	if (anim.Succeeded()) GetMesh()->SetAnimClass(anim.Class);

	SpringArm->SetRelativeLocation(FVector(0, 0, 60));
	// SpringArm �� z ��ġ�� 60 ���� �����մϴ�.
	SpringArm->TargetArmLength = 200;
	// SpringArm �� ���̸� 200���� �����մϴ�.
	SpringArm->bUsePawnControlRotation = true;
	// SpringArm �� ��Ʈ�ѷ��� ȸ������ ����ϵ��� �մϴ�.
	SpringArm->SocketOffset = FVector(0, 60, 0);
	// SpringArm �� ���� ������ y ��ġ�� 60 ���� �����մϴ�.

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	// �ش� ĳ���Ͱ� �÷��̾��� ���� �����մϴ�.
}

void AC_Player::BeginPlay()
{
	Super::BeginPlay();

	CanMove = true;

	
}

void AC_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AC_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AC_Player::OnMoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AC_Player::OnMoveRight);
	PlayerInputComponent->BindAxis("HorizontalLook", this, &AC_Player::OnHorizontalLook);
	PlayerInputComponent->BindAxis("VerticalLook", this, &AC_Player::OnVerticalLook);
	PlayerInputComponent->BindAxis("Zoom", this, &AC_Player::OnZoom);
	PlayerInputComponent->BindAction("Roll", EInputEvent::IE_Released, this, &AC_Player::Begin_Roll);


	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Pressed, this, &AC_Player::Run);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Released, this, &AC_Player::Walk);

	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this,  &AC_Player::Begin_Jump);
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Released, this, &AC_Player::End_Jump);

	PlayerInputComponent->BindAction("Crouch", EInputEvent::IE_Pressed, this, &AC_Player::Begin_Crouch);
	PlayerInputComponent->BindAction("Crouch", EInputEvent::IE_Released, this, &AC_Player::End_Crouch);
}


void AC_Player::OnMoveForward(float axis)
{
	if (!CanMove) return;
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	// Controller �� yaw ȸ������ �����մϴ�.
	FVector direction = FQuat(rotator).GetForwardVector().GetSafeNormal();
	// Controller ������ �� ������ 1�� ����ȭ�� ������ �����մϴ�.

	

	AddMovementInput(direction, axis);
	// ĳ���͸� �������� �̵���ŵ�ϴ�.
}

void AC_Player::OnMoveRight(float axis)
{
	if (!CanMove) return;
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetRightVector().GetSafeNormal();
	// Controller ������ ������ ������ 1�� ����ȭ�� ������ �����մϴ�.

	

	AddMovementInput(direction, axis);
}

void AC_Player::OnHorizontalLook(float axis)
{
	AddControllerYawInput(axis);
}

void AC_Player::OnVerticalLook(float axis)
{
	AddControllerPitchInput(axis);
}

void AC_Player::OnZoom(float axis)
{
	SpringArm->TargetArmLength += (ZoomSpeed * axis * GetWorld()->GetDeltaSeconds());
	SpringArm->TargetArmLength = FMath::Clamp(SpringArm->TargetArmLength, ZoomRange.X, ZoomRange.Y);
}

void AC_Player::Run()
{
	if(bCrouched)
		GetCharacterMovement()->MaxWalkSpeed = 300;


	// ĳ���� �̵��ӵ��� 600���� ����
	GetCharacterMovement()->MaxWalkSpeed = 600;

}

void AC_Player::Walk()
{
	// ĳ���� �̵��ӵ��� 400���� ����
	GetCharacterMovement()->MaxWalkSpeed = 400;
}


void AC_Player::Begin_Jump()
{
	bPressedJump = true;
}

void AC_Player::End_Jump()
{
	bPressedJump = false;
}

void AC_Player::Begin_Roll()
{
	CanMove = false;
	bRolled = true;
}

void AC_Player::End_Roll()
{
	CanMove = true;
	bRolled = false;
}
void AC_Player::Begin_Crouch()
{
	CanMove = true;
	bCrouched = true;
	GetCharacterMovement()->MaxWalkSpeed = 200;

	

}

void AC_Player::End_Crouch()
{
	CanMove = true;
	bCrouched = false;
}



