#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryParameterType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874C80
   RuntimeId:        2C91
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0928
   Default Value:    0000000142874C98
*/
#pragma pack(push, 8)
struct TelemetryHookParameterUint
{
  typedef struct ValueTypeInfo TypeInfo_t;

  TelemetryParameterType ParameterType; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING ParameterName; /* 0x0008 */
  FB_UINT32 Data; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TelemetryHookParameterUint) == 24);

}
