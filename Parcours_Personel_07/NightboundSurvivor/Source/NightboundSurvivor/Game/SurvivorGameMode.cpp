#include "SurvivorGameMode.h"
#include "NightboundSurvivor/Enemies/SurvivorEnemies.h"

ASurvivorGameMode::ASurvivorGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASurvivorGameMode::BeginPlay()
{
	Super::BeginPlay();

	ASurvivorEnemies::ResetTotalEnemies();
	KillCount = 0;

}

void ASurvivorGameMode::OnEnemyKilled()
{
	KillCount++;
	KillsSinceLastUpgrade++;

	if (KillsSinceLastUpgrade >= KillsPerUpgrade)
	{
		OnUpgradeAvailable();
		KillsSinceLastUpgrade = 0;
	}
}


