
#include "Movimiento_Aleatorio.h"

UMovimiento_Aleatorio::UMovimiento_Aleatorio()
{
	PrimaryComponentTick.bCanEverTick = true;
	RadioMovimiento = 10;
	velocidad = 0.1f;
}


// Called every frame
void UMovimiento_Aleatorio::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* Parent = GetOwner();
	if (Parent)
	{
		if (velocidad < 30)
		{
			// Rotación aleatoria
			auto NewRot = Parent->GetActorRotation() + FRotator(FMath::FRandRange(-velocidad, velocidad) * RadioMovimiento, FMath::FRandRange(-velocidad, velocidad) * RadioMovimiento, 0);

			//Actualiza la rotacion	
			Parent->SetActorRotation(NewRot);

			velocidad +=0.1f;
		}
	}
}

