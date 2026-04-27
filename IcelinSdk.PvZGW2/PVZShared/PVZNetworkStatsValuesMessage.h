#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23D1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234F048
   Address:          00000001430C3AA8
   Default Value:    00000001428680D0
*/
#pragma pack(push, 8)
struct PVZNetworkStatsValuesMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkStatsValuesMessage) == 88);

}
