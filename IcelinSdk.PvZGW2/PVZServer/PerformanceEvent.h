#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricEvent.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860628
   RuntimeId:        1E6E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05F4
   VfTable:          00000001423204A0
   Address (Base):   0000000143109AB0
*/
#pragma pack(push, 16)
class PerformanceEvent : public MetricEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec3 Position; /* 0x0020 */
  FB_FLOAT32 CPUAverage; /* 0x0030 */
  FB_FLOAT32 FreeCPUMemory; /* 0x0034 */
  FB_FLOAT32 AllocCPUMemory; /* 0x0038 */
  FB_FLOAT32 GPUAverage; /* 0x003C */
  FB_FLOAT32 FreeGPUMemory; /* 0x0040 */
  FB_FLOAT32 AllocGPUMemory; /* 0x0044 */
  FB_INT32 DrawCallCount; /* 0x0048 */
  FB_INT32 PrimitiveCount; /* 0x004C */
  FB_CSTRING PerformanceLocation; /* 0x0050 */
  FB_GUID PerformanceLink; /* 0x0058 */
  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PerformanceEvent) == 112);

}
