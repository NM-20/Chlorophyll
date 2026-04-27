#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ADA8
   RuntimeId:        0EF5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E58
   VfTable:          0000000142262C68
   Address (Base):   00000001430D0D40
*/
#pragma pack(push, 8)
class DemoSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING RecordDemoFileName; /* 0x0010 */
  FB_CSTRING PlaybackDemoFileName; /* 0x0018 */
  FB_CSTRING TimeDemo; /* 0x0020 */
  FB_CSTRING LockToPlayerName; /* 0x0028 */
  FB_UINT32 ChangePlayerInterval; /* 0x0030 */
  FB_UINT32 ForcedDeltaTickCount; /* 0x0034 */
  FB_UINT32 StartProfilingOnFrame; /* 0x0038 */
  FB_UINT32 StopProfilingOnFrame; /* 0x003C */
  FB_UINT32 TakeScreenshotOnFrame; /* 0x0040 */
  FB_BOOLEAN PauseOnStartup; /* 0x0044 */
  FB_BOOLEAN AllowOverwrite; /* 0x0045 */
  FB_BOOLEAN LogPerformance; /* 0x0046 */
  FB_BOOLEAN SuppressDebugLog; /* 0x0047 */
  FB_BOOLEAN ShutdownOnDemoComplete; /* 0x0048 */
  FB_BOOLEAN LoopingDemo; /* 0x0049 */
  FB_BOOLEAN LockToRandomPlayer; /* 0x004A */
  char pad_004B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(DemoSettings) == 80);

}
