#include "SurvivorAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "Kismet/GameplayStatics.h"            
#include "NightboundSurvivor/Character/SurvivorCharacter.h" 
#include "NightboundSurvivor/Enemies/SurvivorEnemies.h"    
#include "NightboundSurvivor/Game/SurvivorGameMode.h"

USurvivorAttributeSet::USurvivorAttributeSet()
{
    InitCurrentHealth(100.0f);
    InitMaxHealth(100.0f);
    InitDamage(10.0f);
}


void USurvivorAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    Super::PostGameplayEffectExecute(Data);

    if (Data.EvaluatedData.Attribute == GetCurrentHealthAttribute())
    {
        
        if (GetCurrentHealth() <= 0.0f)
        {
            AActor* AvatarActor = GetOwningActor();

            if (Cast<ASurvivorEnemies>(AvatarActor))
            {
                if (UWorld* World = AvatarActor->GetWorld())
                {
                    ASurvivorGameMode* GameMode = Cast<ASurvivorGameMode>(World->GetAuthGameMode());
                    if (GameMode)
                    {
                        GameMode->OnEnemyKilled(); 
                    }
                }
                AvatarActor->Destroy();
            }
            else if (Cast<ASurvivorCharacter>(AvatarActor))
            {
                if (APlayerController* PC = UGameplayStatics::GetPlayerController(AvatarActor, 0))
                {
                    UKismetSystemLibrary::QuitGame(AvatarActor, PC, EQuitPreference::Quit, false);
                }
            }
        }

      
        if (GetCurrentHealth() > GetMaxHealth())
        {
            SetCurrentHealth(GetMaxHealth());
        }
    }
}