#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AimAssistCollisionBonePrioritiesData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E260
   RuntimeId:        11D3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAB40
   Default Value:    000000014284E278
*/
#pragma pack(push, 4)
struct AimAssistCollisionBoneSnapAimData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Bounding_LengthScale; /* 0x0000 */
  FB_FLOAT32 Bounding_RadiusScale; /* 0x0004 */
  FB_FLOAT32 Point_LengthScale; /* 0x0008 */
  AimAssistCollisionBonePrioritiesData Point_Priorities; /* 0x000C */
  AimAssistCollisionBonePrioritiesData Point_Priorities_BoneUnderReticle; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0024 */
#pragma pack(pop)

static_assert(sizeof(AimAssistCollisionBoneSnapAimData) == 36);

}
