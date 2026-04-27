#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E45
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142320540
   Address:          00000001430C5B88
   Default Value:    0000000142860260
*/
#pragma pack(push, 8)
struct PVZServerMetricsRankupMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZServerMetricsRankupMessage) == 72);

}
