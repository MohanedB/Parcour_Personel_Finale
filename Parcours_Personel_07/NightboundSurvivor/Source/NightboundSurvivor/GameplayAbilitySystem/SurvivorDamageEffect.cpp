#include "SurvivorDamageEffect.h"
#include "SurvivorAttributeSet.h" // On a besoin de connaître les attributs

USurvivorDamageEffect::USurvivorDamageEffect()
{
	DurationPolicy = EGameplayEffectDurationType::Instant;

	FGameplayModifierInfo ModInfo;
	ModInfo.Attribute = USurvivorAttributeSet::GetCurrentHealthAttribute();
	ModInfo.ModifierOp = EGameplayModOp::Additive;

	FAttributeBasedFloat DamageAmount;
	DamageAmount.Coefficient = -1.0f; 
	DamageAmount.BackingAttribute.AttributeToCapture = USurvivorAttributeSet::GetDamageAttribute();
	DamageAmount.BackingAttribute.AttributeSource = EGameplayEffectAttributeCaptureSource::Source; 
	DamageAmount.BackingAttribute.bSnapshot = true; 

	ModInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(DamageAmount);

	Modifiers.Add(ModInfo);
}