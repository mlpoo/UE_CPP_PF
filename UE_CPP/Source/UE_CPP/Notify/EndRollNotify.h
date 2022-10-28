#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EndRollNotify.generated.h"


UCLASS()
class UE_CPP_API UEndRollNotify : public UAnimNotify
{
	GENERATED_BODY()

public :
	virtual void Notify(USkeletalMeshComponent* Mesh, UAnimSequenceBase* Animation) override;


};
