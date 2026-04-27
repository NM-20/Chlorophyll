#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UITickerMessageWidgetData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871BA0
   RuntimeId:        2ABB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BD3
   VfTable:          000000014236C3E8
   Address (Base):   00000001430E4180
*/
#pragma pack(push, 8)
class UICoinzTickerMessageWidgetData : public UITickerMessageWidgetData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UICoinzTickerMessageWidgetData) == 72);

}
