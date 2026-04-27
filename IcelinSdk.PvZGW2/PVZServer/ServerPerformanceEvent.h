#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860608
   RuntimeId:        1E6C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05EE
   VfTable:          00000001423204B0
   Address (Base):   0000000143109B10
*/
#pragma pack(push, 8)
class ServerPerformanceEvent : public MetricEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CPUAverage; /* 0x0018 */
  FB_FLOAT32 CPUMemory; /* 0x001C */
  FB_UINT32 Received; /* 0x0020 */
  FB_UINT32 Sent; /* 0x0024 */
  FB_FLOAT32 ReceivedAverage; /* 0x0028 */
  FB_FLOAT32 SentAverage; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerPerformanceEvent) == 48);

}
