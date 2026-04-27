#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AbstractSelectable.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865858
   RuntimeId:        22FB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EBA
   VfTable:          0000000142351158
   Address (Base):   00000001430F8410
*/
#pragma pack(push, 8)
class SelectableConsumable : public AbstractSelectable
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ConsumableData) Consumable; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SelectableConsumable) == 40);

}
