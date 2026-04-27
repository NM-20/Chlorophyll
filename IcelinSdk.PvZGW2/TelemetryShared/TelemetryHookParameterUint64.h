#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryParameterType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874CB8
   RuntimeId:        2C93
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0908
   Default Value:    0000000142874CD0
*/
#pragma pack(push, 8)
struct TelemetryHookParameterUint64
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT64 Data; /* 0x0000 */
  TelemetryParameterType ParameterType; /* 0x0008 */
  char pad_000C[0x0004];
  FB_CSTRING ParameterName; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TelemetryHookParameterUint64) == 24);

}
