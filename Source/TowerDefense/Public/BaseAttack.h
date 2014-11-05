// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Defines.h"

/**
 * 
 */

class ABaseUnit;
class BaseEffect;

class TOWERDEFENSE_API BaseAttack
{
public:
	BaseAttack() = default;
	virtual ~BaseAttack() {};

	/** Name of the attack */
	FString Name;

	/** Description of the attack */
	FString Description;

	/** Minimal range of the attack (in meters) */
	float RangeMin;

	/** Maximal range of the attack (in meters) */
	float RangeMax;

	/** Time between each attack (in seconds) */
	float Cooldown;

	/** Current cooldown time */
	float CurrentCooldown;

	/** Min damages for each attack */
	float MinDamages;

	/** Max damages for each attack */
	float MaxDamages;

	/** Primary target */
	ABaseUnit* Target;

	/** Effects applieds to the target */
	TArray<TSharedPtr<BaseEffect>> EffectsApply;


	void Tick(float elapsed);
	void SearchTarget();
	void Fire();
};
