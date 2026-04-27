#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871230
   RuntimeId:        2A39
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F20
   VfTable:          000000014236CD28
   Address (Base):   00000001430E2560
*/
#pragma pack(push, 8)
class UIStickerBookClass : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Header; /* 0x0010 */
  FB_CSTRING Label; /* 0x0018 */
  FB_REFARRAY(class UIStickerBookCostume) Costumes; /* 0x0020 */
  FB_REFARRAY(class UIStickerBookAccessoryCategory) AccessoryCategories; /* 0x0028 */
  FB_STDARRAY(struct UIStickerBookUnlock) Abilities; /* 0x0030 */
  FB_CSTRING AbilitiesDesc; /* 0x0038 */
  FB_STDARRAY(struct UIStickerBookStat) ClassStats; /* 0x0040 */
  FB_STDARRAY(struct UIStickerBookStat) CostumeOverallStats; /* 0x0048 */
  FB_INT32 NumAccessoryPages; /* 0x0050 */
  char pad_0054[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIStickerBookClass) == 88);

}
