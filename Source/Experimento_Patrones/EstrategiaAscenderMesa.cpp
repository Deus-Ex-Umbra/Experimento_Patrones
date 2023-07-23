#include "EstrategiaAscenderMesa.h"

AEstrategiaAscenderMesa::AEstrategiaAscenderMesa()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEstrategiaAscenderMesa::BeginPlay()
{
	Super::BeginPlay();	
}

void AEstrategiaAscenderMesa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaAscenderMesa::AccionarMesa(AMesa* _mesa)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("AccionarMesa"));
	_mesa->TablaMesh->SetRelativeLocation(_mesa->PosicionDeTabla);
	int contador = 0;
	for (auto& Patas : _mesa->PatasMesh) {
		Patas->SetRelativeLocation(_mesa->PosicionesDePatas[contador]);
		contador++;
	}
	auto PosicionNueva = _mesa->PosicionDeTabla;
	PosicionNueva += FVector(0.0f, 0.0f, FMath::RandRange(3, 7) * 10);
	_mesa->TablaMesh->SetRelativeLocation(PosicionNueva);
	for (auto& Patas : _mesa->PatasMesh) {
		PosicionNueva = Patas->GetRelativeLocation() + FVector(0.0f, 0.0f, FMath::RandRange(3, 7) * 10);
		Patas->SetRelativeLocation(PosicionNueva);
	}
}

