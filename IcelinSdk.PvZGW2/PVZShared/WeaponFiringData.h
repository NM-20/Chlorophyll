#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GameDataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/RumbleFiringData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B430
   RuntimeId:        261E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DD3
   VfTable:          000000014235ACF0
   Address (Base):   00000001430D9A70
*/
#pragma pack(push, 8)
class WeaponFiringData : public GameDataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FiringFunctionData) PrimaryFire; /* 0x0010 */
  FB_FLOAT32 DeployTime; /* 0x0018 */
  FB_FLOAT32 ReactivateCooldownTime; /* 0x001C */
  FB_FLOAT32 DisableZoomOnDeployTime; /* 0x0020 */
  FB_FLOAT32 AltDeployTime; /* 0x0024 */
  FB_INT32 AltDeployId; /* 0x0028 */
  char pad_002C[0x0004];
  FB_HANDLE(class WeaponSwayData) WeaponSway; /* 0x0030 */
  RumbleFiringData Rumble; /* 0x0038 */
  FB_FLOAT32 SupportDelayStand; /* 0x0044 */
  FB_FLOAT32 SupportDelayProne; /* 0x0048 */
  char pad_004C[0x0004];
  FB_STDARRAY(struct WeaponSwitchingOverride) IgnoreWeaponSwitchInputs; /* 0x0050 */
  FB_BOOLEAN IncrementShootIndexStart; /* 0x0058 */
  FB_BOOLEAN UseAutoAiming; /* 0x0059 */
  FB_BOOLEAN ShowEnemyNametagOnAim; /* 0x005A */
  FB_BOOLEAN ReloadWholeMags; /* 0x005B */
  FB_BOOLEAN DisableReloadWhileSprinting; /* 0x005C */
  FB_BOOLEAN AbortReloadOnSprint; /* 0x005D */
  FB_BOOLEAN DoNotResetWeaponStateOnDeactivate; /* 0x005E */
  FB_BOOLEAN ExcludePassengersFromRaycasts; /* 0x005F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(WeaponFiringData) == 96);

}
