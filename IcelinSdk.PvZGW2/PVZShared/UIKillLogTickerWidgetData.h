#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UITickerWidgetData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871BC0
   RuntimeId:        2ABD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BDA
   VfTable:          000000014236C308
   Address (Base):   00000001430E2260
*/
#pragma pack(push, 8)
class UIKillLogTickerWidgetData : public UITickerWidgetData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Duration; /* 0x0058 */
  char pad_005C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(UIKillLogTickerWidgetData) == 96);

}
