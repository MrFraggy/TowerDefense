// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <assert.h>
#include <random>
#include "Defines.generated.h"

#define CASSERT(a,b) assert(a && !b);

/**
 *
 */
UENUM(BlueprintType)
enum class EElement : uint8
{
	Normal UMETA(DisplayName = "Normal"),
	Fire UMETA(DisplayName = "Fire"),
	Ice UMETA(DisplayName = "Ice"),
	Poison UMETA(DisplayName = "Poison"),

	Max
};

UENUM(BlueprintType)
enum class EUnitType : uint8
{
	Attacker UMETA(DisplayName = "Attacker"),
	Defender UMETA(DisplayName = "Defender"),
	Neutral UMETA(DisplayName = "Neutral"),
};

static std::mt19937 generator;
inline float getRandomFloat(float min, float max) 
{ 
	std::uniform_real_distribution<float> dist(min, max);
	return dist(generator);
}