#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BA60
   RuntimeId:        2678
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0630
   VfTable:          000000014235A980
   Address (Base):   0000000143106510
*/
#pragma pack(push, 8)
class CardPackAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ConsumableData) Consumables; /* 0x0018 */
  FB_REFARRAY(class CardPackConsumableItem) ConsumableItems; /* 0x0020 */
  FB_STDARRAY(struct CardPackInfo) CardPackInfos; /* 0x0028 */
  FB_STDARRAY(struct BasicUnlockInfo) UnlockInfos; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(CardPackAsset) == 56);

}
