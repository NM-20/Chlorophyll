#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428685E8
   RuntimeId:        23E3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9160
   Default Value:    0000000142866288
*/
#pragma pack(push, 8)
struct MetricsTelemetryOnlineSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) EnabledRealms; /* 0x0000 */
  FB_STDARRAY(struct OnlineSettingsTelemetryEvent) EnabledDisabledEvents; /* 0x0008 */
  FB_BOOLEAN EnableTelemetry; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MetricsTelemetryOnlineSettings) == 24);

}
