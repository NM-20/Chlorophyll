#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860428
   RuntimeId:        1E4E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05E5
   VfTable:          00000001423205B0
   Address (Base):   00000001430CE630
*/
#pragma pack(push, 8)
class MetricState : public MetricEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN IsSet; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MetricState) == 32);

}
