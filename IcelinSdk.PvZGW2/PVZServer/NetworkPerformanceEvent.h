#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860648
   RuntimeId:        1E70
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05F8
   VfTable:          00000001423203F0
   Address (Base):   0000000143109A50
*/
#pragma pack(push, 8)
class NetworkPerformanceEvent : public MetricEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 Received; /* 0x0018 */
  FB_UINT32 Sent; /* 0x001C */
  FB_FLOAT32 ReceivedAverage; /* 0x0020 */
  FB_FLOAT32 SentAverage; /* 0x0024 */
  FB_GUID PerformanceLink; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(NetworkPerformanceEvent) == 56);

}
