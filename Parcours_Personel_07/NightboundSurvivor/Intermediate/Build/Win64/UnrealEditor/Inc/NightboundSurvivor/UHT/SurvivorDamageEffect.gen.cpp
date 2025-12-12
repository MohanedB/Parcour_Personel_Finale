// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NightboundSurvivor/GameplayAbilitySystem/SurvivorDamageEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorDamageEffect() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_USurvivorDamageEffect();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_USurvivorDamageEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_NightboundSurvivor();
// End Cross Module References

// Begin Class USurvivorDamageEffect
void USurvivorDamageEffect::StaticRegisterNativesUSurvivorDamageEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USurvivorDamageEffect);
UClass* Z_Construct_UClass_USurvivorDamageEffect_NoRegister()
{
	return USurvivorDamageEffect::StaticClass();
}
struct Z_Construct_UClass_USurvivorDamageEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayAbilitySystem/SurvivorDamageEffect.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/SurvivorDamageEffect.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorDamageEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USurvivorDamageEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NightboundSurvivor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorDamageEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USurvivorDamageEffect_Statics::ClassParams = {
	&USurvivorDamageEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorDamageEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_USurvivorDamageEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USurvivorDamageEffect()
{
	if (!Z_Registration_Info_UClass_USurvivorDamageEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USurvivorDamageEffect.OuterSingleton, Z_Construct_UClass_USurvivorDamageEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USurvivorDamageEffect.OuterSingleton;
}
template<> NIGHTBOUNDSURVIVOR_API UClass* StaticClass<USurvivorDamageEffect>()
{
	return USurvivorDamageEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorDamageEffect);
USurvivorDamageEffect::~USurvivorDamageEffect() {}
// End Class USurvivorDamageEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_GameplayAbilitySystem_SurvivorDamageEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USurvivorDamageEffect, USurvivorDamageEffect::StaticClass, TEXT("USurvivorDamageEffect"), &Z_Registration_Info_UClass_USurvivorDamageEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USurvivorDamageEffect), 1205703436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_GameplayAbilitySystem_SurvivorDamageEffect_h_3688296299(TEXT("/Script/NightboundSurvivor"),
	Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_GameplayAbilitySystem_SurvivorDamageEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_GameplayAbilitySystem_SurvivorDamageEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
