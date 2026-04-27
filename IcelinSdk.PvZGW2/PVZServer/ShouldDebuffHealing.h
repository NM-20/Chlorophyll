#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F2D8
   RuntimeId:        1D71
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1056
   VfTable:          000000014231DB78
   Address (Base):   000000014310AFB0
*/
#pragma pack(push, 8)
class ShouldDebuffHealing : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) Buff; /* 0x0010 */
  FB_INT32 HealWeaponSlot; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ShouldDebuffHealing) == 32);

}
