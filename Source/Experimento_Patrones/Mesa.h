#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "Mesa.generated.h"

UCLASS(Abstract)
class EXPERIMENTO_PATRONES_API AMesa : public AActor
{
	GENERATED_BODY()
public:	
	AMesa();
	UPROPERTY()
		UStaticMeshComponent* TablaMesh;
	UPROPERTY()
		TArray<UStaticMeshComponent*> PatasMesh;
	UPROPERTY()
		UMaterial* MaterialDeTabla;
	UPROPERTY()
		UMaterial* MaterialDePatas;
	TArray<float> CoordenadasDeTabla;
	TArray<std::pair<float, std::pair<float, float>>> CoordenadasDePatas;
	FVector PosicionDeTabla;
	TArray<FVector> PosicionesDePatas;
protected:
	virtual void BeginPlay() override;
	class IEstrategiaMesa* Estrategia;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void CrearMesa() PURE_VIRTUAL(AMesa::CrearMesa, );
	virtual void EstablecerEstrategia(class IEstrategiaMesa* _Estrategia);
	virtual void Accionar() PURE_VIRTUAL(AMesa::Accionar, );
};