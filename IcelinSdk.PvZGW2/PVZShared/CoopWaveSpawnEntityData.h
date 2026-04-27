#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BaseWaveSpawnEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873768
   RuntimeId:        2BE6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A2A
   VfTable:          0000000142379120
   Address (Base):   0000000143104650
*/
#pragma pack(push, 8)
class CoopWaveSpawnEntityData : public BaseWaveSpawnEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class WaveComposition) WaveData; /* 0x0028 */
  FB_INT32 PlayerCount; /* 0x0030 */
  FB_INT32 WaveNumber; /* 0x0034 */
  FB_FLOAT32 StartDelayTime; /* 0x0038 */
  char pad_003C[0x0004];
  FB_HANDLE(class AIWaveDifficulty) WaveDifficulty; /* 0x0040 */
  FB_CSTRING IntroSIDOverride; /* 0x0048 */
  FB_CSTRING WaveType; /* 0x0050 */
  FB_CSTRING ChallengeName; /* 0x0058 */
  FB_FLOAT32 TrackablePlayerPoiDistanceTrigger; /* 0x0060 */
  char pad_0064[0x0004];
  FB_STDARRAY(FB_CSTRING) MonitoredEvents; /* 0x0068 */
  FB_FLOAT32 AdditionalRangeAllowance; /* 0x0070 */
  FB_FLOAT32 SpawnPoolMultiplier; /* 0x0074 */
  FB_BOOLEAN WaitOnSlotsComplete; /* 0x0078 */
  FB_BOOLEAN MustKillTrackablePlayer; /* 0x0079 */
  FB_BOOLEAN AllowOutOfRangeSpawnPoints; /* 0x007A */
  char pad_007B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(CoopWaveSpawnEntityData) == 128);

}
