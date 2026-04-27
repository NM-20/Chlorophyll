#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CEB8
   RuntimeId:        10C2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAEA0
   Default Value:    000000014284CED0
*/
#pragma pack(push, 8)
struct VehicleHealthZoneData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MaxHealth; /* 0x0000 */
  FB_FLOAT32 MaxShieldHealth; /* 0x0004 */
  FB_FLOAT32 MinDamageAngle; /* 0x0008 */
  FB_FLOAT32 DamageAngleMultiplier; /* 0x000C */
  FB_HANDLE(class Curve2D) DamageAngleMultiplierCurve; /* 0x0010 */
  FB_FLOAT32 VerticalFactor; /* 0x0018 */
  FB_BOOLEAN UseDamageAngleCalculation; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VehicleHealthZoneData) == 32);

}
