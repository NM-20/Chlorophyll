#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871B20
   RuntimeId:        2AB3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BD7
   VfTable:          000000014236C278
   Address (Base):   00000001430CFE40
*/
#pragma pack(push, 8)
class UITickerWidgetData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIWidgetBlueprint) TickerBlueprint; /* 0x0048 */
  FB_UINT32 MaxNumTickers; /* 0x0050 */
  char pad_0054[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UITickerWidgetData) == 88);

}
