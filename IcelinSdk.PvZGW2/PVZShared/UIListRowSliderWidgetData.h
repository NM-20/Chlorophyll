#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListRowLabelWidgetData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871DC0
   RuntimeId:        2ADD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BD1
   VfTable:          000000014236C118
   Address (Base):   00000001430E1FC0
*/
#pragma pack(push, 8)
class UIListRowSliderWidgetData : public UIListRowLabelWidgetData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinValueOverride; /* 0x0050 */
  FB_FLOAT32 MaxValueOverride; /* 0x0054 */
  FB_FLOAT32 StepValueOverride; /* 0x0058 */
  FB_FLOAT32 NewValueOverride; /* 0x005C */
  FB_FLOAT32 InitialValue; /* 0x0060 */
  char pad_0064[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(UIListRowSliderWidgetData) == 104);

}
