// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/SurvivorCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NIGHTBOUNDSURVIVOR_SurvivorCharacter_generated_h
#error "SurvivorCharacter.generated.h already included, missing '#pragma once' in SurvivorCharacter.h"
#endif
#define NIGHTBOUNDSURVIVOR_SurvivorCharacter_generated_h

#define FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCapsuleOverlap); \
	DECLARE_FUNCTION(execApplyMaxHealthUpgrade); \
	DECLARE_FUNCTION(execApplyDamageUpgrade); \
	DECLARE_FUNCTION(execApplyHealUpgrade); \
	DECLARE_FUNCTION(execGetHealthPercent);


#define FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivorCharacter(); \
	friend struct Z_Construct_UClass_ASurvivorCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NightboundSurvivor"), NO_API) \
	DECLARE_SERIALIZER(ASurvivorCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASurvivorCharacter*>(this); }


#define FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASurvivorCharacter(ASurvivorCharacter&&); \
	ASurvivorCharacter(const ASurvivorCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivorCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivorCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivorCharacter) \
	NO_API virtual ~ASurvivorCharacter();


#define FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_14_PROLOG
#define FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIGHTBOUNDSURVIVOR_API UClass* StaticClass<class ASurvivorCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mohan_OneDrive___UQAT_Documents_GitHub_Parcour_Personel_Finale_Parcours_Personel_07_NightboundSurvivor_Source_NightboundSurvivor_Character_SurvivorCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
