// Fill out your copyright notice in the Description page of Project Settings.

#include "TowerDefense.h"
#include "CompositeBehavior.h"

CompositeBehavior::CompositeBehavior()
{
}

CompositeBehavior::~CompositeBehavior()
{
}

void CompositeBehavior::Tick(float elapsed)
{
	for (auto& b : Behaviors)
		b->Tick(elapsed);
}