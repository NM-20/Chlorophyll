#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryParameterType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874DF8
   RuntimeId:        2C9D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0868
   Default Value:    0000000142874E10
*/
#pragma pack(push, 16)
struct TelemetryHookParameterTransform
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LinearTransform Data; /* 0x0000 */
  TelemetryParameterType ParameterType; /* 0x0040 */
  char pad_0044[0x0004];
  FB_CSTRING ParameterName; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(TelemetryHookParameterTransform) == 80);

}
