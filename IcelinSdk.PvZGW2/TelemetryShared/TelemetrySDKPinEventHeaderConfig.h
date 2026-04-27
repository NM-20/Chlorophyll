#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875718
   RuntimeId:        2D20
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7D60
   Default Value:    0000000142875730
*/
#pragma pack(push, 8)
struct TelemetrySDKPinEventHeaderConfig
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING OtherPlayerIds; /* 0x0000 */
  FB_CSTRING Level; /* 0x0008 */
  FB_CSTRING DateOfBirth; /* 0x0010 */
  FB_CSTRING ExperimentId; /* 0x0018 */
  FB_CSTRING PlayerIdType; /* 0x0020 */
  FB_CSTRING PlayerId; /* 0x0028 */
  FB_CSTRING TitleIdType; /* 0x0030 */
  FB_CSTRING TitleId; /* 0x0038 */
  FB_CSTRING ReleaseType; /* 0x0040 */
  FB_CSTRING Platform; /* 0x0048 */
  FB_CSTRING MacAddress; /* 0x0050 */
  FB_CSTRING DeviceIdMap; /* 0x0058 */
  FB_CSTRING CustomEventHeaders; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySDKPinEventHeaderConfig) == 104);

}
