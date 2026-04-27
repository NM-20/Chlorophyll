#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428641B8
   RuntimeId:        21B7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C49A8
   Default Value:    00000001428641D0
*/
#pragma pack(push, 8)
struct PVZAnimatedBoneHelperBoneName
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING BoneName; /* 0x0000 */
  FB_BOOLEAN OutputBoneLocalToTrajectory; /* 0x0008 */
  char pad_0009[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZAnimatedBoneHelperBoneName) == 16);

}
