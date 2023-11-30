// Fill out your copyright notice in the Description page of Project Settings.


#include "Strategy_Tamanio.h"
#include "Observer_Publicador.h"
#include "Movimiento_Aleatorio.h"


// Sets default values
AStrategy_Tamanio::AStrategy_Tamanio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Movimiento_Aleatorio = CreateDefaultSubobject<UMovimiento_Aleatorio>(TEXT("MovimientoAleatorio"));

	
}

// Called when the game starts or when spawned
void AStrategy_Tamanio::BeginPlay()
{
	Super::BeginPlay();

	//MeshAspecto->SetRelativeScale3D(FVector(ScaleFactor = FMath::RandRange(2.0f, 4.0f), ScaleFactor = FMath::RandRange(2.0f, 4.0f), ScaleFactor));
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Vida: %f"), VidaTamanio));

	if (GetWorld()->GetTimeSeconds() - LastChangeTime >= 3.0f) 
	{

		while (vidaActualTamanio > 2.0f)
		{
			vidaActualTamanio -= 2.0f;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Vida: %f"), vidaActualTamanio));


		}
		LastChangeTime = GetWorld()->GetTimeSeconds();
	}*/

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Vida: %f"), VidaTamanio));

	//GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AStrategy_Tamanio::ReduceLife, 3.0f, true);

}

// Called every frame
void AStrategy_Tamanio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);




	/*float x1 = FMath::RandRange(1700.0f, -1180.0f); float y1 = FMath::RandRange(-1550.0f, -470.0f); float z = 160.0f;
	float x2 = FMath::RandRange(1590.0f, -1160.0f); float y2 = FMath::RandRange(420.0f, 1570.0f);

	ASol* Publicador = GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), FVector(x2, y2, z), FRotator::ZeroRotator);
	AStrategy_Tamanio* Observer_Tamanio = GetWorld()->SpawnActor<AStrategy_Tamanio>(AStrategy_Tamanio::StaticClass(), FVector(), FRotator::ZeroRotator);
	Observer_Tamanio->definirFuncion(Publicador);
	Publicador->DefinirEstado("DestruirTamanio");*/

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
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Vida: %f"), VidaTamanio));
		//float vidaActualTamanio = VidaTamanio;

		//	while (vidaActualTamanio > 2.0f)
		//	{
		//		vidaActualTamanio -= 2.0f;
		//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Vida: %f"), vidaActualTamanio));


		//	}
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AStrategy_Tamanio::ReduceLife, 5.0f, true);

		//	if (vidaActualTamanio <= 2.0f)
		//	{
		//		//destruir sol
		//		SolTamanio->Destroy();
		//		//destruir Strategy_Tamanio
		//		this->Destroy();
		//		
		//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, FString::Printf(TEXT("Sol con Forma destruido")));
		//	}
			
		
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
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Vida: %f"), VidaTamanio));
	float vidaActualTamanio = VidaTamanio;
	while (vidaActualTamanio > 2.0f)
	{
		vidaActualTamanio -= 2.0f;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Vida: %f"), vidaActualTamanio));

	}

	if (vidaActualTamanio <= 2.0f)
	{
	

		//destruir sol
		SolTamanio->Destroy();
		//destruir Strategy_Tamanio
		this->Destroy();

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, FString::Printf(TEXT("Sol con Tamanio destruido")));
	}
}
