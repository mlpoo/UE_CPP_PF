#include "UE_CPPGameModeBase.h"


AUE_CPPGameModeBase::AUE_CPPGameModeBase()
{
	ConstructorHelpers::FClassFinder<APawn> pawn(L"Blueprint'/Game/Player/BP_Player.BP_Player_C'");
	if (pawn.Succeeded()) DefaultPawnClass = pawn.Class;
}