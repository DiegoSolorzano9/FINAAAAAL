// Fill out your copyright notice in the Description page of Project Settings.


#include "Strategy_Tamanio.h"
#include "Observer_Publicador.h"
#include "Movimiento_Aleatorio.h"

// Sets default values
AStrategy_Tamanio::AStrategy_Tamanio()
{
	PrimaryActorTick.bCanEverTick = true;
	Movimiento_Aleatorio = CreateDefaultSubobject<UMovimiento_Aleatorio>(TEXT("MovimientoAleatorio"));
}

void AStrategy_Tamanio::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AStrategy_Tamanio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AStrategy_Tamanio::Realizar()
{
	MeshAspecto->SetRelativeScale3D(FVector(ScaleFactor = FMath::RandRange(2.0f, 4.0f), ScaleFactor = FMath::RandRange(2.0f, 4.0f), ScaleFactor));
}

void AStrategy_Tamanio::Destroyed()
{
	if (!SolTamanio)
	{
		UE_LOG(LogTemp, Error, TEXT("Destroy(): Strategy_Tamanio no existe"));
		return;
	}
	//desuscribirse de la accion si la accion es destruida
	SolTamanio->Desuscribirse(this);
}

void AStrategy_Tamanio::Actualizar(AObserver_Publicador* Publicador)
{
	Transformacion();
}

void AStrategy_Tamanio::Transformacion()
{
	if (!SolTamanio)
	{
		UE_LOG(LogTemp, Error, TEXT("Transformacion(): Movimiento_Sol no existe"));
		return;
	}

	FString Estado = SolTamanio->GetEstado();

	if (!Estado.Compare("DestruirTamanio"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Vida: %f"), VidaTamanio));
		while (vidaActualTamanio > 2.0f)
		{
			vidaActualTamanio -= 2.0f;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Vida: %f"), vidaActualTamanio));
		}

		if (vidaActualTamanio <= 2.0f)
		{
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AStrategy_Tamanio::ReduceLife, 5.0f, true);	
		}
	}
}

void AStrategy_Tamanio::definirFuncion(ASol* myTamanio_Sol)
{
	if (!myTamanio_Sol)
	{
		UE_LOG(LogTemp, Error, TEXT("definirFuncion(): Movimiento_Sol no existe"));
		return;
	}
	SolTamanio = myTamanio_Sol;
	SolTamanio->Suscribirse(this);
}

void AStrategy_Tamanio::ReduceLife()
{
	//destruir sol
	SolTamanio->Destroy();
	//destruir Strategy_Tamanio
	this->Destroy();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, FString::Printf(TEXT("Sol con Tamanio destruido")));
}
