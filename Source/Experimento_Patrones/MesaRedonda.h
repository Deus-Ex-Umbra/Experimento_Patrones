#pragma once

#include "CoreMinimal.h"
#include "Mesa.h"
#include "MesaRedonda.generated.h"

UCLASS()
class EXPERIMENTO_PATRONES_API AMesaRedonda : public AMesa
{
	GENERATED_BODY()
public:
	AMesaRedonda();
	virtual void Tick(float DeltaTime) override;
	virtual void CrearMesa() override;
	virtual void Accionar() override;
protected:
	virtual void BeginPlay() override;

};
