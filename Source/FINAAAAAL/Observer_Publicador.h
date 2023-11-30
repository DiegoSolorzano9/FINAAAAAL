// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Observer_Publicador.generated.h"

UCLASS()
class FINAAAAAL_API AObserver_Publicador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObserver_Publicador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	TArray<AActor*> Suscriptores = TArray<AActor*>();

	//agregar suscriptores pasado por parametro en la lista
	virtual void Suscribirse(AActor* Suscriptor);
	//quitar suscriptores pasado por parametro en la lista
	virtual void Desuscribirse(AActor* SuscriptoresAQuitar);
	//notificar a los suscriptores
	virtual void NotificarSuscriptores();

};
