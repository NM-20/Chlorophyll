#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871C60
   RuntimeId:        2AC7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BCB
   VfTable:          000000014236C070
   Address (Base):   00000001430E2140
*/
#pragma pack(push, 8)
class UIConsumableSpawnMenuWidgetData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UIConsumableSpawnMenuWidgetData) == 72);

}
