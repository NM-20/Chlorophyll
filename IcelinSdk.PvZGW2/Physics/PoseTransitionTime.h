#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterPoseType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428515A8
   RuntimeId:        1480
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C88A8
   Default Value:    00000001428515C0
*/
#pragma pack(push, 4)
struct PoseTransitionTime
{
  typedef struct ValueTypeInfo TypeInfo_t;

  CharacterPoseType ToPose; /* 0x0000 */
  FB_FLOAT32 TransitionTime; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(PoseTransitionTime) == 8);

}
