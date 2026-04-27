#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428504C0
   RuntimeId:        138B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8A28
   Default Value:    00000001428504E0
*/
#pragma pack(push, 16)
struct GotoPosSpec
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 orientAtGoalDir; /* 0x0000 */
  FB_FLOAT32 allowedToStopDist; /* 0x0010 */
  FB_FLOAT32 desiredStopDist; /* 0x0014 */
  FB_BOOLEAN stopAtGoal; /* 0x0018 */
  FB_BOOLEAN pushThroughCrowdAtGoal; /* 0x0019 */
  FB_BOOLEAN orientAtGoalEnable; /* 0x001A */
  FB_BOOLEAN tryFlank; /* 0x001B */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(GotoPosSpec) == 32);

}
