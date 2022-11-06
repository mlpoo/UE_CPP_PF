#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Item/C_Item.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Player/C_Player.h"

AC_Item::AC_Item()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	SetRootComponent(SceneComponent);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	StaticMesh->SetupAttachment(SceneComponent);

	Box = CreateDefaultSubobject<UBoxComponent>("Box");
	Box->SetGenerateOverlapEvents(true);
	Box->SetWorldScale3D(FVector(4.f, 4.f, 4.f));
	Box->SetupAttachment(SceneComponent);
	
	// Box->bHiddenInGame = false;


	UMaterialInstanceConstant* material = Cast<UMaterialInstanceConstant>(StaticLoadObject(UMaterialInstanceConstant::StaticClass(), NULL, L"Material'/Game/Materials/M_Mesh.M_Mesh'"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(L"StaticMesh'/Game/Mesh/SM_Cube.SM_Cube'");

	if(mesh.Succeeded()) StaticMesh->SetStaticMesh(mesh.Object);
}

void AC_Item::BeginPlay()
{
	Super::BeginPlay();
	Box->OnComponentBeginOverlap.AddDynamic(this, &AC_Item::OnBeginOverlap);

	
}

void AC_Item::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AC_Item::OnBeginOverlap(UPrimitiveComponent* OveriappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// UE_LOG(LogTemp, Warning, L"BeginOverlap");
	if (OtherActor != nullptr && OtherActor != this && OtherComp != nullptr)
	{
		OnInteract();
	}
}

void AC_Item::OnInteract()
{
	FString Text = FString::Printf(L"Picked up : %s", *Name);

	AC_Player* Player = Cast<AC_Player>(UGameplayStatics::GetPlayerCharacter(this, 0));
	
	if (Player)
	{
		Show(false);
		Player->AddToInventory(this);
	}
	
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::White, Text);
	Destroy();
	
}

void AC_Item::Show(bool visible)
{
	ECollisionEnabled::Type Collision = visible
		? Collision = ECollisionEnabled::QueryAndPhysics
		: Collision = ECollisionEnabled::NoCollision;

	SetActorTickEnabled(visible);
	StaticMesh->SetVisibility(visible);
	StaticMesh->SetCollisionEnabled(Collision);
	Box->SetCollisionEnabled(Collision);
}


