#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/PVZShared/RumbleLoopData.h>
#include <IcelinSdk.PvZGW2/PVZShared/RumbleTriggerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AE98
   RuntimeId:        25F6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3248
   Default Value:    000000014286AEB0
*/
#pragma pack(push, 16)
struct ChargeShotConfigData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 InitialSpeedAddition; /* 0x0000 */
  FB_FLOAT32 ChargeTime; /* 0x0010 */
  FB_UINT32 ProjectileIndex; /* 0x0014 */
  FB_FLOAT32 DamageMultiplier; /* 0x0018 */
  FB_UINT32 UnloadBulletsPerShot; /* 0x001C */
  FB_INT32 OverrideProjectileFireCount; /* 0x0020 */
  FB_FLOAT32 OverrideProjectileRateOfFire; /* 0x0024 */
  RumbleLoopData ChargingRumble; /* 0x0028 */
  RumbleTriggerData ChargedRumble; /* 0x0038 */
  RumbleTriggerData FireRumble; /* 0x0044 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ChargeShotConfigData) == 80);

}
