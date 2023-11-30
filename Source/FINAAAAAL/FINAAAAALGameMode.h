// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Sol.h"
#include "GameFramework/GameModeBase.h"
#include "FINAAAAALGameMode.generated.h"

UCLASS(MinimalAPI)
class AFINAAAAALGameMode : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	ASol* SolDestruir;

	UFUNCTION()
	void DestruirSol();

public:
	AFINAAAAALGameMode();

virtual void BeginPlay() override;

virtual void Tick(float DeltaTime) override;


	// Initialize the Estado variable to true
	bool Estado = true;

	// Initialize the NumeroCambio variable
	int NumeroCambio = 0;

	// Initialize the LastChangeTime variable
	float LastChangeTime = 0.0f;

	float ScaleFactor;
	int SolesCreados = 0;
	int MAX_SOLES = 5;
	
};



