#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864438
   RuntimeId:        21DD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          116D
   VfTable:          00000001423527B0
   Address (Base):   00000001430E54A0
*/
#pragma pack(push, 8)
class CustomizationAbilityCategoryInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING CategoryName; /* 0x0010 */
  FB_UINT32 CategoryId; /* 0x0018 */
  FB_UINT32 WeaponSlot; /* 0x001C */
  FB_CSTRING CategoryIconId; /* 0x0020 */
  FB_REFARRAY(class CustomizationAbilityInfo) Abilities; /* 0x0028 */
  FB_UINT32 SelectedAbilityIndex; /* 0x0030 */
  FB_BOOLEAN ContainsNewItems; /* 0x0034 */
  char pad_0035[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(CustomizationAbilityCategoryInfo) == 56);

}
