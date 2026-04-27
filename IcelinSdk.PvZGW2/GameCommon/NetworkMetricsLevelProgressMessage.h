#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B96
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422404A0
   Address:          00000001430CB148
   Default Value:    0000000142843750
*/
#pragma pack(push, 8)
struct NetworkMetricsLevelProgressMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(NetworkMetricsLevelProgressMessage) == 80);

}
