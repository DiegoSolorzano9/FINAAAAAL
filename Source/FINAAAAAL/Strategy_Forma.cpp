// Fill out your copyright notice in the Description page of Project Settings.


#include "Strategy_Forma.h"
#include "Observer_Publicador.h"


// Sets default values
AStrategy_Forma::AStrategy_Forma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrategy_Forma::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategy_Forma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetWorld()->GetTimeSeconds() - LastChangeTime >= 2.0f) {
		if (EstadoCambioForma) {
			//// Change the mesh asset to the sphere shape
			MeshAspecto->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'")));

			// Set the Estado variable to false
			EstadoCambioForma = false;
		}
		else {
			// Change the mesh asset back to the torus shape
			MeshAspecto->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'")));
			// Set the Estado variable to true
			EstadoCambioForma = true;
		}

		LastChangeTime = GetWorld()->GetTimeSeconds();
	}
	// mostrar vida de Tamanio_Sol y Forma_Sol

	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Vida: %f"),VidaForma));
	float vidaActualForma = VidaForma;
	while (vidaActualForma > 2.0f)
	{
		vidaActualForma -= 2.0f;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Vida: %f"), vidaActualForma));
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, FString::Printf(TEXT("Vida Final: %f"), vidaActualForma));*/


	if (ScaleFactor < 15.0f)
	{
		// Incrementa el factor de escala por una pequeña cantidad cada fotograma
		ScaleFactor += 0.03f;
	}

	// Aplica el factor de escala al componente de malla del sol
	MeshAspecto->SetRelativeScale3D(FVector(ScaleFactor, ScaleFactor, ScaleFactor));
}

void AStrategy_Forma::Realizar()
{

}

void AStrategy_Forma::Destroyed()
{
	if (!SolForma)
	{
		UE_LOG(LogTemp, Error, TEXT("Destroy(): Strategy_Tamanio no existe"));
		return;
	}
	//desuscribirse de la accion si la accion es destruida
	SolForma->Desuscribirse(this);

}

void AStrategy_Forma::Actualizar(AObserver_Publicador* Publicador)
{
	Transformacion();
}

void AStrategy_Forma::Transformacion()
{
	if (!SolForma)
	{
		UE_LOG(LogTemp, Error, TEXT("Transformacion(): Movimiento_Sol no existe"));
		return;
	}

	FString Estado = SolForma->GetEstado();

	if (!Estado.Compare("DestruirForma"))
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AStrategy_Forma::ReduceLifeForma, 5.0f, true);
	}

}

void AStrategy_Forma::definirFuncion(ASol* myForma_Sol)
{
	if (!myForma_Sol)
	{
		UE_LOG(LogTemp, Error, TEXT("definirFuncion(): Movimiento_Sol no existe"));
		return;
	}
	SolForma = myForma_Sol;
	SolForma->Suscribirse(this);
}

void AStrategy_Forma::ReduceLifeForma()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Vida: %f"), VidaForma));
	float vidaActualForma = VidaForma;

	while (vidaActualForma > 2.0f)
	{

		vidaActualForma -= 2.0f;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Vida: %f"), vidaActualForma));
		//aumentar el tamaño del Strategy_Forma progresivamente hasta 8.0f


	}

	if (vidaActualForma <= 2.0f)
	{
		//destruir sol
		SolForma->Destroy();
		//destruir Strategy_Tamanio
		this->Destroy();

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Sol con Forma destruido")));
	}
}

