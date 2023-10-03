// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float AEnemy::CheckHealth()
{
	return enemyData.health;
}

bool AEnemy::CheckIsDead()
{
	return enemyData.isDead;
}

bool AEnemy::CheckIsAttacking()
{
	return enemyData.isAttacking;
}

bool AEnemy::CheckIfEnemyKilledPlayer()
{
	return enemyData.didKillPlayer;
}

void AEnemy::SetIsDead(bool isEnemyDead)
{
	enemyData.isDead = isEnemyDead;
}

void AEnemy::SetIsAttacking(bool isEnemyAttacking)
{
	enemyData.isAttacking = isEnemyAttacking;
}

void AEnemy::SetDidKillPlayer(bool didEnemyKillThePlayer)
{
	enemyData.didKillPlayer = didEnemyKillThePlayer;
}

void AEnemy::TakeDamage(float DamageAmount)
{
	enemyData.health = enemyData.health - DamageAmount;
	if (enemyData.health <= 0) {
		SetIsDead(true);
	}
}

// ####################################
// Code For Demonstration
// ####################################

float AEnemy::CheckHealthByValueWithDisplay()
{
	return ReadHealthByValue(enemyData, true);
}

float AEnemy::CheckHealthByReferenceWithDisplay()
{
	return ReadHealthByReference(enemyData, true);
}

bool AEnemy::CheckIsDeadByValueWithDisplay()
{
	return ReadIsDeadByValue(enemyData, true);
}

float AEnemy::ReadHealthByValue(EnemyData data, bool showAddress) const
{
	if (GEngine && showAddress)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("The Address when accessed by Value is :  %lld"), &data));
	return data.health;
}

float AEnemy::ReadHealthByReference(const EnemyData& data, bool showAddress) const
{
	if (GEngine && showAddress)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("The Address when accessed by Reference is :  %lld"), &data));
	return data.health;
}

bool AEnemy::ReadIsDeadByValue(EnemyData data, bool showAddress) const
{
	if (GEngine && showAddress)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("The Address when accessed by Value is :  %lld"), &data));
	return data.isDead;
}

// ####################################
// End of Code For Demonstration
// ####################################



