// Copyright 2023, Colorado Stark
// License MIT

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SphereTarget.generated.h"

UCLASS()
class LESSON01_API ASphereTarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASphereTarget();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Display")
	bool showNormalMap = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Display")
	float Roughness = 0.2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Display")
	float Metallic = 0.9;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Game Data")
	bool didPlayerHitTarget = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
