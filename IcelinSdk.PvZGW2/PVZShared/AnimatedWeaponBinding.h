#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FF38
   RuntimeId:        294F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8380
   Default Value:    0000000142BFF0F0
*/
#pragma pack(push, 4)
struct AnimatedWeaponBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef Deploy; /* 0x0000 */
  AntRef AltDeploy; /* 0x0014 */
  AntRef Undeploy; /* 0x0028 */
  AntRef QuickSwitch; /* 0x003C */
  AntRef Reload; /* 0x0050 */
  AntRef ReloadStage; /* 0x0064 */
  AntRef ReloadShotgun; /* 0x0078 */
  AntRef Overheated; /* 0x008C */
  AntRef Fire; /* 0x00A0 */
  AntRef FireSingle; /* 0x00B4 */
  AntRef FireHoldAndRelease; /* 0x00C8 */
  AntRef FireSimple; /* 0x00DC */
  AntRef FirstShotSpawned; /* 0x00F0 */
  AntRef BoltAction; /* 0x0104 */
  AntRef PumpAction; /* 0x0118 */
  AntRef MeleeAttack; /* 0x012C */
  AntRef QuickThrow; /* 0x0140 */
  AntRef QuickThrowType; /* 0x0154 */
  AntRef AimBody; /* 0x0168 */
  AntRef AlwaysAimHead; /* 0x017C */
  AntRef OneHanded; /* 0x0190 */
  AntRef OneHandedAiming; /* 0x01A4 */
  AntRef AimingEnabled; /* 0x01B8 */
  AntRef LowerGun; /* 0x01CC */
  AntRef RflType; /* 0x01E0 */
  AntRef PstlType; /* 0x01F4 */
  AntRef HgrType; /* 0x0208 */
  AntRef ATType; /* 0x021C */
  AntRef ShgType; /* 0x0230 */
  AntRef LMGType; /* 0x0244 */
  AntRef BagType; /* 0x0258 */
  AntRef SnpType; /* 0x026C */
  AntRef Zoom; /* 0x0280 */
  AntRef CantedZoom; /* 0x0294 */
  AntRef MagnifierSightToggle; /* 0x02A8 */
  AntRef AimBodyWeight; /* 0x02BC */
  AntRef DisableZoomToggleWeight; /* 0x02D0 */
  AntRef ZoomParameter; /* 0x02E4 */
  AntRef ZoomScaleFactor; /* 0x02F8 */
  AntRef Dispersion; /* 0x030C */
  AntRef AimTargetPosBody; /* 0x0320 */
  AntRef ZoomOutSpeed; /* 0x0334 */
  AntRef ZoomInSpeed; /* 0x0348 */
  AntRef UnDeploySpeed; /* 0x035C */
  AntRef DeploySpeed; /* 0x0370 */
  AntRef FireModeChanged; /* 0x0384 */
  AntRef AnimType; /* 0x0398 */
  AntRef GunDown; /* 0x03AC */
  AntRef AllowSwitchingToWeaponInWater; /* 0x03C0 */
  AntRef NumberOfBulletsLeftInGun; /* 0x03D4 */
  AntRef BulletsLeftInGun; /* 0x03E8 */
  AntRef PercentOfBulletsLeftInGun; /* 0x03FC */
  AntRef AbortVehicleDeploy; /* 0x0410 */
  AntRef CustomizeWeapon; /* 0x0424 */
  AntRef CustomizeWeaponSwitch; /* 0x0438 */
  AntRef WeaponActionESIG; /* 0x044C */
  AntRef IsSprinting; /* 0x0460 */
  AntRef PreparingToBash; /* 0x0474 */
  AntRef JustStartedSprinting; /* 0x0488 */
  AntRef KickbackMagnitudeFactor; /* 0x049C */
  AntRef KickbackSpeedFactor; /* 0x04B0 */
  AntRef ZoomingTime; /* 0x04C4 */
  AntRef TriggerZoomGunTwitch; /* 0x04D8 */
  AntRef WeaponChooserSignal; /* 0x04EC */
  AntRef WeaponClassSignal; /* 0x0500 */
  AntRef WeaponCostumeChooserSignal; /* 0x0514 */
  AntRef OffsetX; /* 0x0528 */
  AntRef OffsetY; /* 0x053C */
  AntRef OffsetZ; /* 0x0550 */
  AntRef AIAllowFire; /* 0x0564 */
  AntRef AIAltFireFromAnt; /* 0x0578 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x058C */
#pragma pack(pop)

static_assert(sizeof(AnimatedWeaponBinding) == 1420);

}
