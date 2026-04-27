#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860668
   RuntimeId:        1E72
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05EC
   VfTable:          00000001423203E0
   Address (Base):   00000001431099F0
*/
#pragma pack(push, 8)
class FramerateHistogramPerformanceEvent : public MetricEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SpikeAverage; /* 0x0018 */
  FB_FLOAT32 Below5; /* 0x001C */
  FB_FLOAT32 Below10; /* 0x0020 */
  FB_FLOAT32 Below15; /* 0x0024 */
  FB_FLOAT32 Below20; /* 0x0028 */
  FB_FLOAT32 Below25; /* 0x002C */
  FB_FLOAT32 Below30; /* 0x0030 */
  FB_FLOAT32 Below35; /* 0x0034 */
  FB_FLOAT32 Below40; /* 0x0038 */
  FB_FLOAT32 Below45; /* 0x003C */
  FB_FLOAT32 Below50; /* 0x0040 */
  FB_FLOAT32 Below55; /* 0x0044 */
  FB_FLOAT32 Below60; /* 0x0048 */
  FB_FLOAT32 Above60; /* 0x004C */
  FB_GUID PerformanceLink; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(FramerateHistogramPerformanceEvent) == 96);

}
