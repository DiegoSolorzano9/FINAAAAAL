// Fill out your copyright notice in the Description page of Project Settings.


#include "Observer_Publicador.h"
#include "Observer_Suscriptor.h"

// Sets default values
AObserver_Publicador::AObserver_Publicador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObserver_Publicador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObserver_Publicador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObserver_Publicador::Suscribirse(AActor* Suscriptor)
{
	//agregar suscriptores pasado por parametro en la lista
	Suscriptores.Add(Suscriptor);
}

void AObserver_Publicador::Desuscribirse(AActor* SuscriptoresAQuitar)
{
	//quitar suscriptores pasado por parametro en la lista
	Suscriptores.Remove(SuscriptoresAQuitar);
}

void AObserver_Publicador::NotificarSuscriptores()
{
	//ciclo repetitivo que recorre la lista de suscriptores y los notifica
	for (AActor* Actor : Suscriptores)
	{
		//castea cada uno de los actores de la lista a ISuscriptor
		IObserver_Suscriptor* Sub = Cast<IObserver_Suscriptor>(Actor);
		if (Sub)
		{
			//notifica a cada uno de los suscriptores que algo paso
			Sub->Actualizar(this);
		}
	}
}

