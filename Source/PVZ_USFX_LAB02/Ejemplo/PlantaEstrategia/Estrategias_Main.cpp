// Fill out your copyright notice in the Description page of Project Settings.


#include "Estrategias_Main.h"
#include "Planta_Estrategia.h"
#include "EstrategiaDisparoRapido.h"
#include "EstrategiaDisparoLento.h"
#include "EstrategiaDisparoAtras.h"

// Sets default values
AEstrategias_Main::AEstrategias_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategias_Main::BeginPlay()
{
	Super::BeginPlay();
	

	//Spawn the Battle Ship
	APlanta_Estrategia* Planta_Estrategia = GetWorld()->SpawnActor<APlanta_Estrategia>(APlanta_Estrategia::StaticClass(), FVector(-500.0f, -200.0f, 80.0f), FRotator::ZeroRotator);
	//Create the Brute Force Strategy and set it to the Battle Ship
	AEstrategiaDisparoRapido* EstrategiaDisparoRapido = GetWorld()->SpawnActor<AEstrategiaDisparoRapido>(AEstrategiaDisparoRapido::StaticClass());

	//Create the Brute Force Strategy and set it to the Battle Ship
	AEstrategiaDisparoLento* EstrategiaDisparoLento = GetWorld()->SpawnActor<AEstrategiaDisparoLento>(AEstrategiaDisparoLento::StaticClass());

	//Create the Brute Force Strategy and set it to the Battle Ship
	AEstrategiaDisparoAtras* EstrategiaDisparoAtrasAdelante = GetWorld()->SpawnActor<AEstrategiaDisparoAtras>(AEstrategiaDisparoAtras::StaticClass());


	//CAMBIAR LA ESTRATEGIA QUE SE DESEA....................................................................
	
	//Planta_Estrategia->CambiarEstrategia(EstrategiaDisparoRapido);
	//Planta_Estrategia->CambiarEstrategia(EstrategiaDisparoLento);
	Planta_Estrategia->CambiarEstrategia(EstrategiaDisparoAtrasAdelante);
	
	//Engage with the current Strategy
	Planta_Estrategia->RealizarEstrategia(Planta_Estrategia);

}

// Called every frame
void AEstrategias_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

