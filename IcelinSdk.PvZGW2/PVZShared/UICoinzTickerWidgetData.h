#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UITickerWidgetData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871B60
   RuntimeId:        2AB7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BD9
   VfTable:          000000014236C3B0
   Address (Base):   00000001430E41E0
*/
#pragma pack(push, 8)
class UICoinzTickerWidgetData : public UITickerWidgetData
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

static_assert(sizeof(UICoinzTickerWidgetData) == 96);

}
