#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterPoseType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862A50
   RuntimeId:        20AA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4FA8
   Default Value:    0000000142BB4E10
*/
#pragma pack(push, 16)
struct AutoAimData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 AutoAimOuterBoxOffset; /* 0x0000 */
  Vec3 AutoAimOuterBoxExtends; /* 0x0010 */
  Vec3 AutoAimInnerBoxOffset; /* 0x0020 */
  Vec3 AutoAimInnerBoxExtends; /* 0x0030 */
  CharacterPoseType PoseType; /* 0x0040 */
  char pad_0044[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(AutoAimData) == 80);

}
