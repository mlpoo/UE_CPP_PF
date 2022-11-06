#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Item/C_Item.h"
#include "C_Player.generated.h"

UCLASS()
class UE_CPP_API AC_Player : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Category = "Zoom")
		float ZoomSpeed = 1000;

	UPROPERTY(EditDefaultsOnly, Category = "Zoom")
		FVector2D ZoomRange = FVector2D(0, 500);

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;
	

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* Camera;

	// HP, Atk �׸�
public:

	UFUNCTION(BlueprintCallable, Category = "State")

		float GetCurrentHealth();

	UFUNCTION(BlueprintCallable, Category = "State")

		float GetMaxHealth();

	UFUNCTION(BlueprintCallable, Category = "State")

		float GetAtk();


private:

	float fHealth;

	float fCurrentHealth;

	float Atk;

	// https://joyeeeeeee.blogspot.com/2017/11/unreal46hpuiumg.html ����





public:
	AC_Player();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void OnMoveForward(float axis);	// �� �� �̵�
	void OnMoveRight(float axis);   // �� �� �̵�

	void OnHorizontalLook(float axis);
	void OnVerticalLook(float axis);

	void OnZoom(float axis);

	void Run();
	void Walk();

	void ItemSwapBefore(float axis);
	void ItemSwapAfter(float axis);

public:
	bool bRolled;
	bool CanMove;
	bool bCrouched;
public:
	UFUNCTION()
	void Begin_Jump();
	UFUNCTION()
	void End_Jump();

	UFUNCTION()
	void Begin_Roll();
	UFUNCTION()
	void End_Roll();

	UFUNCTION()
	void Begin_Crouch();
	UFUNCTION()
	void End_Crouch();


private:
	TArray<AC_Item*> Inventory;

public:
	void AddToInventory(AC_Item* items);

	UFUNCTION(BlueprintCallable)
		void PrintInventory();

	
};
