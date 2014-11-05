// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Behaviors/UnitBehavior.h"
#include "Defines.h"
#include "BaseUnit.generated.h"

/**
 * 
 */

UCLASS()
class TOWERDEFENSE_API ABaseUnit : public APawn
{
	GENERATED_UCLASS_BODY()

	/** Name of the unit */
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Unit Info")
		FString Name;

	/** Attacker or defender */
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Unit Info")
		EUnitType Type;

	/** Maximum life of the unit */
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Unit Stats")
		float MaxLife;

	/** Current life of the unit */
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Unit Stats")
		float CurrentLife;

	/** Unit speed in m/s */
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Unit Stats")
		float Speed;

	/** Damage reduction of the unit. Each index is an EElement */
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Unit Stats")
		TArray<float> Defense;

	/** Unit behavior. Updated each frame */
	TSharedPtr<UnitBehavior> Behavior;
};