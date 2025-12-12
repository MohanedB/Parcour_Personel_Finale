#include "SurvivorEnemies.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AbilitySystemComponent.h"
#include "NightboundSurvivor/Character/SurvivorCharacter.h"
#include "NightboundSurvivor/Game/SurvivorGameMode.h"
#include "NightboundSurvivor/GameplayAbilitySystem/SurvivorDamageEffect.h"

int ASurvivorEnemies::TotalEnemies = 0;

ASurvivorEnemies::ASurvivorEnemies()
{
    PrimaryActorTick.bCanEverTick = true;

    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    AbilitySystemComponent->SetIsReplicated(true);
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

    Attributes = CreateDefaultSubobject<USurvivorAttributeSet>(TEXT("Attributes"));

    GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ASurvivorEnemies::OnCapsuleOverlap);
}

UAbilitySystemComponent* ASurvivorEnemies::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

void ASurvivorEnemies::BeginPlay()
{
    Super::BeginPlay();
    
    TotalEnemies++;
    
    ECurrentHealth = EMaxHealth;

    if (AbilitySystemComponent)
    {
       AbilitySystemComponent->InitAbilityActorInfo(this, this);
       if (Attributes)
       {
          Attributes->InitMaxHealth((float)EMaxHealth);
          Attributes->InitCurrentHealth((float)ECurrentHealth);
          Attributes->InitDamage((float)EDamage);
       }
    }

    if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
    {
       PlayerRef = Cast<ASurvivorCharacter>(PC->GetPawn());
    }
}


void ASurvivorEnemies::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
    if (!PlayerRef) return;
    FVector MyLocation = GetActorLocation();
    FVector PlayerLocation = PlayerRef->GetActorLocation();
    FVector Direction = PlayerLocation - MyLocation;
    Direction.Z = 0.0f;
    if (Direction.SizeSquared() < 1.0f) return;
    Direction.Normalize();
    FVector NewLocation = MyLocation + Direction * MoveSpeed * DeltaSeconds;
    SetActorLocation(NewLocation, true);
}

int ASurvivorEnemies::GetTotalEnemies() { return TotalEnemies; }
void ASurvivorEnemies::ResetTotalEnemies() { TotalEnemies = 0; }
void ASurvivorEnemies::ResetCanDamagePlayer() { bCanDamagePlayer = true; }
void ASurvivorEnemies::TakeDamageFromPlayer(int PDamageAmount) {} 

void ASurvivorEnemies::HandleDeath()
{
    ASurvivorGameMode* GameMode = Cast<ASurvivorGameMode>(GetWorld()->GetAuthGameMode());
    if (GameMode)
    {
       GameMode->OnEnemyKilled();
    }

    Destroy();
}

void ASurvivorEnemies::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

   
    if (EndPlayReason == EEndPlayReason::Destroyed)
    {
        TotalEnemies--;
        if (TotalEnemies < 0) TotalEnemies = 0;
    }
   
}

void ASurvivorEnemies::OnCapsuleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (!bCanDamagePlayer) return;

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
             bCanDamagePlayer = false;
             GetWorldTimerManager().SetTimer(DamageCooldownHandle, this, &ASurvivorEnemies::ResetCanDamagePlayer, DamageCooldown, false);
          }
       }
    }
}