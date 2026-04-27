#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860448
   RuntimeId:        1E50
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05F6
   VfTable:          00000001423205A0
   Address (Base):   00000001430F8A10
*/
#pragma pack(push, 8)
class MetricAggregate : public MetricEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MetricAggregate) == 24);

}
