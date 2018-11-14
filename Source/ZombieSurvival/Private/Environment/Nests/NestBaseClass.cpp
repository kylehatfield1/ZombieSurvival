// Fill out your copyright notice in the Description page of Project Settings.

#include "ZombieSurvival.h"
#include "NestBaseClass.h"

#include "Characters/NPCs/CreatureBaseClass.h"

// Sets default values
ANestBaseClass::ANestBaseClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	bCanReproduce = false;
	NestType = ENestType::Base;
	ReproductionRate = 60;
	NestBase = CreateDefaultSubobject<USceneComponent>(TEXT("NestBase"));
	RootComponent = NestBase;
	numOccupants = 0;
}

// Called when the game starts or when spawned
void ANestBaseClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANestBaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANestBaseClass::AddOccupant(ACreatureBaseClass* NewOccupant)
{
	if (!ensure(NewOccupant != nullptr)) return;
	Occupants.Add(NewOccupant);
	EGender NewOccupantGender = NewOccupant->GetGender();
	switch (NewOccupantGender)
	{
	case EGender::Base:
		break;
	case EGender::Non_Binary:
		numNon_BinaryOccupants ++;
		break;
	case EGender::Female:
		numFemaleOccupants ++;
		break;
	case EGender::Male:
		numMaleOccupants ++;
		break;
	}
}

