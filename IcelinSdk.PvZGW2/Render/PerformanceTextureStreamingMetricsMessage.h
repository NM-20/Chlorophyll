#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16C0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422A1270
   Address:          00000001430C7C88
   Default Value:    0000000142853AE0
*/
#pragma pack(push, 8)
struct PerformanceTextureStreamingMetricsMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PerformanceTextureStreamingMetricsMessage) == 56);

}
