// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NightboundSurvivor/Game/SurvivorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_ASurvivorGameMode();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_ASurvivorGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NightboundSurvivor();
// End Cross Module References

// Begin Class ASurvivorGameMode Function OnEnemyKilled
struct Z_Construct_UFunction_ASurvivorGameMode_OnEnemyKilled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/SurvivorGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorGameMode_OnEnemyKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorGameMode, nullptr, "OnEnemyKilled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorGameMode_OnEnemyKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASurvivorGameMode_OnEnemyKilled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASurvivorGameMode_OnEnemyKilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivorGameMode_OnEnemyKilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASurvivorGameMode::execOnEnemyKilled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyKilled();
	P_NATIVE_END;
}
// End Class ASurvivorGameMode Function OnEnemyKilled

// Begin Class ASurvivorGameMode Function OnUpgradeAvailable
static const FName NAME_ASurvivorGameMode_OnUpgradeAvailable = FName(TEXT("OnUpgradeAvailable"));
void ASurvivorGameMode::OnUpgradeAvailable()
{
	UFunction* Func = FindFunctionChecked(NAME_ASurvivorGameMode_OnUpgradeAvailable);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASurvivorGameMode_OnUpgradeAvailable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "Game/SurvivorGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorGameMode_OnUpgradeAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorGameMode, nullptr, "OnUpgradeAvailable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorGameMode_OnUpgradeAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASurvivorGameMode_OnUpgradeAvailable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASurvivorGameMode_OnUpgradeAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivorGameMode_OnUpgradeAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ASurvivorGameMode Function OnUpgradeAvailable

// Begin Class ASurvivorGameMode
void ASurvivorGameMode::StaticRegisterNativesASurvivorGameMode()
{
	UClass* Class = ASurvivorGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnemyKilled", &ASurvivorGameMode::execOnEnemyKilled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivorGameMode);
UClass* Z_Construct_UClass_ASurvivorGameMode_NoRegister()
{
	return ASurvivorGameMode::StaticClass();
}
struct Z_Construct_UClass_ASurvivorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/SurvivorGameMode.h" },
		{ "ModuleRelativePath", "Game/SurvivorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillsPerUpgrade_MetaData[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "Game/SurvivorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillsSinceLastUpgrade_MetaData[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "Game/SurvivorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillCount_MetaData[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "Game/SurvivorGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_KillsPerUpgrade;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KillsSinceLastUpgrade;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KillCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASurvivorGameMode_OnEnemyKilled, "OnEnemyKilled" }, // 3550878155
		{ &Z_Construct_UFunction_ASurvivorGameMode_OnUpgradeAvailable, "OnUpgradeAvailable" }, // 3267731272
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASurvivorGameMode_Statics::NewProp_KillsPerUpgrade = { "KillsPerUpgrade", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorGameMode, KillsPerUpgrade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillsPerUpgrade_MetaData), NewProp_KillsPerUpgrade_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASurvivorGameMode_Statics::NewProp_KillsSinceLastUpgrade = { "KillsSinceLastUpgrade", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorGameMode, KillsSinceLastUpgrade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillsSinceLastUpgrade_MetaData), NewProp_KillsSinceLastUpgrade_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASurvivorGameMode_Statics::NewProp_KillCount = { "KillCount", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorGameMode, KillCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillCount_MetaData), NewProp_KillCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivorGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorGameMode_Statics::NewProp_KillsPerUpgrade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorGameMode_Statics::NewProp_KillsSinceLastUpgrade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorGameMode_Statics::NewProp_KillCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASurvivorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NightboundSurvivor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivorGameMode_Statics::ClassParams = {
	&ASurvivorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASurvivorGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurvivorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurvivorGameMode()
{
	if (!Z_Registration_Info_UClass_ASurvivorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivorGameMode.OuterSingleton, Z_Construct_UClass_ASurvivorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurvivorGameMode.OuterSingleton;
}
template<> NIGHTBOUNDSURVIVOR_API UClass* StaticClass<ASurvivorGameMode>()
{
	return ASurvivorGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivorGameMode);
ASurvivorGameMode::~ASurvivorGameMode() {}
// End Class ASurvivorGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Game_SurvivorGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivorGameMode, ASurvivorGameMode::StaticClass, TEXT("ASurvivorGameMode"), &Z_Registration_Info_UClass_ASurvivorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivorGameMode), 2730872286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Game_SurvivorGameMode_h_1441095945(TEXT("/Script/NightboundSurvivor"),
	Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Game_SurvivorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PercourPersonel_01_20253_PGJ1304_Parcours_Boum408_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Game_SurvivorGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
