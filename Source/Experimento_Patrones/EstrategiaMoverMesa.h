#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaMesa.h"
#include "Mesa.h"
#include "EstrategiaMoverMesa.generated.h"

UCLASS()
class EXPERIMENTO_PATRONES_API AEstrategiaMoverMesa : public AActor, public IEstrategiaMesa
{
	GENERATED_BODY()	
public:	
	AEstrategiaMoverMesa();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void AccionarMesa(AMesa* _mesa) override;
};
