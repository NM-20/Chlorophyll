#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875670
   RuntimeId:        2D1C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7DA0
   Default Value:    0000000142875688
*/
#pragma pack(push, 8)
struct TelemetrySDKPinEndPointConfig
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING ServerAddress; /* 0x0000 */
  FB_INT32 ServerPort; /* 0x0008 */
  char pad_000C[0x0004];
  FB_CSTRING Environment; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySDKPinEndPointConfig) == 24);

}
