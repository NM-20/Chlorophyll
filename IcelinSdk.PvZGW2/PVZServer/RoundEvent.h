#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860468
   RuntimeId:        1E52
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05ED
   VfTable:          0000000142320590
   Address (Base):   0000000143109FF0
*/
#pragma pack(push, 8)
class RoundEvent : public MetricEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING LevelName; /* 0x0018 */
  FB_INT32 JuiceSessionId; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RoundEvent) == 40);

}
