// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Defines.h"

/**
 * 
 */
class ABaseUnit;

struct TowerInfo
{
	TowerInfo(ABaseUnit* u, int c) : unit(u), cost(c) {}

	ABaseUnit* unit;
	int cost;
};

class TOWERDEFENSE_API TowerManager
{
public:
	TowerManager();
	~TowerManager();

	void Initialize();

	void AddTower(ETower tower, ABaseUnit* clonable, int cost);

	TArray<TArray<TSharedPtr<TowerInfo>>> Towers;
};
