#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryParameterType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874DB8
   RuntimeId:        2C9B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0888
   Default Value:    0000000142874DD0
*/
#pragma pack(push, 16)
struct TelemetryHookParameterVec4
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec4 Data; /* 0x0000 */
  TelemetryParameterType ParameterType; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING ParameterName; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TelemetryHookParameterVec4) == 32);

}
