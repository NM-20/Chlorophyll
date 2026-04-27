#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864058
   RuntimeId:        21A1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C49C8
   Default Value:    0000000142BFEBA0
*/
#pragma pack(push, 4)
struct AimingWorldSpaceLockEfficiencyData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 EfficiencyYaw; /* 0x0000 */
  FB_FLOAT32 EfficiencyPitch; /* 0x0004 */
  FB_FLOAT32 EfficiencyYawZoom; /* 0x0008 */
  FB_FLOAT32 EfficiencyPitchZoom; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AimingWorldSpaceLockEfficiencyData) == 16);

}
