// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sol.h"
#include "Movimiento_Aleatorio.h"
#include "Strategy_Explocion.h"
#include "Observer_Transformacion.h"
#include "Observer_Suscriptor.h"
#include "Strategy_Interface.h"
#include "GameFramework/Actor.h"
#include "Strategy_Tamanio.generated.h"

class ASol;
UCLASS()
class FINAAAAAL_API AStrategy_Tamanio : public ASol, public IStrategy_Interface, public IObserver_Suscriptor, public IObserver_Transformacion
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	UMovimiento_Aleatorio* Movimiento_Aleatorio;

public:	

	AStrategy_Tamanio();

protected:

	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;

	virtual void Realizar() override;

	float ScaleFactor;

	//vida aleatoria entre 5.0f y 15.0f
	float VidaTamanio = FMath::RandRange(5.0f, 15.0f);

	float LastChangeTime = 0.0f;

	float vidaActualTamanio = VidaTamanio;


private:

	UPROPERTY()
	ASol* SolTamanio;

public:

	virtual void Destroyed() override;

	virtual void Actualizar(class AObserver_Publicador* Publicador) override;

	virtual void Transformacion() override;

	void definirFuncion(ASol* myForma_Sol);

	UPROPERTY(BlueprintReadWrite, Category = "Strategy")
	FTimerHandle TimerHandle;
	void ReduceLife();
};
