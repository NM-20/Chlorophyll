#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428333B0
   RuntimeId:        00F7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0834
   VfTable:          00000001421E5248
   Address (Base):   0000000143101230
*/
#pragma pack(push, 8)
class TimingViewSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 FrameCount; /* 0x0010 */
  FB_UINT32 FrameDelayCount; /* 0x0014 */
  FB_UINT32 FrameCountToReport; /* 0x0018 */
  FB_FLOAT32 TimeRange; /* 0x001C */
  FB_FLOAT32 TimeOffset; /* 0x0020 */
  FB_FLOAT32 LogThreshold; /* 0x0024 */
  FB_FLOAT32 AutolockThreshold; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING AutolockNameFilter; /* 0x0030 */
  FB_INT32 LegendScreenOffset; /* 0x0038 */
  FB_INT32 LegendNameWidth; /* 0x003C */
  FB_INT32 LegendColumnWidth; /* 0x0040 */
  FB_INT32 LegendDisplayMode; /* 0x0044 */
  FB_INT32 AverageFrameCount; /* 0x0048 */
  char pad_004C[0x0004];
  FB_CSTRING SnoopEventName; /* 0x0050 */
  FB_CSTRING FilterEventName; /* 0x0058 */
  FB_FLOAT32 FilterEventTime; /* 0x0060 */
  char pad_0064[0x0004];
  FB_FLOAT64 BarMinTime; /* 0x0068 */
  FB_UINT32 BarHeight; /* 0x0070 */
  FB_UINT32 BarPad; /* 0x0074 */
  FB_INT32 BarSyncProcessor; /* 0x0078 */
  FB_INT32 MaxCpuLegendColumnCount; /* 0x007C */
  FB_INT32 MaxGpuLegendColumnCount; /* 0x0080 */
  FB_INT32 MaxSpuLegendColumnCount; /* 0x0084 */
  FB_UINT32 MaxFrameEventCount; /* 0x0088 */
  FB_BOOLEAN Enable; /* 0x008C */
  FB_BOOLEAN DrawEnable; /* 0x008D */
  FB_BOOLEAN DrawBarsEnable; /* 0x008E */
  FB_BOOLEAN DrawLegendEnable; /* 0x008F */
  FB_BOOLEAN DrawCpuLegendEnable; /* 0x0090 */
  FB_BOOLEAN DrawGpuLegendEnable; /* 0x0091 */
  FB_BOOLEAN DrawSpuLegendEnable; /* 0x0092 */
  FB_BOOLEAN SnoopEnable; /* 0x0093 */
  FB_BOOLEAN SnoopOnly; /* 0x0094 */
  FB_BOOLEAN SortByTime; /* 0x0095 */
  FB_BOOLEAN FilterEnable; /* 0x0096 */
  FB_BOOLEAN CollectionEnable; /* 0x0097 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */
#pragma pack(pop)

static_assert(sizeof(TimingViewSettings) == 152);

}
