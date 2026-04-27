#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryParameterType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874B78
   RuntimeId:        2C87
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C09C8
   Default Value:    0000000142874B90
*/
#pragma pack(push, 8)
struct TelemetryParameterDataProperty
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING StatName; /* 0x0000 */
  TelemetryParameterType DataType; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TelemetryParameterDataProperty) == 16);

}
