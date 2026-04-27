#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatsCategoryGuidData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869B08
   RuntimeId:        24F7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EB0
   VfTable:          0000000142355910
   Address (Base):   00000001431074D0
*/
#pragma pack(push, 8)
class StatsCategoryWeaponData : public StatsCategoryGuidData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 SoldierWeaponId; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StatsCategoryWeaponData) == 72);

}
