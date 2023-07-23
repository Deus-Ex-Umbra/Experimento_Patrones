#include "Mesa.h"

AMesa::AMesa()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMesa::BeginPlay()
{
	Super::BeginPlay();
}

void AMesa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMesa::EstablecerEstrategia(class IEstrategiaMesa* _Estrategia)
{
	Estrategia = _Estrategia;
}
