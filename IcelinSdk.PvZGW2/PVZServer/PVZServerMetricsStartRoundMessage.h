#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E46
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142320520
   Address:          00000001430C5B68
   Default Value:    00000001428602A8
*/
#pragma pack(push, 8)
struct PVZServerMetricsStartRoundMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZServerMetricsStartRoundMessage) == 56);

}
