// Fill out your copyright notice in the Description page of Project Settings.


// This Class will be used as a base class for the Plant Base Class as well even though it is called 'Creature Base Class'
// Possibly will rename this class to 'Life Form Base Class'

#include "ZombieSurvival.h"
#include "CreatureBaseClass.h"


// Sets default values
ACreatureBaseClass::ACreatureBaseClass()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Gender = EGender::Base;
	AggroType = EAggroType::Base;
	PrimaryCreatureType = EPrimaryCreatureType::Base;
	SecondaryCreatureType = ESecondaryCreatureType::Base;
	TertiaryCreatureType = ETertiaryCreatureType::Base;
	FoodChainLevel = EFoodChainLevel::Base;
}

// Called when the game starts or when spawned
void ACreatureBaseClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACreatureBaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACreatureBaseClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

EGender ACreatureBaseClass::GetGender()
{
	return Gender;
}

EAggroType ACreatureBaseClass::GetAggroType()
{
	return AggroType;
}

EPrimaryCreatureType ACreatureBaseClass::GetPrimaryCreatureType()
{
	return PrimaryCreatureType;
}

ESecondaryCreatureType ACreatureBaseClass::GetSecondaryCreatureType()
{
	return SecondaryCreatureType;
}

ETertiaryCreatureType ACreatureBaseClass::GetTertiaryCreatureType()
{
	return TertiaryCreatureType;
}

EFoodChainLevel ACreatureBaseClass::GetFoodChainLevel()
{
	return FoodChainLevel;
}