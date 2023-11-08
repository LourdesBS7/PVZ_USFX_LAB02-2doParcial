// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaDisparoLento.h"
#include "Planta_Estrategia.h"

// Sets default values
AEstrategiaDisparoLento::AEstrategiaDisparoLento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaDisparoLento::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEstrategiaDisparoLento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaDisparoLento::EstrategiaPlanta(AActor* PlantaHabi)
{
	//Execute the routine of this type of Strategy
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Estrategia de disparo Lento"));
	APlanta_Estrategia* PlantaEs = Cast<APlanta_Estrategia>(PlantaHabi);
	PlantaEs->GetTiempoTranscurrido(3.0f);
	
}

