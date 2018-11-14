// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NestBaseClass.generated.h"

UENUM()
enum class ENestType : uint8
{
	Base, Deer, Zombie
};

UCLASS()
class ZOMBIESURVIVAL_API ANestBaseClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANestBaseClass();

protected:
	USceneComponent* NestBase;
	int numOccupants;
	int numNon_BinaryOccupants;
	int numFemaleOccupants;
	int numMaleOccupants;
	TArray<class ACreatureBaseClass*> Occupants;
	ENestType NestType;
	bool bCanReproduce;
	float ReproductionRate;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void AddOccupant(class ACreatureBaseClass* NewOccupant);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
