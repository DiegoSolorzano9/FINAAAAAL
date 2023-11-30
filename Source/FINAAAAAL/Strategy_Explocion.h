// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Strategy_Tamanio.h"
#include "Strategy_Interface.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Strategy_Explocion.generated.h"

UCLASS()
class FINAAAAAL_API AStrategy_Explocion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStrategy_Explocion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
