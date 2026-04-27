#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricState.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860688
   RuntimeId:        1E74
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05E6
   VfTable:          00000001423203D0
   Address (Base):   0000000143109990
*/
#pragma pack(push, 8)
class PerformanceProfileState : public MetricState
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 ProcessorCount; /* 0x0020 */
  FB_UINT32 ProcessorCoreCount; /* 0x0024 */
  FB_UINT32 ProcessorClock; /* 0x0028 */
  FB_UINT32 TotalMemMB; /* 0x002C */
  FB_UINT32 GpuMemMB; /* 0x0030 */
  char pad_0034[0x0004];
  FB_CSTRING GraphicAdapterName; /* 0x0038 */
  FB_CSTRING Platform; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PerformanceProfileState) == 72);

}
