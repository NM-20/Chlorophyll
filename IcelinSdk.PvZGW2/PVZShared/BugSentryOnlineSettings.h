#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868720
   RuntimeId:        23EB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9100
   Default Value:    00000001428664B8
*/
#pragma pack(push, 8)
struct BugSentryOnlineSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING EnableKillswitchForCrashDumpsLicenseName; /* 0x0000 */
  FB_CSTRING ForceProdModeLicenseName; /* 0x0008 */
  FB_INT32 CrashTimerInSeconds; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING CrashTimerLicenseName; /* 0x0018 */
  FB_BOOLEAN EnableKillswitchForCrashDumps; /* 0x0020 */
  FB_BOOLEAN EnableCrashDumps; /* 0x0021 */
  FB_BOOLEAN ForceProdMode; /* 0x0022 */
  FB_BOOLEAN CrashTimerDoDummyCrash; /* 0x0023 */
  FB_BOOLEAN EnablePinTelemetry; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BugSentryOnlineSettings) == 40);

}
