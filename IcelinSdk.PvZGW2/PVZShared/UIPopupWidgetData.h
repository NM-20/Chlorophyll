#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871A50
   RuntimeId:        2AA7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BCA
   VfTable:          000000014236C5E0
   Address (Base):   00000001430E1A80
*/
#pragma pack(push, 8)
class UIPopupWidgetData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UIPopupWidgetData) == 72);

}
