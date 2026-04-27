#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868638
   RuntimeId:        23E7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9140
   Default Value:    00000001428662E8
*/
#pragma pack(push, 8)
struct ServerTransactionTelemetryOnlineSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING EnableTelemetryLicenseOverride; /* 0x0000 */
  FB_CSTRING EnableNonPlayerEventsLicenseOverride; /* 0x0008 */
  FB_CSTRING EnablePlayerEventsLicenseOverride; /* 0x0010 */
  FB_CSTRING EnablePlayerStatesLicenseOverride; /* 0x0018 */
  FB_STDARRAY(struct TelemetryOnlineSettingsPair) EnabledCategories; /* 0x0020 */
  FB_STDARRAY(struct TelemetryOnlineSettingsPair) DisabledEvents; /* 0x0028 */
  FB_BOOLEAN EnableTelemetry; /* 0x0030 */
  FB_BOOLEAN EnableNonPlayerEvents; /* 0x0031 */
  FB_BOOLEAN EnablePlayerEvents; /* 0x0032 */
  FB_BOOLEAN EnablePlayerStates; /* 0x0033 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerTransactionTelemetryOnlineSettings) == 56);

}
