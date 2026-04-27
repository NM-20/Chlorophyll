#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FBA8
   RuntimeId:        1DFD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10F4
   VfTable:          000000014231D628
   Address (Base):   00000001430F9190
*/
#pragma pack(push, 8)
class PVZBehaviorBurrow : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 WeaponSlot; /* 0x0030 */
  FB_FLOAT32 ChompDistance; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorBurrow) == 56);

}
