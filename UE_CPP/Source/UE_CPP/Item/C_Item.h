#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "C_Item.generated.h"

UCLASS()
class UE_CPP_API AC_Item : public AActor
{
	GENERATED_BODY()
	
public:	
	AC_Item();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere)
		USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Box;

	UPROPERTY(EditAnywhere)
		FString Name;


public:
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OveriappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	UFUNCTION()
	virtual void OnInteract();

	virtual void Show(bool visible);




};
