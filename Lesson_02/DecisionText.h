// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecisionText.generated.h"

UCLASS()
class FMI_API ADecisionText : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecisionText();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextDecision")
	bool isDead = false;

	UFUNCTION(BlueprintCallable)
	void setTextToDisplay();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TextDecision")
	FString message;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
