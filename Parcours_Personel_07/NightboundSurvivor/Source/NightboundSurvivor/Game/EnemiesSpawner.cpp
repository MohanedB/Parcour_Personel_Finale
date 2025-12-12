#include "EnemiesSpawner.h"
#include "Kismet/GameplayStatics.h"
#include "NightboundSurvivor/Enemies/SurvivorEnemies.h"

AEnemiesSpawner::AEnemiesSpawner()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemiesSpawner::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemiesSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UWorld* World = GetWorld();
	if (World == nullptr)
	{
		return;
	}

	if (EnemyClass == nullptr)
	{
		return;
	}

	if (SpawnInterval <= 0.0f)
	{
		return;
	}

	TimeSinceLastSpawn += DeltaTime;

	if (TimeSinceLastSpawn >= SpawnInterval)
	{
		TimeSinceLastSpawn = 0.0f;
		SpawnEnemies();
	}
}

void AEnemiesSpawner::SpawnEnemies()
{
	UWorld* World = GetWorld();
	if (World == nullptr)
	{
		return;
	}

	for (int i = 0; i < NumberToSpawn; ++i)
	{
		FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * SpawnDistance;
		World->SpawnActor<ASurvivorEnemies>(EnemyClass, SpawnLocation, FRotator::ZeroRotator);
	}
}
