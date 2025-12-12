#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h" 
#include "AbilitySystemInterface.h"
#include "NightboundSurvivor/GameplayAbilitySystem/SurvivorAttributeSet.h"
#include "SurvivorEnemies.generated.h"

class ASurvivorCharacter;

UCLASS()
class NIGHTBOUNDSURVIVOR_API ASurvivorEnemies : public ACharacter, public IAbilitySystemInterface
{
    GENERATED_BODY()

public:
    ASurvivorEnemies();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
    class UAbilitySystemComponent* AbilitySystemComponent;

    UPROPERTY()
    class USurvivorAttributeSet* Attributes;

    virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
    int EMaxHealth = 50;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Stats")
    int ECurrentHealth;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
    int EDamage = 10;

    static int TotalEnemies;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AI")
    ASurvivorCharacter* PlayerRef;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
    float MoveSpeed = 300.0f;

    bool bCanDamagePlayer = true;
    FTimerHandle DamageCooldownHandle;
    float DamageCooldown = 1.0f;

public:
    UFUNCTION(BlueprintCallable)
    static int GetTotalEnemies();

    UFUNCTION(BlueprintCallable)
    static void ResetTotalEnemies();

    void ResetCanDamagePlayer();
    void TakeDamageFromPlayer(int PDamageAmount);
    
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    
    virtual void HandleDeath();
    
    UFUNCTION()
    void OnCapsuleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};