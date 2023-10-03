// Fill out your copyright notice in the Description page of Project Settings.


#include "BossGate.h"

// Sets default values
ABossGate::ABossGate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABossGate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABossGate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


bool ABossGate::CanPassGate()
{
	if (torchesLit > 3)
	{
		return true;
	}
	return false;
}

void ABossGate::IncrementTorchesLit()
{
	torchesLit++;
}

