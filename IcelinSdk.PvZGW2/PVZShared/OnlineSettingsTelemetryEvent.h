#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868598
   RuntimeId:        23E1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3908
   Default Value:    00000001428685B0
*/
#pragma pack(push, 8)
struct OnlineSettingsTelemetryEvent
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) Realms; /* 0x0000 */
  FB_STDARRAY(FB_CSTRING) Scopes; /* 0x0008 */
  FB_CSTRING Module; /* 0x0010 */
  FB_CSTRING Group; /* 0x0018 */
  FB_CSTRING String; /* 0x0020 */
  FB_BOOLEAN Enabled; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(OnlineSettingsTelemetryEvent) == 48);

}
