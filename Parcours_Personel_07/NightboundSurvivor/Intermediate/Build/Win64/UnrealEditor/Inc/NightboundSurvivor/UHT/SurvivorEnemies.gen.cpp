// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NightboundSurvivor/Enemies/SurvivorEnemies.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorEnemies() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_ASurvivorCharacter_NoRegister();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_ASurvivorEnemies();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_ASurvivorEnemies_NoRegister();
NIGHTBOUNDSURVIVOR_API UClass* Z_Construct_UClass_USurvivorAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_NightboundSurvivor();
// End Cross Module References

// Begin Class ASurvivorEnemies Function GetTotalEnemies
struct Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics
{
	struct SurvivorEnemies_eventGetTotalEnemies_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/SurvivorEnemies.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorEnemies_eventGetTotalEnemies_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorEnemies, nullptr, "GetTotalEnemies", nullptr, nullptr, Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::SurvivorEnemies_eventGetTotalEnemies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::SurvivorEnemies_eventGetTotalEnemies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASurvivorEnemies::execGetTotalEnemies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=ASurvivorEnemies::GetTotalEnemies();
	P_NATIVE_END;
}
// End Class ASurvivorEnemies Function GetTotalEnemies

// Begin Class ASurvivorEnemies Function OnCapsuleOverlap
struct Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics
{
	struct SurvivorEnemies_eventOnCapsuleOverlap_Parms
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
		{ "ModuleRelativePath", "Enemies/SurvivorEnemies.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorEnemies_eventOnCapsuleOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorEnemies_eventOnCapsuleOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorEnemies_eventOnCapsuleOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorEnemies_eventOnCapsuleOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SurvivorEnemies_eventOnCapsuleOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SurvivorEnemies_eventOnCapsuleOverlap_Parms), &Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SurvivorEnemies_eventOnCapsuleOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorEnemies, nullptr, "OnCapsuleOverlap", nullptr, nullptr, Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::SurvivorEnemies_eventOnCapsuleOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::SurvivorEnemies_eventOnCapsuleOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASurvivorEnemies::execOnCapsuleOverlap)
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
// End Class ASurvivorEnemies Function OnCapsuleOverlap

// Begin Class ASurvivorEnemies Function ResetTotalEnemies
struct Z_Construct_UFunction_ASurvivorEnemies_ResetTotalEnemies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/SurvivorEnemies.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorEnemies_ResetTotalEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorEnemies, nullptr, "ResetTotalEnemies", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorEnemies_ResetTotalEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASurvivorEnemies_ResetTotalEnemies_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASurvivorEnemies_ResetTotalEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivorEnemies_ResetTotalEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASurvivorEnemies::execResetTotalEnemies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	ASurvivorEnemies::ResetTotalEnemies();
	P_NATIVE_END;
}
// End Class ASurvivorEnemies Function ResetTotalEnemies

// Begin Class ASurvivorEnemies
void ASurvivorEnemies::StaticRegisterNativesASurvivorEnemies()
{
	UClass* Class = ASurvivorEnemies::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTotalEnemies", &ASurvivorEnemies::execGetTotalEnemies },
		{ "OnCapsuleOverlap", &ASurvivorEnemies::execOnCapsuleOverlap },
		{ "ResetTotalEnemies", &ASurvivorEnemies::execResetTotalEnemies },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivorEnemies);
UClass* Z_Construct_UClass_ASurvivorEnemies_NoRegister()
{
	return ASurvivorEnemies::StaticClass();
}
struct Z_Construct_UClass_ASurvivorEnemies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/SurvivorEnemies.h" },
		{ "ModuleRelativePath", "Enemies/SurvivorEnemies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/SurvivorEnemies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/SurvivorEnemies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EMaxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/SurvivorEnemies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ECurrentHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/SurvivorEnemies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EDamage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/SurvivorEnemies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemies/SurvivorEnemies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Enemies/SurvivorEnemies.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EMaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ECurrentHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASurvivorEnemies_GetTotalEnemies, "GetTotalEnemies" }, // 4038592459
		{ &Z_Construct_UFunction_ASurvivorEnemies_OnCapsuleOverlap, "OnCapsuleOverlap" }, // 3075734449
		{ &Z_Construct_UFunction_ASurvivorEnemies_ResetTotalEnemies, "ResetTotalEnemies" }, // 2184732076
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivorEnemies>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorEnemies, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorEnemies, Attributes), Z_Construct_UClass_USurvivorAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_EMaxHealth = { "EMaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorEnemies, EMaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EMaxHealth_MetaData), NewProp_EMaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_ECurrentHealth = { "ECurrentHealth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorEnemies, ECurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ECurrentHealth_MetaData), NewProp_ECurrentHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_EDamage = { "EDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorEnemies, EDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EDamage_MetaData), NewProp_EDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorEnemies, PlayerRef), Z_Construct_UClass_ASurvivorCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorEnemies, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivorEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_EMaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_ECurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_EDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_PlayerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorEnemies_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorEnemies_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASurvivorEnemies_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NightboundSurvivor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorEnemies_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASurvivorEnemies_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASurvivorEnemies, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivorEnemies_Statics::ClassParams = {
	&ASurvivorEnemies::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASurvivorEnemies_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorEnemies_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorEnemies_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurvivorEnemies_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurvivorEnemies()
{
	if (!Z_Registration_Info_UClass_ASurvivorEnemies.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivorEnemies.OuterSingleton, Z_Construct_UClass_ASurvivorEnemies_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurvivorEnemies.OuterSingleton;
}
template<> NIGHTBOUNDSURVIVOR_API UClass* StaticClass<ASurvivorEnemies>()
{
	return ASurvivorEnemies::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivorEnemies);
ASurvivorEnemies::~ASurvivorEnemies() {}
// End Class ASurvivorEnemies

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Enemies_SurvivorEnemies_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivorEnemies, ASurvivorEnemies::StaticClass, TEXT("ASurvivorEnemies"), &Z_Registration_Info_UClass_ASurvivorEnemies, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivorEnemies), 1795206497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Enemies_SurvivorEnemies_h_803396485(TEXT("/Script/NightboundSurvivor"),
	Z_CompiledInDeferFile_FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Enemies_SurvivorEnemies_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Enemies_SurvivorEnemies_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
