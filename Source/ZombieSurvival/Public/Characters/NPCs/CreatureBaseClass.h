// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CreatureBaseClass.generated.h"

UENUM()
enum class EGender : uint8
{
	Base, Non_Binary, Male, Female
};

UENUM()
enum class EAggroType : uint8
{
	Base, Neutral, Friendly, Enemy, Spectator
};

UENUM() // "Life Form Type"
enum class EPrimaryCreatureType : uint8
{
	Base, Plant, Animal, Undead
};

UENUM()
enum class ESecondaryCreatureType : uint8
{
	Base, Mammal, Marsupial, Reptile, Amphibian
};

UENUM()
enum class ETertiaryCreatureType : uint8
{
	Base, Humanoid, Deer, Squirrel, Rabbit, Fish,
};

UENUM()
enum class EFoodChainLevel : uint8
{
	Base, Unedible, Bottom, Preditor, SecondaryPreditor, ApexPreditor
};

UCLASS()
class ZOMBIESURVIVAL_API ACreatureBaseClass : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACreatureBaseClass();

protected:
	EGender Gender;
	EAggroType AggroType;
	EPrimaryCreatureType PrimaryCreatureType;
	ESecondaryCreatureType SecondaryCreatureType;
	ETertiaryCreatureType TertiaryCreatureType;
	EFoodChainLevel FoodChainLevel;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	EGender GetGender();
	EAggroType GetAggroType();
	EPrimaryCreatureType GetPrimaryCreatureType();
	ESecondaryCreatureType GetSecondaryCreatureType();
	ETertiaryCreatureType GetTertiaryCreatureType();
	EFoodChainLevel GetFoodChainLevel();
};
