// Fill out your copyright notice in the Description page of Project Settings.


#include "PlantaDeHIelo.h"

// Sets default values
APlantaDeHIelo::APlantaDeHIelo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlantaDeHIelo::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlantaDeHIelo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlantaDeHIelo::DefinirTipoDisparo(AActor* TiposDisparoObj)
{
	//Cast the passed Actor and set the Weapon
	TipoDisparo = Cast<ITipoDisparo>(TiposDisparoObj);
	if (!TipoDisparo) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetSlingShot(): The Actor is not a SlingShot!Are you sure that the Actor implements that interface ? "));
	}
}

void APlantaDeHIelo::DisparoHielo()
{
	if (!TipoDisparo) {
		UE_LOG(LogTemp, Error, TEXT("Sling(): SlingShot is NULL, make sure it's initialized."));
		return;
	}
	//Fire
	TipoDisparo->DisparoHielo();
}
