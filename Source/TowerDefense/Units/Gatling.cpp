// Fill out your copyright notice in the Description page of Project Settings.

#include "TowerDefense.h"
#include "Gatling.h"
#include "Behaviors/StaticBehavior.h"

class GatlingAtk : public BaseAttack
{
public:
	GatlingAtk() : BaseAttack()
	{
		Name = "Basic attack";
		Description = "Make hole in their bodies!";
		RangeMin = 0.f;
		RangeMax = 50.f;
		Cooldown = 0.5;
		CurrentCooldown = 0.f;
		MinDamages = 10;
		MaxDamages = 20;
	}
};

AGatling::AGatling(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	Name = "Gatling";
	Type = EUnitType::Defender;
	MaxLife = 100;
	CurrentLife = MaxLife;
	Speed = 0.f;
	Behavior = TSharedPtr<UnitBehavior>(new StaticBehavior());
	Attack.Add(TSharedPtr<BaseAttack>(new GatlingAtk()));
}

