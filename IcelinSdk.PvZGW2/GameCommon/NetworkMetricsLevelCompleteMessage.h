#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B97
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240450
   Address:          00000001430CB128
   Default Value:    00000001428437A0
*/
#pragma pack(push, 8)
struct NetworkMetricsLevelCompleteMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(NetworkMetricsLevelCompleteMessage) == 72);

}
