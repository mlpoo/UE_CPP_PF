#include "Notify/EndRollNotify.h"
#include "Player/C_Player.h"

void UEndRollNotify::Notify(USkeletalMeshComponent* Mesh, UAnimSequenceBase* Animation)
{
	Super::Notify(Mesh, Animation);

	if (!Mesh) return;

	AC_Player* player = Cast<AC_Player>(Mesh->GetOwner());
	if (player) player->End_Roll();
}
