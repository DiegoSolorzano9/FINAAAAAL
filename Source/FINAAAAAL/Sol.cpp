// Fill out your copyright notice in the Description page of Project Settings.


#include "Sol.h"

ASol::ASol()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshAspecto = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Aspecto"));
	RootComponent = MeshAspecto;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	MeshAspecto->SetStaticMesh(MeshAsset.Object);
	MeshAspecto->SetRelativeScale3D(FVector(4.0f, 4.0f, 4.0f));
}

void ASol::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASol::Casteo(AActor* _Estrategia)
{
	Estrategia = Cast<IStrategy_Interface>(_Estrategia);
}

void ASol::LlamarEstrategia()
{
	Estrategia->Realizar();
}

void ASol::EstadoCambiado()
{
	NotificarSuscriptores();

}

void ASol::DefinirEstado(FString myEstado)
{
	//Define el estado de la accioon segun el parametro pasado y advierte que el estado a cambiado
	Estado1 = myEstado;
	EstadoCambiado();
}

