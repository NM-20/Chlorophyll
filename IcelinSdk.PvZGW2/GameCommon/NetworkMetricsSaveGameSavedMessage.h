#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B95
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422405E0
   Address:          00000001430CB168
   Default Value:    0000000142843700
*/
#pragma pack(push, 8)
struct NetworkMetricsSaveGameSavedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(NetworkMetricsSaveGameSavedMessage) == 80);

}
