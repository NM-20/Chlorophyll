#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AD48
   RuntimeId:        0EEF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11BB
   VfTable:          0000000142262E28
   Address (Base):   00000001430BE250
*/
#pragma pack(push, 8)
class GameTimeSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 JoinJobsTimeLimit; /* 0x0020 */
  FB_FLOAT32 YieldTimeLimit; /* 0x0024 */
  FB_INT32 YieldTime; /* 0x0028 */
  FB_FLOAT32 MaxSimFps; /* 0x002C */
  FB_UINT32 ForceSimRate; /* 0x0030 */
  FB_FLOAT32 MaxVariableFps; /* 0x0034 */
  FB_FLOAT32 MaxInactiveVariableFps; /* 0x0038 */
  FB_FLOAT32 ForceDeltaTime; /* 0x003C */
  FB_INT32 ForceDeltaTickCount; /* 0x0040 */
  FB_INT32 ClampTicks; /* 0x0044 */
  FB_FLOAT32 TimeScale; /* 0x0048 */
  FB_FLOAT32 DebugFrameDelay; /* 0x004C */
  FB_BOOLEAN UseWaitableTimers; /* 0x0050 */
  FB_BOOLEAN DoubleNoTickWait; /* 0x0051 */
  FB_BOOLEAN VariableSimTickTimeEnable; /* 0x0052 */
  FB_BOOLEAN ForceUseSleepTimer; /* 0x0053 */
  FB_BOOLEAN ForceSinglePlayerFixedTick; /* 0x0054 */
  FB_BOOLEAN ForceMultiplayerOneTickMin; /* 0x0055 */
  FB_BOOLEAN EnableSinglePlayerFixedTick; /* 0x0056 */
  char pad_0057[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(GameTimeSettings) == 88);

}
