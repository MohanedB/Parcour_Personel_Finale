#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemiesSpawner.generated.h"

class ASurvivorEnemies;

UCLASS()
class NIGHTBOUNDSURVIVOR_API AEnemiesSpawner : public AActor
{
	GENERATED_BODY()
    
public: 
	AEnemiesSpawner();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Spawner")
	TSubclassOf<ASurvivorEnemies> EnemyClass;

	UPROPERTY(EditAnywhere, Category = "Spawner")
	float SpawnDistance = 100.f;

	UPROPERTY(EditAnywhere, Category = "Spawner")
	int NumberToSpawn = 1;

	UPROPERTY(EditAnywhere, Category = "Spawner")
	float SpawnInterval = 2.f;

	float TimeSinceLastSpawn = 0.f;

	void SpawnEnemies();
};
