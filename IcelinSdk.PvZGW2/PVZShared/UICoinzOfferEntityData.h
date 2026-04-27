#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870F40
   RuntimeId:        2A19
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09A8
   VfTable:          000000014236CD38
   Address (Base):   00000001430E31C0
*/
#pragma pack(push, 8)
class UICoinzOfferEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 SelectedCoinOffer; /* 0x0018 */
  FB_BOOLEAN ShowPlaystationStoreIcon; /* 0x001C */
  FB_BOOLEAN DataProvider; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UICoinzOfferEntityData) == 32);

}
