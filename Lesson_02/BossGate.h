// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossGate.generated.h"

UCLASS()
class FMI_API ABossGate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABossGate();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Display")
	int torchesLit = 0;

	UFUNCTION(BlueprintCallable, Category = "Display")
	bool CanPassGate();

	UFUNCTION(BlueprintCallable, Category = "Display")
	void IncrementTorchesLit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
