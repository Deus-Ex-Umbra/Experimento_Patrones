#include "EstrategiaDesarmarMesa.h"

AEstrategiaDesarmarMesa::AEstrategiaDesarmarMesa()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEstrategiaDesarmarMesa::BeginPlay()
{
	Super::BeginPlay();	
}

void AEstrategiaDesarmarMesa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaDesarmarMesa::AccionarMesa(AMesa* _mesa)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("AccionarMesa"));
	auto PosicionTabla = _mesa->PosicionDeTabla;
	PosicionTabla += FVector(60.0f, 60.0f, 60.0f);
	auto PosicionPata = _mesa->PosicionesDePatas[1];
	PosicionPata += FVector(-60.0f, -60.0f, -60.0f);
	_mesa->TablaMesh->SetRelativeLocation(PosicionTabla);
	for (auto& Patas : _mesa->PatasMesh) {
		Patas->SetRelativeLocation(PosicionPata);
	}
}

