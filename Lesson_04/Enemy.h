// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

struct EnemyData {
	float health = 100.0;
	bool isDead = false;
	bool isAttacking = false;
	bool didKillPlayer = false;

};


UCLASS()
class FMI_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

	EnemyData enemyData;

	UFUNCTION(BlueprintPure)
	float CheckHealth();

	UFUNCTION(BlueprintPure)
	bool CheckIsDead();

	UFUNCTION(BlueprintPure)
	bool CheckIsAttacking();

	UFUNCTION(BlueprintPure)
	bool CheckIfEnemyKilledPlayer();

	UFUNCTION(BlueprintCallable)
	void SetIsDead(bool isEnemyDead);

	UFUNCTION(BlueprintCallable)
	void SetIsAttacking(bool isEnemyAttacking);

	UFUNCTION(BlueprintCallable)
	void SetDidKillPlayer(bool didEnemyKillThePlayer);

	UFUNCTION(BlueprintCallable)
	void TakeDamage(float DamageAmount);

	// ####################################
	// Start of Code For Demonstration
	// ####################################

	float ReadHealthByValue(EnemyData data, bool showAddress = false) const;

	float ReadHealthByReference(const EnemyData& data, bool showAddress = false) const;

	bool ReadIsDeadByValue(EnemyData data, bool showAddress = false) const;

	UFUNCTION(BlueprintCallable)
	float CheckHealthByValueWithDisplay();

	UFUNCTION(BlueprintCallable)
	float CheckHealthByReferenceWithDisplay();

	UFUNCTION(BlueprintCallable)
	bool CheckIsDeadByValueWithDisplay();

	// ####################################
	// End of Code For Demonstration
	// ####################################


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
