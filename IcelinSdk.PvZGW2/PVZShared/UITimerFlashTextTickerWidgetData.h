#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UITickerWidgetData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871C00
   RuntimeId:        2AC1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BD8
   VfTable:          000000014236C378
   Address (Base):   00000001430E40C0
*/
#pragma pack(push, 8)
class UITimerFlashTextTickerWidgetData : public UITickerWidgetData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Duration; /* 0x0058 */
  char pad_005C[0x0004];
  FB_CSTRING FlashText; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(UITimerFlashTextTickerWidgetData) == 104);

}
