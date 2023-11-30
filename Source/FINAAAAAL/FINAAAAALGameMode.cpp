// Copyright Epic Games, Inc. All Rights Reserved.

#include "FINAAAAALGameMode.h"
#include "FINAAAAALPawn.h"
#include "Sol.h"
#include "Strategy_Tamanio.h"
#include "Strategy_Forma.h"


AFINAAAAALGameMode::AFINAAAAALGameMode()
{
	DefaultPawnClass = AFINAAAAALPawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
}

void AFINAAAAALGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void AFINAAAAALGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetWorld()->GetTimeSeconds() - LastChangeTime >= 1.0f) {
		if (Estado) {
			SolDestruir = GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), FVector(260.0f, 0.0f, 160.0f), FRotator::ZeroRotator);
			Estado = false; 
		}
		else 
		{
			DestruirSol();
			if (SolesCreados < MAX_SOLES) 
			{
				float x1 = FMath::RandRange(1700.0f, -1180.0f); float y1 = FMath::RandRange(-1550.0f, -470.0f); float z = 160.0f;
				float x2 = FMath::RandRange(1590.0f, -1160.0f); float y2 = FMath::RandRange(420.0f, 1570.0f);
				
				//spawn de ASol en cordenadas aleatorias menos
				ASol* Contexto = GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), FVector(), FRotator::ZeroRotator);

				AStrategy_Forma* Strategy_Forma = GetWorld()->SpawnActor<AStrategy_Forma>(AStrategy_Forma::StaticClass(), FVector(x1,y1,z), FRotator::ZeroRotator);
				Contexto->Casteo(Strategy_Forma);
				Contexto->LlamarEstrategia();

				Strategy_Forma->definirFuncion(Contexto);
				Contexto->DefinirEstado("DestruirForma");

				AStrategy_Tamanio* Strategy_Tamanio = GetWorld()->SpawnActor<AStrategy_Tamanio>(AStrategy_Tamanio::StaticClass(), FVector(x2, y2, z), FRotator::ZeroRotator);
				Contexto->Casteo(Strategy_Tamanio);
				Contexto->LlamarEstrategia();


				Strategy_Tamanio->definirFuncion(Contexto);
				Contexto->DefinirEstado("DestruirTamanio");
			}

			SolesCreados++;
		}

		LastChangeTime = GetWorld()->GetTimeSeconds();
	}

}
void AFINAAAAALGameMode::DestruirSol()
{
	if (SolDestruir != nullptr)
	{
		SolDestruir->Destroy();
	}
}



