#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428756A8
   RuntimeId:        2D1E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7D80
   Default Value:    00000001428756C0
*/
#pragma pack(push, 8)
struct TelemetrySDKPinSessionHeaderConfig
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING EventType; /* 0x0000 */
  FB_CSTRING BuildVersion; /* 0x0008 */
  FB_CSTRING Locale; /* 0x0010 */
  FB_CSTRING CustomSessionHeaders; /* 0x0018 */
  FB_CSTRING TitleIdType; /* 0x0020 */
  FB_CSTRING TitleId; /* 0x0028 */
  FB_CSTRING ReleaseType; /* 0x0030 */
  FB_CSTRING Platform; /* 0x0038 */
  FB_CSTRING MacAddress; /* 0x0040 */
  FB_CSTRING DeviceIdMap; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySDKPinSessionHeaderConfig) == 80);

}
