#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryParameterType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874D60
   RuntimeId:        2C99
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C08A8
   Default Value:    0000000142874D90
*/
#pragma pack(push, 16)
struct TelemetryHookParameterVec3
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Data; /* 0x0000 */
  TelemetryParameterType ParameterType; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING ParameterName; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TelemetryHookParameterVec3) == 32);

}
