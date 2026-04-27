#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871ED8
   RuntimeId:        2AED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BC7
   VfTable:          000000014236BF98
   Address (Base):   00000001430E1E40
*/
#pragma pack(push, 8)
class UIStickerBookCostumeHolderData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UIStickerBookCostumeHolderData) == 72);

}
