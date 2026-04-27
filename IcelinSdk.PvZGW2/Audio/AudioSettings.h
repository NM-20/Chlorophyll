#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836950
   RuntimeId:        0411
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          114F
   VfTable:          00000001421F4A08
   Address (Base):   00000001430DCCB0
*/
#pragma pack(push, 8)
class AudioSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 DataManagerCacheSize; /* 0x0010 */
  FB_UINT32 DataManagerCacheRsxSize; /* 0x0014 */
  FB_UINT32 DataManagerMaxReadIssueCount; /* 0x0018 */
  FB_UINT32 DataManagerMaxReadActiveCount; /* 0x001C */
  FB_UINT32 DataManagerMaxTrimSize; /* 0x0020 */
  FB_FLOAT32 AudioCoreCpuLoadLimit; /* 0x0024 */
  FB_FLOAT32 AudioCoreCpuLoadRecovery; /* 0x0028 */
  FB_INT32 AudioCoreThread; /* 0x002C */
  FB_INT32 AudioCoreMixJobThreadCount; /* 0x0030 */
  FB_INT32 AudioCoreMaxMixJobThreadCount; /* 0x0034 */
  FB_INT32 AudioCoreMinProcStageVoicesToGoWide; /* 0x0038 */
  FB_FLOAT32 AudioCoreMiniumMixAhead; /* 0x003C */
  FB_FLOAT32 AudioCoreTargetMixAhead; /* 0x0040 */
  FB_UINT32 AudioCoreMaxChannelCount; /* 0x0044 */
  FB_UINT32 DelayLineAllocSize; /* 0x0048 */
  FB_UINT32 ReverbAllocSize; /* 0x004C */
  FB_FLOAT32 HdrSuspensionThreshold; /* 0x0050 */
  FB_FLOAT32 HdrZombieThreshold; /* 0x0054 */
  FB_FLOAT32 HdrEnableSuspensionThreshold; /* 0x0058 */
  FB_FLOAT32 SoundSpeed; /* 0x005C */
  FB_FLOAT32 SoundDopplerFactor; /* 0x0060 */
  FB_FLOAT32 SoundDopplerSmoothFactor; /* 0x0064 */
  FB_FLOAT32 MusicRequestBufferTime; /* 0x0068 */
  FB_UINT32 DacDelay; /* 0x006C */
  FB_FLOAT32 DacAmplitude; /* 0x0070 */
  FB_UINT32 DacMaxSpeakerCount; /* 0x0074 */
  FB_FLOAT32 OutputGainMultiplier; /* 0x0078 */
  FB_BOOLEAN AudioCoreMultipleMixJobsEnabled; /* 0x007C */
  FB_BOOLEAN AudioCoreSystemJobsEnabled; /* 0x007D */
  FB_BOOLEAN AudioCoreWatchDogThreadEnabled; /* 0x007E */
  FB_BOOLEAN VerboseResourceSystemInfo; /* 0x007F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(AudioSettings) == 128);

}
