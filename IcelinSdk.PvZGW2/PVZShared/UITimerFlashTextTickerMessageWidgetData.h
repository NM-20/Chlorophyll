#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UITickerMessageWidgetData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871BE0
   RuntimeId:        2ABF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BD5
   VfTable:          000000014236C2D0
   Address (Base):   00000001430E4120
*/
#pragma pack(push, 8)
class UITimerFlashTextTickerMessageWidgetData : public UITickerMessageWidgetData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UITimerFlashTextTickerMessageWidgetData) == 72);

}
