// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NightboundSurvivor/Character/SurvivorCharacter.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_ASurvivorCharacter();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_ASurvivorCharacter_NoRegister();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_USurvivorAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_NightboundSurvivor();
// End Cross Module References

// Begin Class ASurvivorCharacter Function ApplyDamageUpgrade
struct Z_Construct_UFunction_ASurvivorCharacter_ApplyDamageUpgrade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorCharacter_ApplyDamageUpgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorCharacter, nullptr, "ApplyDamageUpgrade", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorCharacter_ApplyDamageUpgrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASurvivorCharacter_ApplyDamageUpgrade_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASurvivorCharacter_ApplyDamageUpgrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivorCharacter_ApplyDamageUpgrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASurvivorCharacter::execApplyDamageUpgrade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamageUpgrade();
	P_NATIVE_END;
}
// End Class ASurvivorCharacter Function ApplyDamageUpgrade

// Begin Class ASurvivorCharacter Function ApplyHealUpgrade
struct Z_Construct_UFunction_ASurvivorCharacter_ApplyHealUpgrade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorCharacter_ApplyHealUpgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorCharacter, nullptr, "ApplyHealUpgrade", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorCharacter_ApplyHealUpgrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASurvivorCharacter_ApplyHealUpgrade_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASurvivorCharacter_ApplyHealUpgrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivorCharacter_ApplyHealUpgrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASurvivorCharacter::execApplyHealUpgrade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyHealUpgrade();
	P_NATIVE_END;
}
// End Class ASurvivorCharacter Function ApplyHealUpgrade

// Begin Class ASurvivorCharacter Function ApplyMaxHealthUpgrade
struct Z_Construct_UFunction_ASurvivorCharacter_ApplyMaxHealthUpgrade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Upgrades" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorCharacter_ApplyMaxHealthUpgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorCharacter, nullptr, "ApplyMaxHealthUpgrade", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorCharacter_ApplyMaxHealthUpgrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASurvivorCharacter_ApplyMaxHealthUpgrade_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASurvivorCharacter_ApplyMaxHealthUpgrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivorCharacter_ApplyMaxHealthUpgrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASurvivorCharacter::execApplyMaxHealthUpgrade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyMaxHealthUpgrade();
	P_NATIVE_END;
}
// End Class ASurvivorCharacter Function ApplyMaxHealthUpgrade

// Begin Class ASurvivorCharacter Function GetHealthPercent
struct Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics
{
	struct SurvivorCharacter_eventGetHealthPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorCharacter_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorCharacter, nullptr, "GetHealthPercent", nullptr, nullptr, Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::SurvivorCharacter_eventGetHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::SurvivorCharacter_eventGetHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASurvivorCharacter::execGetHealthPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
	P_NATIVE_END;
}
// End Class ASurvivorCharacter Function GetHealthPercent

// Begin Class ASurvivorCharacter Function OnCapsuleOverlap
struct Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics
{
	struct SurvivorCharacter_eventOnCapsuleOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorCharacter_eventOnCapsuleOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorCharacter_eventOnCapsuleOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorCharacter_eventOnCapsuleOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorCharacter_eventOnCapsuleOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SurvivorCharacter_eventOnCapsuleOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SurvivorCharacter_eventOnCapsuleOverlap_Parms), &Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorCharacter_eventOnCapsuleOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorCharacter, nullptr, "OnCapsuleOverlap", nullptr, nullptr, Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::SurvivorCharacter_eventOnCapsuleOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::SurvivorCharacter_eventOnCapsuleOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASurvivorCharacter::execOnCapsuleOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCapsuleOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ASurvivorCharacter Function OnCapsuleOverlap

