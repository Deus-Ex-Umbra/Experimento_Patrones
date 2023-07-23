#include "FabricaDeMesa.h"
#include "Mesa.h"
#include "MesaCuadrada.h"
#include "MesaRedonda.h"
#include "MesaTriangular.h"

AFabricaDeMesa::AFabricaDeMesa()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFabricaDeMesa::BeginPlay()
{
	Super::BeginPlay();
}

void AFabricaDeMesa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AMesa* AFabricaDeMesa::Fabricar(int _numeromesa, FVector _Locacion, FRotator _Rotacion)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Fabricando Mesa %d"), _numeromesa));
	switch (_numeromesa)
	{
	case 1:
		return GetWorld()->SpawnActor<AMesaCuadrada>();
	case 2:
		return GetWorld()->SpawnActor<AMesaRedonda>();
	default:
		return GetWorld()->SpawnActor<AMesaTriangular>();
	}
}

