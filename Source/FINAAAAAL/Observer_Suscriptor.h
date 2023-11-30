// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Observer_Suscriptor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UObserver_Suscriptor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FINAAAAAL_API IObserver_Suscriptor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Actualizar(class AObserver_Publicador* Publicador) = 0;

};
