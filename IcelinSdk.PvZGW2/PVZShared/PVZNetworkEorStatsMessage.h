#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        239C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234FE88
   Address:          00000001430C40E8
   Default Value:    0000000142866EE0
*/
#pragma pack(push, 8)
struct PVZNetworkEorStatsMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x00C8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C8 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkEorStatsMessage) == 200);

}
