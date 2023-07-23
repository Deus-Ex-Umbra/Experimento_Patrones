#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaDeMesa.generated.h"

UCLASS()
class EXPERIMENTO_PATRONES_API AFabricaDeMesa : public AActor
{
	GENERATED_BODY()
public:	
	AFabricaDeMesa();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	class AMesa* Fabricar(int _numeromesa, FVector _Locacion, FRotator _Rotacion);
};
