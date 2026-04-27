#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428650C0
   RuntimeId:        2285
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C5A
   VfTable:          0000000142351BB0
   Address (Base):   00000001430E7E40
*/
#pragma pack(push, 8)
class TelemetryTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING Value; /* 0x0020 */
  FB_FLOAT32 InputFloatValue; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING EndlessOpsWaveStatus; /* 0x0030 */
  FB_INT32 EndlessOpsNumPlayers; /* 0x0038 */
  FB_INT32 EndlessOpsStartWave; /* 0x003C */
  FB_INT32 EndlessOpsCurrentWave; /* 0x0040 */
  FB_INT32 EndlessOpsTotalShards; /* 0x0044 */
  FB_INT32 EndlessOpsTeamKillsCurrentWave; /* 0x0048 */
  FB_INT32 EndlessOpsTeamKillsOverall; /* 0x004C */
  FB_FLOAT32 EndlessOpsTimeLeft; /* 0x0050 */
  FB_FLOAT32 EndlessOpsPlayTimeCurrentWave; /* 0x0054 */
  FB_FLOAT32 EndlessOpsPlayTimeOverall; /* 0x0058 */
  char pad_005C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(TelemetryTriggerEntityData) == 96);

}
