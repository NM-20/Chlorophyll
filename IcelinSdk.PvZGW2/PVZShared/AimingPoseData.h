#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D5A8
   RuntimeId:        27FA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8720
   Default Value:    0000000142868BB8
*/
#pragma pack(push, 4)
struct AimingPoseData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MinimumPitch; /* 0x0000 */
  FB_FLOAT32 MaximumPitch; /* 0x0004 */
  FB_FLOAT32 TargetingFov; /* 0x0008 */
  FB_FLOAT32 AimSteadiness; /* 0x000C */
  FB_FLOAT32 SpeedMultiplier; /* 0x0010 */
  FB_FLOAT32 RecoilMultiplier; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AimingPoseData) == 24);

}
