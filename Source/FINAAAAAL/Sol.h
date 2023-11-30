// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Observer_Publicador.h"
#include "Strategy_Interface.h"
#include "GameFramework/Actor.h"
#include "Sol.generated.h"

class AObserver_Publicador;
UCLASS()
class FINAAAAAL_API ASol : public AObserver_Publicador
{
public:	

	ASol();

	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshAspecto;

protected:

	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;

	FString Estado1;

	IStrategy_Interface* Estrategia;

	//para asignar estrategias
	void Casteo(AActor* _Estrategia);
	void LlamarEstrategia();

	//para cambiar estados
	void EstadoCambiado();
	void DefinirEstado(FString myEstado);
	FORCEINLINE FString GetEstado() { return Estado1; }
};
