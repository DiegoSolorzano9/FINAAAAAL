#include "Strategy_Forma.h"
#include "Observer_Publicador.h"

AStrategy_Forma::AStrategy_Forma()
{

	PrimaryActorTick.bCanEverTick = true;

}

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

			MeshAspecto->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'")));
			EstadoCambioForma = false;
		}
		else {
			MeshAspecto->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'")));
			EstadoCambioForma = true;
		}

		LastChangeTime = GetWorld()->GetTimeSeconds();
	}
	
	if (ScaleFactor < 15.0f)
	{

		ScaleFactor += 0.03f;

	}

	MeshAspecto->SetRelativeScale3D(FVector(ScaleFactor, ScaleFactor, ScaleFactor));
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

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Vida: %f"), VidaForma));

		while (vidaActualForma > 2.0f)
		{

			vidaActualForma -= 2.0f;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Vida: %f"), vidaActualForma));

		}

		if (vidaActualForma <= 2.0f)
		{
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AStrategy_Forma::ReduceLifeForma, 5.0f, true);
		}
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
	SolForma->Destroy();
	this->Destroy();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Sol con Forma destruido")));
}

