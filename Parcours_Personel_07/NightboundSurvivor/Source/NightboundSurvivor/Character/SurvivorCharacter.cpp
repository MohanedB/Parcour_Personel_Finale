#include "SurvivorCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AbilitySystemComponent.h" 
#include "GameplayEffect.h" 
#include "NightboundSurvivor/GameplayAbilitySystem/SurvivorAttributeSet.h"
#include "NightboundSurvivor/GameplayAbilitySystem/SurvivorDamageEffect.h" 

ASurvivorCharacter::ASurvivorCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	Attributes = CreateDefaultSubobject<USurvivorAttributeSet>(TEXT("Attributes"));
}

UAbilitySystemComponent* ASurvivorCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void ASurvivorCharacter::BeginPlay()
{
	Super::BeginPlay();

	PCurrentHealth = PMaxHealth;

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);

		if (Attributes)
		{
			Attributes->InitMaxHealth((float)PMaxHealth);
			Attributes->InitCurrentHealth((float)PCurrentHealth);
			Attributes->InitDamage((float)PDamage);
		}

		if (StarterAttack)
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(StarterAttack, 1));
		}
	}
}

void ASurvivorCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GEngine && Attributes)
    {
       
        FString HealthMsg = FString::Printf(TEXT("Health: %.0f / %.0f"), Attributes->GetCurrentHealth(), Attributes->GetMaxHealth());
        
        GEngine->AddOnScreenDebugMessage(1, 0.0f, FColor::Green, HealthMsg);

        FString DmgMsg = FString::Printf(TEXT("Damage: %.0f"), Attributes->GetDamage());
        
        GEngine->AddOnScreenDebugMessage(2, 0.0f, FColor::Red, DmgMsg);
    }
}

float ASurvivorCharacter::GetHealthPercent()
{
	if (Attributes)
	{
		float Max = Attributes->GetMaxHealth();
		if (Max <= 0.f) return 0.f;
		return Attributes->GetCurrentHealth() / Max;
	}
	return 0.f;
}

void ASurvivorCharacter::ApplyGameplayEffect(TSubclassOf<UGameplayEffect> EffectClass)
{
	if (!EffectClass || !AbilitySystemComponent) return;

	FGameplayEffectContextHandle Context = AbilitySystemComponent->MakeEffectContext();
	Context.AddSourceObject(this);

	FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(EffectClass, 1.0f, Context);

	if (SpecHandle.IsValid())
	{
		AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	}
}


void ASurvivorCharacter::ApplyHealUpgrade()
{
	ApplyGameplayEffect(HealEffectClass);
}

void ASurvivorCharacter::ApplyDamageUpgrade()
{
	ApplyGameplayEffect(DamageUpgradeEffectClass);
}

void ASurvivorCharacter::ApplyMaxHealthUpgrade()
{
	ApplyGameplayEffect(MaxHealthUpgradeEffectClass);
}


void ASurvivorCharacter::OnCapsuleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == this || !OtherActor) return;

	IAbilitySystemInterface* TargetInterface = Cast<IAbilitySystemInterface>(OtherActor);
	if (TargetInterface && AbilitySystemComponent)
	{
		UAbilitySystemComponent* TargetASC = TargetInterface->GetAbilitySystemComponent();
		if (TargetASC)
		{
			FGameplayEffectContextHandle Context = AbilitySystemComponent->MakeEffectContext();
			Context.AddSourceObject(this);
			FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(USurvivorDamageEffect::StaticClass(), 1.0f, Context);
			if (SpecHandle.IsValid())
			{
				TargetASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
			}
		}
	}
}