#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FAC8
   RuntimeId:        1DEF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10EC
   VfTable:          000000014231D5E8
   Address (Base):   00000001430F9430
*/
#pragma pack(push, 8)
class PVZBehaviorHighJump : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 WeaponSlot; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorHighJump) == 56);

}
