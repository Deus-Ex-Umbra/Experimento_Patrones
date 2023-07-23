#include "EstrategiaMoverMesa.h"

AEstrategiaMoverMesa::AEstrategiaMoverMesa()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEstrategiaMoverMesa::BeginPlay()
{
	Super::BeginPlay();
}

void AEstrategiaMoverMesa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaMoverMesa::AccionarMesa(AMesa* _mesa)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("AccionarMesa"));
	_mesa->TablaMesh->SetRelativeLocation(_mesa->PosicionDeTabla);
	int contador = 0;
	for (auto& Patas : _mesa->PatasMesh) {
		Patas->SetRelativeLocation(_mesa->PosicionesDePatas[contador]);
		contador++;
	}
	auto PosicionNueva = _mesa->PosicionDeTabla;
	PosicionNueva += FVector(0.0f, FMath::RandRange(3, 9) * 10, 0.0f);
	_mesa->TablaMesh->SetRelativeLocation(PosicionNueva);
	for (auto& Patas : _mesa->PatasMesh) {
		PosicionNueva = Patas->GetRelativeLocation() + FVector(0.0f, FMath::RandRange(3, 9) * 10, 0.0f);
		Patas->SetRelativeLocation(PosicionNueva);
	}
}

