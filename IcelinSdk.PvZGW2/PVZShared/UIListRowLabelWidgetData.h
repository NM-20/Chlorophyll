#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListRowData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871D60
   RuntimeId:        2AD7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BD0
   VfTable:          000000014236C0E0
   Address (Base):   00000001430D8B70
*/
#pragma pack(push, 8)
class UIListRowLabelWidgetData : public UIListRowData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UIListRowLabelWidgetData) == 80);

}
