#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428687E0
   RuntimeId:        23F5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B90A0
   Default Value:    0000000142BB4F70
*/
#pragma pack(push, 8)
struct TelemetryPinSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING ServerAddress; /* 0x0000 */
  FB_INT32 ServerPort; /* 0x0008 */
  char pad_000C[0x0004];
  FB_CSTRING Environment; /* 0x0010 */
  FB_CSTRING TitleIdType; /* 0x0018 */
  FB_CSTRING TitleId; /* 0x0020 */
  FB_CSTRING ReleaseType; /* 0x0028 */
  FB_STDARRAY(struct TelemetryPinSettingsPair) EnableEventType; /* 0x0030 */
  FB_BOOLEAN EnableTelemetry; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(TelemetryPinSettings) == 64);

}
