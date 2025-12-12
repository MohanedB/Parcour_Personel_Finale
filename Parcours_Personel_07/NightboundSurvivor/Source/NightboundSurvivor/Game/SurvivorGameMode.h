#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SurvivorGameMode.generated.h"

UCLASS()
class NIGHTBOUNDSURVIVOR_API ASurvivorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASurvivorGameMode();

	

protected:
	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Upgrades")
	int KillsPerUpgrade = 10;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Upgrades")
	int KillsSinceLastUpgrade = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Upgrades")
	int KillCount = 0;

public:

	UFUNCTION(BlueprintCallable)
	void OnEnemyKilled();

	UFUNCTION(BlueprintImplementableEvent, Category="Upgrades")
	void OnUpgradeAvailable();

	

};
