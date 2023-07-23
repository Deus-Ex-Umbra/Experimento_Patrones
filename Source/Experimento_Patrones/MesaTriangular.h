#pragma once
#include "CoreMinimal.h"
#include "Mesa.h"
#include "MesaTriangular.generated.h"

UCLASS()
class EXPERIMENTO_PATRONES_API AMesaTriangular : public AMesa
{
	GENERATED_BODY()
public:
	AMesaTriangular();
	virtual void Tick(float DeltaTime) override;
	virtual void CrearMesa() override;
	virtual void Accionar() override;
protected:
	virtual void BeginPlay() override;
};
