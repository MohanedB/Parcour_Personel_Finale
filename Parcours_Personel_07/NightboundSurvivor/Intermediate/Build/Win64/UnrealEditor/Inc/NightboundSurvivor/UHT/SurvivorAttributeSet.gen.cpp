// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NightboundSurvivor/GameplayAbilitySystem/SurvivorAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_USurvivorAttributeSet();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_USurvivorAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_NightboundSurvivor();
// End Cross Module References

// Begin Class USurvivorAttributeSet
void USurvivorAttributeSet::StaticRegisterNativesUSurvivorAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USurvivorAttributeSet);
UClass* Z_Construct_UClass_USurvivorAttributeSet_NoRegister()
{
	return USurvivorAttributeSet::StaticClass();
}
struct Z_Construct_UClass_USurvivorAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayAbilitySystem/SurvivorAttributeSet.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/SurvivorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/SurvivorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/SurvivorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/SurvivorAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorAttributeSet_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvivorAttributeSet, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvivorAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurvivorAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvivorAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvivorAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAttributeSet_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvivorAttributeSet_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USurvivorAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_NightboundSurvivor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USurvivorAttributeSet_Statics::ClassParams = {
	&USurvivorAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USurvivorAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_USurvivorAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USurvivorAttributeSet()
{
	if (!Z_Registration_Info_UClass_USurvivorAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USurvivorAttributeSet.OuterSingleton, Z_Construct_UClass_USurvivorAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USurvivorAttributeSet.OuterSingleton;
}
template<> NIGHTBOUNDSURVIVOR_API UClass* StaticClass<USurvivorAttributeSet>()
{
	return USurvivorAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorAttributeSet);
USurvivorAttributeSet::~USurvivorAttributeSet() {}
// End Class USurvivorAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_GameplayAbilitySystem_SurvivorAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USurvivorAttributeSet, USurvivorAttributeSet::StaticClass, TEXT("USurvivorAttributeSet"), &Z_Registration_Info_UClass_USurvivorAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USurvivorAttributeSet), 1453591650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_GameplayAbilitySystem_SurvivorAttributeSet_h_7397352(TEXT("/Script/NightboundSurvivor"),
	Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_GameplayAbilitySystem_SurvivorAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_GameplayAbilitySystem_SurvivorAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
