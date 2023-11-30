// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sol.h"
#include "Observer_Suscriptor.h"
#include "Observer_Transformacion.h"
#include "Strategy_Interface.h"
#include "GameFramework/Actor.h"
#include "Strategy_Forma.generated.h"

class ASol;
UCLASS()
class FINAAAAAL_API AStrategy_Forma : public ASol, public IStrategy_Interface, public IObserver_Suscriptor, public IObserver_Transformacion
{
	GENERATED_BODY()
	
public:	

	AStrategy_Forma();

protected:

	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;

	virtual void Realizar() override {};

	//vida aleatoria entre 5.0f y 15.0f
	float VidaForma = FMath::RandRange(5.0f, 15.0f);
	// Initialize the Estado variable to true
	bool EstadoCambioForma = true;
	// Initialize the NumeroCambio variable
	int NumeroCambio = 0;
	// Initialize the LastChangeTime variable
	float LastChangeTime = 0.0f;
	float ScaleFactor = 4.0f;

private:

	UPROPERTY()
	ASol* SolForma;

public:

	virtual void Destroyed() override;
	virtual void Actualizar(class AObserver_Publicador* Publicador) override;
	virtual void Transformacion() override;
	void definirFuncion(ASol* myForma_Sol);


	UPROPERTY(BlueprintReadWrite, Category = "Strategy")
	FTimerHandle TimerHandle;
	void ReduceLifeForma();
};
