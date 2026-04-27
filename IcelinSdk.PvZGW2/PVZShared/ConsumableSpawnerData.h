#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865798
   RuntimeId:        22EF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11ED
   VfTable:          00000001423510D0
   Address (Base):   00000001430F86B0
*/
#pragma pack(push, 8)
class ConsumableSpawnerData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ConsumableData) Consumable; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ConsumableSpawnerData) == 24);

}