// Begin Class ASurvivorCharacter
void ASurvivorCharacter::StaticRegisterNativesASurvivorCharacter()
{
	UClass* Class = ASurvivorCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamageUpgrade", &ASurvivorCharacter::execApplyDamageUpgrade },
		{ "ApplyHealUpgrade", &ASurvivorCharacter::execApplyHealUpgrade },
		{ "ApplyMaxHealthUpgrade", &ASurvivorCharacter::execApplyMaxHealthUpgrade },
		{ "GetHealthPercent", &ASurvivorCharacter::execGetHealthPercent },
		{ "OnCapsuleOverlap", &ASurvivorCharacter::execOnCapsuleOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivorCharacter);
UClass* Z_Construct_UClass_ASurvivorCharacter_NoRegister()
{
	return ASurvivorCharacter::StaticClass();
}
struct Z_Construct_UClass_ASurvivorCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/SurvivorCharacter.h" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealEffectClass_MetaData[] = {
		{ "Category", "Attributes | Upgrades" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageUpgradeEffectClass_MetaData[] = {
		{ "Category", "Attributes | Upgrades" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthUpgradeEffectClass_MetaData[] = {
		{ "Category", "Attributes | Upgrades" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PMaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCurrentHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PDamage_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StarterAttack_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/SurvivorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealEffectClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageUpgradeEffectClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MaxHealthUpgradeEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PMaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PCurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PDamage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StarterAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASurvivorCharacter_ApplyDamageUpgrade, "ApplyDamageUpgrade" }, // 2281804145
		{ &Z_Construct_UFunction_ASurvivorCharacter_ApplyHealUpgrade, "ApplyHealUpgrade" }, // 1427364068
		{ &Z_Construct_UFunction_ASurvivorCharacter_ApplyMaxHealthUpgrade, "ApplyMaxHealthUpgrade" }, // 3720751877
		{ &Z_Construct_UFunction_ASurvivorCharacter_GetHealthPercent, "GetHealthPercent" }, // 1568021723
		{ &Z_Construct_UFunction_ASurvivorCharacter_OnCapsuleOverlap, "OnCapsuleOverlap" }, // 4056749608
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_HealEffectClass = { "HealEffectClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, HealEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealEffectClass_MetaData), NewProp_HealEffectClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_DamageUpgradeEffectClass = { "DamageUpgradeEffectClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, DamageUpgradeEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageUpgradeEffectClass_MetaData), NewProp_DamageUpgradeEffectClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_MaxHealthUpgradeEffectClass = { "MaxHealthUpgradeEffectClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, MaxHealthUpgradeEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthUpgradeEffectClass_MetaData), NewProp_MaxHealthUpgradeEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_PMaxHealth = { "PMaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, PMaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PMaxHealth_MetaData), NewProp_PMaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_PCurrentHealth = { "PCurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, PCurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCurrentHealth_MetaData), NewProp_PCurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_PDamage = { "PDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, PDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PDamage_MetaData), NewProp_PDamage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_StarterAttack = { "StarterAttack", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, StarterAttack), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StarterAttack_MetaData), NewProp_StarterAttack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, Attributes), Z_Construct_UClass_USurvivorAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivorCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_HealEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_DamageUpgradeEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_MaxHealthUpgradeEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_PMaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_PCurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_PDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_StarterAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASurvivorCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NightboundSurvivor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASurvivorCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASurvivorCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivorCharacter_Statics::ClassParams = {
	&ASurvivorCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASurvivorCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurvivorCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurvivorCharacter()
{
	if (!Z_Registration_Info_UClass_ASurvivorCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivorCharacter.OuterSingleton, Z_Construct_UClass_ASurvivorCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurvivorCharacter.OuterSingleton;
}
template<> NIGHTBOUNDSURVIVOR_API UClass* StaticClass<ASurvivorCharacter>()
{
	return ASurvivorCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivorCharacter);
ASurvivorCharacter::~ASurvivorCharacter() {}
// End Class ASurvivorCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivorCharacter, ASurvivorCharacter::StaticClass, TEXT("ASurvivorCharacter"), &Z_Registration_Info_UClass_ASurvivorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivorCharacter), 2770862447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_1627344197(TEXT("/Script/NightboundSurvivor"),
	Z_CompiledInDeferFile_FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
