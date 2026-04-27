#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/HudData.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponAnimBaseSetEnum.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D900
   RuntimeId:        2828
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B0A
   VfTable:          000000014236ECE8
   Address (Base):   00000001430CE450
*/
#pragma pack(push, 16)
class PVZCharacterWeaponData : public WeaponEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 CameraOffset; /* 0x00B0 */
  FB_CSTRING DamageGiverName; /* 0x00C0 */
  FB_REFARRAY(class WeaponZoomLevelData) ZoomLevels; /* 0x00C8 */
  FB_HANDLE(class SoldierAimingSimulationData) AimingController; /* 0x00D0 */
  FB_HANDLE(class FirstPersonCameraData) FirstPersonCamera; /* 0x00D8 */
  HudData Hud; /* 0x00E0 */
  WeaponAnimBaseSetEnum AnimBaseSet; /* 0x0150 */
  FB_FLOAT32 FireAndSwitchBackDelay; /* 0x0154 */
  FB_HANDLE(class PVZCharacterWeaponBlueprint) PVZCharacterWeaponBlueprint; /* 0x0158 */
  FB_CSTRING PersistenceId; /* 0x0160 */
  FB_HANDLE(class EntityVoiceOverInfo) VoiceOverInfo; /* 0x0168 */
  FB_FLOAT32 CameraOffsetTransitionTime; /* 0x0170 */
  FB_FLOAT32 KillBaseValue; /* 0x0174 */
  FB_HANDLE(class ProjectileKey) SpawnProjectileOnKill; /* 0x0178 */
  FB_BOOLEAN ForceQuickSwitch; /* 0x0180 */
  FB_BOOLEAN ForceTriggerReleaseOnUnDeploy; /* 0x0181 */
  FB_BOOLEAN HideWhenOutOfAmmo; /* 0x0182 */
  FB_BOOLEAN AllowSwitchingToWeaponOutOfAmmo; /* 0x0183 */
  FB_BOOLEAN AllowSwitchingToWeaponReloading; /* 0x0184 */
  FB_BOOLEAN SwitchToPrimaryWhenOutOfAmmo; /* 0x0185 */
  FB_BOOLEAN WaitForFireBeforeSwitchToPrimaryWhenOutOfAmmo; /* 0x0186 */
  FB_BOOLEAN FireAndSwitchBackToPrevSupported; /* 0x0187 */
  FB_BOOLEAN UseQuickThrowOnAutomaticSwitchback; /* 0x0188 */
  FB_BOOLEAN IsManualSelectionAllowed; /* 0x0189 */
  FB_BOOLEAN GroundWeapon; /* 0x018A */
  FB_BOOLEAN RootedWeapon; /* 0x018B */
  FB_BOOLEAN BurrowedWeapon; /* 0x018C */
  FB_BOOLEAN HealerWeapon; /* 0x018D */
  FB_BOOLEAN IsRenderedBySubclass; /* 0x018E */
  FB_BOOLEAN WeaponFiringEnabled; /* 0x018F */
  FB_BOOLEAN AllowCharacterSwapWhenEquipped; /* 0x0190 */
  char pad_0191[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A0 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterWeaponData) == 416);

}
