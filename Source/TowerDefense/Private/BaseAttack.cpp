// Fill out your copyright notice in the Description page of Project Settings.

#include "TowerDefense.h"
#include "BaseAttack.h"
#include "Effects/BaseEffect.h"

void BaseAttack::Tick(float elapsed)
{
	// Not ready to fire
	if (CurrentCooldown > 0)
		CurrentCooldown -= elapsed;
	else
	{
		if (!Target)
			SearchTarget();
		else
			Fire();
	}
}

void BaseAttack::SearchTarget()
{
	// Todo look for target between RangeMin et RangeMax
}

void BaseAttack::Fire()
{
	CASSERT(Target, "No target set but fire() called");
	CurrentCooldown = Cooldown;
	for (auto& e : EffectsApply)
		e->OnHit(Target, getRandomFloat(MinDamages, MaxDamages));
}