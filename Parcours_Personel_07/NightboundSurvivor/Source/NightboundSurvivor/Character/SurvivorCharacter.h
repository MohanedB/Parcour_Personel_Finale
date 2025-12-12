#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "SurvivorCharacter.generated.h"

class UAbilitySystemComponent;
class USurvivorAttributeSet;
class UGameplayAbility;
class UGameplayEffect;

UCLASS()
class NIGHTBOUNDSURVIVOR_API ASurvivorCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ASurvivorCharacter();

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes | Upgrades")
	TSubclassOf<UGameplayEffect> HealEffectClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes | Upgrades")
	TSubclassOf<UGameplayEffect> DamageUpgradeEffectClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes | Upgrades")
	TSubclassOf<UGameplayEffect> MaxHealthUpgradeEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	float PMaxHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	float PCurrentHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	float PDamage = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
	TSubclassOf<UGameplayAbility> StarterAttack;

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	float GetHealthPercent();

	UFUNCTION(BlueprintCallable, Category = "Upgrades")
	void ApplyHealUpgrade();

	UFUNCTION(BlueprintCallable, Category = "Upgrades")
	void ApplyDamageUpgrade();

	UFUNCTION(BlueprintCallable, Category = "Upgrades")
	void ApplyMaxHealthUpgrade();

	UFUNCTION()
	void OnCapsuleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	USurvivorAttributeSet* Attributes;

	void ApplyGameplayEffect(TSubclassOf<UGameplayEffect> EffectClass);

public:

	void TakeDamageFromEnemy(int EDamageAmount);
};