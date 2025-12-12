// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NightboundSurvivor/Game/EnemiesSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemiesSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_AEnemiesSpawner();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_AEnemiesSpawner_NoRegister();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_ASurvivorEnemies_NoRegister();
UPackage* Z_Construct_UPackage__Script_NightboundSurvivor();
// End Cross Module References

// Begin Class AEnemiesSpawner
void AEnemiesSpawner::StaticRegisterNativesAEnemiesSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemiesSpawner);
UClass* Z_Construct_UClass_AEnemiesSpawner_NoRegister()
{
	return AEnemiesSpawner::StaticClass();
}
struct Z_Construct_UClass_AEnemiesSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Game/EnemiesSpawner.h" },
		{ "ModuleRelativePath", "Game/EnemiesSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Game/EnemiesSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDistance_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Game/EnemiesSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberToSpawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Game/EnemiesSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Game/EnemiesSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemiesSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemiesSpawner_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemiesSpawner, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASurvivorEnemies_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemiesSpawner_Statics::NewProp_SpawnDistance = { "SpawnDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemiesSpawner, SpawnDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnDistance_MetaData), NewProp_SpawnDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemiesSpawner_Statics::NewProp_NumberToSpawn = { "NumberToSpawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemiesSpawner, NumberToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberToSpawn_MetaData), NewProp_NumberToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemiesSpawner_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemiesSpawner, SpawnInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInterval_MetaData), NewProp_SpawnInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemiesSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemiesSpawner_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemiesSpawner_Statics::NewProp_SpawnDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemiesSpawner_Statics::NewProp_NumberToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemiesSpawner_Statics::NewProp_SpawnInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemiesSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemiesSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NightboundSurvivor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemiesSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemiesSpawner_Statics::ClassParams = {
	&AEnemiesSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemiesSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemiesSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemiesSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemiesSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemiesSpawner()
{
	if (!Z_Registration_Info_UClass_AEnemiesSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemiesSpawner.OuterSingleton, Z_Construct_UClass_AEnemiesSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemiesSpawner.OuterSingleton;
}
template<> NIGHTBOUNDSURVIVOR_API UClass* StaticClass<AEnemiesSpawner>()
{
	return AEnemiesSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemiesSpawner);
AEnemiesSpawner::~AEnemiesSpawner() {}
// End Class AEnemiesSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Game_EnemiesSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemiesSpawner, AEnemiesSpawner::StaticClass, TEXT("AEnemiesSpawner"), &Z_Registration_Info_UClass_AEnemiesSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemiesSpawner), 1410553572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Game_EnemiesSpawner_h_2269027074(TEXT("/Script/NightboundSurvivor"),
	Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Game_EnemiesSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Game_EnemiesSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
