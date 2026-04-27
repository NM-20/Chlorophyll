#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872D30
   RuntimeId:        2B4A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C1168
*/
enum EBoolVar
{
  EBoolVar_AttackTargetValid = 0,
  EBoolVar_AbilitiesRestricted = 22,
  EBoolVar_WasDamaged = 23,
  EBoolVar_IsSpawning = 24,
  EBoolVar_IsDefensive = 25,
  EBoolVar_IsMovementRestricted = 26,
  EBoolVar_IsPathfindingActive = 27,
  EBoolVar_AtHighJump = 28,
  EBoolVar_IsAbilityActive = 21,
  EBoolVar_IsShieldActive = 29,
  EBoolVar_IsStaggering = 31,
  EBoolVar_IsMeleeDefending = 32,
  EBoolVar_IsMeleeInteractionActive = 33,
  EBoolVar_IsForceDetonate = 34,
  EBoolVar_IsMeleeEscaping = 35,
  EBoolVar_IsMeleeDefendable = 36,
  EBoolVar_IsOnGround = 37,
  EBoolVar_IsTeleporterActive = 30,
  EBoolVar_IsTaunting = 20,
  EBoolVar_CanTaunt = 19,
  EBoolVar_CanApplyPressure = 18,
  EBoolVar_AttackWeaponReady = 1,
  EBoolVar_AttackTimeToFire = 2,
  EBoolVar_AttackAimValid = 3,
  EBoolVar_AttackMinRange = 4,
  EBoolVar_AttackMaxRange = 5,
  EBoolVar_AttackMeleeWeapon = 6,
  EBoolVar_AttackInGoodPos = 7,
  EBoolVar_AttackAllocatedPressure = 8,
  EBoolVar_AttackMustFireWeapon = 9,
  EBoolVar_TargetValid = 10,
  EBoolVar_TargetVisible = 11,
  EBoolVar_TargetNavReachable = 12,
  EBoolVar_AttractorValid = 13,
  EBoolVar_DirectiveValid = 14,
  EBoolVar_ShouldHealOthers = 15,
  EBoolVar_CanApplyWeight = 16,
  EBoolVar_AmApplyingWeight = 17,
  EBoolVar_IsCapturePointMovable = 38,
  EBoolVar_IsExternalBehaviourTrigger = 39,
};

}
