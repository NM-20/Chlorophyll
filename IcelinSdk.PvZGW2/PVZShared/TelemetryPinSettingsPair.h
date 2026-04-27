#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428687B0
   RuntimeId:        23F3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C38A8
   Default Value:    00000001428687C8
*/
#pragma pack(push, 8)
struct TelemetryPinSettingsPair
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_UINT32 StreamId; /* 0x0008 */
  FB_BOOLEAN Enabled; /* 0x000C */
  char pad_000D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TelemetryPinSettingsPair) == 16);

}
