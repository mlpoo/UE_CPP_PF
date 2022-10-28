#include "Player/PlayerAnim.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "C_Player.h"

void UPlayerAnim::NativeBeginPlay()
{
    Super::NativeBeginPlay();

	Owner = Cast<ACharacter>(TryGetPawnOwner());


}

void UPlayerAnim::NativeUpdateAnimation(float DelatSeconds)
{
    Super::NativeUpdateAnimation(DelatSeconds);

    if (!Owner) return;

    // GetVelocity() : ¼Ó·Â
    Speed = Owner->GetVelocity().Size2D();
    Direction = CalculateDirection(Owner->GetVelocity(), Owner->GetControlRotation());

    Speed = Owner->GetVelocity().Size2D();
    Direction = CalculateDirection(Owner->GetVelocity(), Owner->GetControlRotation());

    Pitch = Owner->GetBaseAimRotation().Pitch;

    bIsInAir = Owner->GetCharacterMovement()->IsFalling();
    bRolled = Cast<AC_Player>(Owner)->bRolled;
    bCrouched = Cast<AC_Player>(Owner)->bCrouched;
}
