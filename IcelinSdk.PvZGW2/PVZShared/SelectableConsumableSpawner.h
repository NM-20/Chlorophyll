#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AbstractSelectable.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865898
   RuntimeId:        22FF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EBD
   VfTable:          0000000142351148
   Address (Base):   00000001430DA730
*/
#pragma pack(push, 8)
class SelectableConsumableSpawner : public AbstractSelectable
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ConsumableSpawnerData) ConsumableSpawner; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SelectableConsumableSpawner) == 40);

}
