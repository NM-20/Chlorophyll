#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B410
   RuntimeId:        261C
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C3208
*/
enum WeaponFiringEvent
{
  WeaponFiringEvent_Push = 0,
  WeaponFiringEvent_DetonationSwitchCallback = 23,
  WeaponFiringEvent_BoltActionEndCallback = 22,
  WeaponFiringEvent_BoltActionCallback = 21,
  WeaponFiringEvent_ReloadPrimaryEndCallback = 20,
  WeaponFiringEvent_ReloadPrimaryBeginCallback = 19,
  WeaponFiringEvent_FiringDisabledCallback = 18,
  WeaponFiringEvent_FiringEnabledCallback = 17,
  WeaponFiringEvent_OverheatingStoppedCallback = 16,
  WeaponFiringEvent_OverheatingStartedCallback = 15,
  WeaponFiringEvent_PrimingStoppedCallback = 14,
  WeaponFiringEvent_PrimingStartedCallback = 13,
  WeaponFiringEvent_FireNotPrimedCallback = 12,
  WeaponFiringEvent_ChargingStoppedCallback = 11,
  WeaponFiringEvent_ChargingStartedCallback = 10,
  WeaponFiringEvent_ChargeShotChangedCallback = 9,
  WeaponFiringEvent_PrimaryStoppedFiringCallback = 8,
  WeaponFiringEvent_PrimaryFireAutomaticEndCallback = 7,
  WeaponFiringEvent_PrimaryFireAutomaticBeginCallback = 6,
  WeaponFiringEvent_PrimaryFireShotSpawnedCallback = 5,
  WeaponFiringEvent_PrimaryFireReleaseCallback = 4,
  WeaponFiringEvent_PrimaryFireCallback = 3,
  WeaponFiringEvent_PrimaryStartedFiringCallback = 2,
  WeaponFiringEvent_Pop = 1,
  WeaponFiringEvent_HoldAndReleaseReleaseCallback = 24,
  WeaponFiringEvent_UpdateRequired = 25,
};

}
