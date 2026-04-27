#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListRowToggleWidgetData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871DA0
   RuntimeId:        2ADB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BCF
   VfTable:          000000014236C150
   Address (Base):   00000001430E2020
*/
#pragma pack(push, 8)
class UIListRowToggleWithLabelWidgetData : public UIListRowToggleWidgetData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIListRowToggleWithLabelWidgetData) == 88);

}
