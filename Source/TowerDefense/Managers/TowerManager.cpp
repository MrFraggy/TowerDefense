// Fill out your copyright notice in the Description page of Project Settings.

#include "TowerDefense.h"
#include "TowerManager.h"
#include "Public/BaseUnit.h"
#include "Public/BaseAttack.h"
#include "Behaviors/StaticBehavior.h"

#include "Units/Gatling.h"

TowerManager::TowerManager()
{
	uint8 max = static_cast<uint8>(ETower::Max);
	for (uint8 i = 0; i < max; ++i)
		Towers.Add(TArray<TSharedPtr<TowerInfo>>());
}

TowerManager::~TowerManager()
{
}

void TowerManager::Initialize()
{
	// Gatling
	ABaseUnit* u = SpawnActor<AGatling>();
	AddTower(ETower::Gatling, u, 100);
	
}

void TowerManager::AddTower(ETower tower, ABaseUnit* clonable, int cost)
{
	Towers[static_cast<uint8>(tower)].Add(TSharedPtr<TowerInfo>(new TowerInfo(clonable, cost)));
}