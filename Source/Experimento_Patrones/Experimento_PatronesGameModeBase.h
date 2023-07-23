#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Experimento_PatronesGameModeBase.generated.h"

UCLASS()
class EXPERIMENTO_PATRONES_API AExperimento_PatronesGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AExperimento_PatronesGameModeBase();
	virtual void Tick(float DeltaTime) override;
	UPROPERTY()
		class AMesa* Mesa;
	UPROPERTY()
		class AFabricaDeMesa* FabricaMesa;
protected:
	virtual void BeginPlay() override;
private:
	class AEstrategiaAscenderMesa* EstrategiaAscenderMesa;
	class AEstrategiaDesarmarMesa* EstrategiaDesarmarMesa;
	class AEstrategiaMoverMesa* EstrategiaMoverMesa;
	FVector PosicionMesa;
	FRotator RotacionMesa;
	float Tiempo;
	class IEstrategiaMesa* ObtenerNuevaEstrategia(int _numeroestrategia);
};
