#pragma once

#include "CoreMinimal.h"
#include "Mesa.h"
#include "MesaCuadrada.generated.h"

UCLASS()
class EXPERIMENTO_PATRONES_API AMesaCuadrada : public AMesa
{
	GENERATED_BODY()
public:
	AMesaCuadrada();
	virtual void Tick(float DeltaTime) override;
	virtual void CrearMesa() override;
	virtual void Accionar() override;
protected:
	virtual void BeginPlay() override;
};
