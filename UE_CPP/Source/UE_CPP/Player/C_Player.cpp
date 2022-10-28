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
	// Controller 의 yaw 값을 사용하지 않도록 설정합니다.
	GetCharacterMovement()->bOrientRotationToMovement = true;
	// Actor 가 이동하는 방향 기준으로 회전하는 것을 설정합니다.
	GetCharacterMovement()->MaxWalkSpeed = 400;
	// 캐릭터의 이동속도를 400으로 설정합니다.
	GetCharacterMovement()->JumpZVelocity = 500.0f; // 점프 높이.
	JumpMaxCount = 1; // 한번에 점프 가능한 횟수. 1이 기본 값.

	ConstructorHelpers::FObjectFinder<USkeletalMesh> mesh(L"SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
	if (mesh.Succeeded()) GetMesh()->SetSkeletalMesh(mesh.Object);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	// FClassFinder : Class , Blueprint 형식의 에셋을 찾습니다.
	// Object 가 아닌 Class 로 설정합니다.
	// 우리가 추가할 에셋은 애니메이션이 아닌 애니메이션 블루프린트이기
	// 때문에 FClassFinder 형식으로 찾아야합니다.
	 
	ConstructorHelpers::FClassFinder<UAnimInstance> anim(L"AnimBlueprint'/Game/Player/ABP_Player.ABP_Player_C'");
	if (anim.Succeeded()) GetMesh()->SetAnimClass(anim.Class);

	SpringArm->SetRelativeLocation(FVector(0, 0, 60));
	// SpringArm 의 z 위치를 60 으로 설정합니다.
	SpringArm->TargetArmLength = 200;
	// SpringArm 의 길이를 200으로 설정합니다.
	SpringArm->bUsePawnControlRotation = true;
	// SpringArm 이 컨트롤러의 회전값을 사용하도록 합니다.
	SpringArm->SocketOffset = FVector(0, 60, 0);
	// SpringArm 의 시작 지점의 y 위치를 60 으로 설정합니다.

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	// 해당 캐릭터가 플레이어라는 것을 설정합니다.
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
	// Controller 의 yaw 회전값을 저장합니다.
	FVector direction = FQuat(rotator).GetForwardVector().GetSafeNormal();
	// Controller 기준의 앞 방향을 1로 정규화된 값으로 저장합니다.

	

	AddMovementInput(direction, axis);
	// 캐릭터를 방향으로 이동시킵니다.
}

void AC_Player::OnMoveRight(float axis)
{
	if (!CanMove) return;
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetRightVector().GetSafeNormal();
	// Controller 기준의 오른쪽 방향을 1로 정규화된 값으로 저장합니다.

	

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


	// 캐릭터 이동속도를 600으로 설정
	GetCharacterMovement()->MaxWalkSpeed = 600;

}

void AC_Player::Walk()
{
	// 캐릭터 이동속도를 400으로 설정
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



