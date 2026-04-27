#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EFF8
   RuntimeId:        1D43
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          102A
   VfTable:          000000014231DE58
   Address (Base):   000000014310B850
*/
#pragma pack(push, 8)
class WeaponCheck : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 WeaponSlot; /* 0x0010 */
  FB_BOOLEAN CheckRange; /* 0x0014 */
  FB_BOOLEAN CheckAvailable; /* 0x0015 */
  FB_BOOLEAN CheckPressure; /* 0x0016 */
  char pad_0017[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(WeaponCheck) == 24);

}
