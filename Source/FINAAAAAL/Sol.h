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
	// Sets default values for this actor's properties
	ASol();

	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshAspecto;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	IStrategy_Interface* Estrategia;

	void Casteo(AActor* _Estrategia);
	void LlamarEstrategia();

	FString Estado1;

	void EstadoCambiado();
	void DefinirEstado(FString myEstado);
	FORCEINLINE FString GetEstado() { return Estado1; }
};
