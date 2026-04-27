#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/DxDisplaySettings.h>

namespace fb
{

/* TypeInfo (Array): 00000001428522B0
   RuntimeId:        1554
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11DC
   VfTable:          000000014228DDF0
   Address (Base):   00000001430DB3F0
*/
#pragma pack(push, 8)
class Dx12DisplaySettings : public DxDisplaySettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ComputeQueueEnable; /* 0x00A8 */
  FB_UINT32 MaxMultisampleCount; /* 0x00AC */
  FB_UINT32 MemoryManagerShrink; /* 0x00B0 */
  FB_UINT32 MemoryManagerPoolSizeMb; /* 0x00B4 */
  FB_BOOLEAN DebugReportLeakSummaryEnable; /* 0x00B8 */
  FB_BOOLEAN DebugReportLeakDetailsEnable; /* 0x00B9 */
  FB_BOOLEAN CheckDeviceRemovedEnable; /* 0x00BA */
  FB_BOOLEAN MemoryPoolsEnable; /* 0x00BB */
  FB_BOOLEAN StablePowerStateEnable; /* 0x00BC */
  FB_BOOLEAN GpuProfilerEnable; /* 0x00BD */
  FB_BOOLEAN DrawStats; /* 0x00BE */
  FB_BOOLEAN DrawMemoryStats; /* 0x00BF */
  FB_BOOLEAN DrawMemoryGraph; /* 0x00C0 */
  FB_BOOLEAN DescriptorTableFrameReuseEnable; /* 0x00C1 */
  FB_BOOLEAN DepthBoundsExtensionEnable; /* 0x00C2 */
  FB_BOOLEAN ResetJobEnable; /* 0x00C3 */
  FB_BOOLEAN ParallelResetJobEnable; /* 0x00C4 */
  FB_BOOLEAN SubmitJobEnable; /* 0x00C5 */
  FB_BOOLEAN PresentJoinJobsEnable; /* 0x00C6 */
  FB_BOOLEAN ValidateStateCausesResourceTransition; /* 0x00C7 */
  FB_BOOLEAN PixMarkersEnable; /* 0x00C8 */
  FB_BOOLEAN BatchBarriersEnable; /* 0x00C9 */
  FB_BOOLEAN PipelineCachingEnable; /* 0x00CA */
  FB_BOOLEAN OptimizedComputeSyncEnable; /* 0x00CB */
  FB_BOOLEAN MemoryManagerEnable; /* 0x00CC */
  FB_BOOLEAN MemoryManagerSubscribe; /* 0x00CD */
  FB_BOOLEAN MemoryManagerReserve; /* 0x00CE */
  FB_BOOLEAN MemoryManagerVerbose; /* 0x00CF */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(Dx12DisplaySettings) == 208);

}
