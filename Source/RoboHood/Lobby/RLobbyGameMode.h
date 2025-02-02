// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "RLobbyGameMode.generated.h"

UCLASS()
class ROBOHOOD_API ARLobbyGameMode : public AGameMode
{
	GENERATED_BODY()
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// General Functions And Variables
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public:

	//Default Constructor
	ARLobbyGameMode();

	//Spawn A Player And Return Pointer To It
	AActor* SpawnPlayer(TSubclassOf<AActor> ChosenCharacter);
	
};
