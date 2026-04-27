#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/CoreLogLevel.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>
#include <IcelinSdk.PvZGW2/Core/HardwareProfile.h>
#include <IcelinSdk.PvZGW2/Core/TelemetryReleaseType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428337A8
   RuntimeId:        0135
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BD918
   Default Value:    0000000142B7DFA0
*/
#pragma pack(push, 8)
struct CoreSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Host; /* 0x0000 */
  FB_CSTRING HostUser; /* 0x0008 */
  FB_CSTRING HostUserDomain; /* 0x0010 */
  FB_CSTRING InitSeed; /* 0x0018 */
  CoreLogLevel LogLevel; /* 0x0020 */
  CoreLogLevel DialogLevel; /* 0x0024 */
  FB_UINT32 DebugOutputMode; /* 0x0028 */
  FB_UINT32 BreakpadMode; /* 0x002C */
  FB_INT32 RandomTimeSeed; /* 0x0030 */
  FB_INT32 RandomTickSeed; /* 0x0034 */
  FB_INT32 RandomSessionId; /* 0x0038 */
  LocalPlayerId LocalPlayerIdToCommand; /* 0x003C */
  FB_CSTRING GameConfigurationName; /* 0x0040 */
  HardwareProfile HardwareProfile; /* 0x0048 */
  FB_FLOAT32 HardwareCpuBias; /* 0x004C */
  FB_FLOAT32 HardwareGpuBias; /* 0x0050 */
  char pad_0054[0x0004];
  FB_CSTRING ProfileDirectoryName; /* 0x0058 */
  FB_FLOAT32 ScatterJobYieldGranularity; /* 0x0060 */
  char pad_0064[0x0004];
  FB_CSTRING AvailableLanguages; /* 0x0068 */
  TelemetryReleaseType TelemetryReleaseType; /* 0x0070 */
  FB_BOOLEAN LiveEditingEnable; /* 0x0074 */
  FB_BOOLEAN UserLogEnabled; /* 0x0075 */
  FB_BOOLEAN DisplayAsserts; /* 0x0076 */
  FB_BOOLEAN CrashOnFatalErrors; /* 0x0077 */
  FB_BOOLEAN UseStorageServer; /* 0x0078 */
  FB_BOOLEAN EnableLocalization; /* 0x0079 */
  FB_BOOLEAN UseGameStaticArena; /* 0x007A */
  char pad_007B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(CoreSettings) == 128);

}
