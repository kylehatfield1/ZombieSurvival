// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "PatrolRoute.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ZOMBIESURVIVAL_API UPatrolRoute : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPatrolRoute();

	UFUNCTION(BlueprintPure, Category = "Patrol")
	TArray<ATargetPoint*> GetPatrolPoints() const;	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:	
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
	TArray<ATargetPoint*> PatrolPoints;


	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
