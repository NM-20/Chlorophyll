#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryParameterType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874BA8
   RuntimeId:        2C89
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C09A8
   Default Value:    0000000142874BC0
*/
#pragma pack(push, 8)
struct TelemetryHookParameter
{
  typedef struct ValueTypeInfo TypeInfo_t;

  TelemetryParameterType ParameterType; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING ParameterName; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TelemetryHookParameter) == 16);

}
