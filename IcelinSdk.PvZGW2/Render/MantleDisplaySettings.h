#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/BaseDisplaySettings.h>

namespace fb
{

/* TypeInfo (Array): 00000001428522F0
   RuntimeId:        1558
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11D9
   VfTable:          000000014228DE10
   Address (Base):   00000001430D06E0
*/
#pragma pack(push, 8)
class MantleDisplaySettings : public BaseDisplaySettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 MaxValidationLevel; /* 0x0070 */
  FB_UINT32 ValidationLevel; /* 0x0074 */
  FB_FLOAT32 TimestampCalibrationFrequency; /* 0x0078 */
  FB_INT32 GpuIndex; /* 0x007C */
  FB_UINT32 MultiGpuMaxCount; /* 0x0080 */
  FB_INT32 CrossDisplayPresent; /* 0x0084 */
  FB_UINT32 SimulateMultiGpuCount; /* 0x0088 */
  FB_UINT32 FramePacingMethod; /* 0x008C */
  FB_FLOAT32 FramePacingDampeningFactor; /* 0x0090 */
  FB_FLOAT32 FramePacingSpikeFilterThreshold; /* 0x0094 */
  FB_UINT32 FramePacingHistorySize; /* 0x0098 */
  FB_UINT32 MaxFrameDescriptorSetSlotCount; /* 0x009C */
  FB_CSTRING AppName; /* 0x00A0 */
  FB_UINT32 AppVersion; /* 0x00A8 */
  char pad_00AC[0x0004];
  FB_CSTRING AmdMinCatalystVersion; /* 0x00B0 */
  FB_CSTRING AmdMinDriverPackagingVersion; /* 0x00B8 */
  FB_BOOLEAN BreakOnError; /* 0x00C0 */
  FB_BOOLEAN BreakOnWarning; /* 0x00C1 */
  FB_BOOLEAN MemoryPoolingEnable; /* 0x00C2 */
  FB_BOOLEAN GpuProfilerEnable; /* 0x00C3 */
  FB_BOOLEAN TimestampCalibrationEnable; /* 0x00C4 */
  FB_BOOLEAN MultiGpuEnable; /* 0x00C5 */
  FB_BOOLEAN CommandBuffersEnable; /* 0x00C6 */
  FB_BOOLEAN ComputeQueueEnable; /* 0x00C7 */
  FB_BOOLEAN DmaQueueEnable; /* 0x00C8 */
  FB_BOOLEAN TimerQueueEnable; /* 0x00C9 */
  FB_BOOLEAN AdvancedMsaaEnable; /* 0x00CA */
  FB_BOOLEAN FmaskEnable; /* 0x00CB */
  FB_BOOLEAN OcclusionQueryCopyEnable; /* 0x00CC */
  FB_BOOLEAN TimestampQueriesEnable; /* 0x00CD */
  FB_BOOLEAN DepthBoundsEnable; /* 0x00CE */
  FB_BOOLEAN QuadListEnable; /* 0x00CF */
  FB_BOOLEAN RectListEnable; /* 0x00D0 */
  FB_BOOLEAN CmdBufferOptimizePipelineSwitch; /* 0x00D1 */
  FB_BOOLEAN CmdBufferOptimizeDescriptorSetSwitch; /* 0x00D2 */
  FB_BOOLEAN CmdBufferOptimizeGpuSmallBatch; /* 0x00D3 */
  FB_BOOLEAN CmdBufferOptimizeOneTimeEnable; /* 0x00D4 */
  FB_BOOLEAN RenderAccessOptimalEnable; /* 0x00D5 */
  FB_BOOLEAN UseReservedJobThreads; /* 0x00D6 */
  FB_BOOLEAN ForceDriverPreferredMemoryLocations; /* 0x00D7 */
  FB_BOOLEAN VideoSharedAsSystemSharedOnIntegrated; /* 0x00D8 */
  FB_BOOLEAN SubmitJobEnable; /* 0x00D9 */
  FB_BOOLEAN DrawStats; /* 0x00DA */
  FB_BOOLEAN AsyncResourceManagerEnable; /* 0x00DB */
  FB_BOOLEAN MinDriverRequired; /* 0x00DC */
  char pad_00DD[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(MantleDisplaySettings) == 224);

}
