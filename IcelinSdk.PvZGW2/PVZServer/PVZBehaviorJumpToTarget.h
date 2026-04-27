#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FAE8
   RuntimeId:        1DF1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10EB
   VfTable:          000000014231D5D8
   Address (Base):   00000001430F93D0
*/
#pragma pack(push, 8)
class PVZBehaviorJumpToTarget : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 WeaponSlot; /* 0x0030 */
  FB_FLOAT32 DistanceBehindTarget; /* 0x0034 */
  FB_FLOAT32 SearchRadius; /* 0x0038 */
  FB_FLOAT32 JumpHeight; /* 0x003C */
  FB_FLOAT32 ForwardForce; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorJumpToTarget) == 72);

}
