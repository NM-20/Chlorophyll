#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871A30
   RuntimeId:        2AA5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BDD
   VfTable:          000000014236C570
   Address (Base):   00000001430E4240
*/
#pragma pack(push, 8)
class UIPopupRootWidgetData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UIPopupRootWidgetData) == 72);

}
