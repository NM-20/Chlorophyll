#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871B40
   RuntimeId:        2AB5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BD2
   VfTable:          000000014236C240
   Address (Base):   00000001430CFDE0
*/
#pragma pack(push, 8)
class UITickerMessageWidgetData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UITickerMessageWidgetData) == 72);

}
