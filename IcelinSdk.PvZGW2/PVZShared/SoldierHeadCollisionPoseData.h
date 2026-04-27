#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862A90
   RuntimeId:        20AE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4F88
   Default Value:    0000000142BB4E60
*/
#pragma pack(push, 16)
struct SoldierHeadCollisionPoseData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 IdleOffset; /* 0x0000 */
  Vec3 MovingForwardOffset; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoldierHeadCollisionPoseData) == 32);

}
