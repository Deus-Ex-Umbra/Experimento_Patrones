#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EstrategiaMesa.generated.h"

UINTERFACE(MinimalAPI)
class UEstrategiaMesa : public UInterface
{
	GENERATED_BODY()
};

class EXPERIMENTO_PATRONES_API IEstrategiaMesa
{
	GENERATED_BODY()
public:
	virtual void AccionarMesa(class AMesa* _mesa) = 0;
};
