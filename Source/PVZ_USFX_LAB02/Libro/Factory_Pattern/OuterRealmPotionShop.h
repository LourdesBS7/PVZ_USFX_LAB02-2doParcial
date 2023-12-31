// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PotionShop.h"
#include "OuterRealmPotionShop.generated.h"

/**
 *
 */
UCLASS()
class PVZ_USFX_LAB02_API AOuterRealmPotionShop : public APotionShop
{
	GENERATED_BODY()

public:
	//Concoct the selected potion
	virtual APotion* ConcoctPotion(FString PotionSKU) override;


};
