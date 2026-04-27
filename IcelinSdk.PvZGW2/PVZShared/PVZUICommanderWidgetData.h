#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UILegacyWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871848
   RuntimeId:        2A87
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BC3
   VfTable:          000000014236C778
   Address (Base):   00000001430E2500
*/
#pragma pack(push, 8)
class PVZUICommanderWidgetData : public UILegacyWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZUICommanderWidgetData) == 72);

}
