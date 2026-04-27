#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2375
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142350368
   Address:          00000001430C4528
   Default Value:    00000001428661F0
*/
#pragma pack(push, 8)
struct PVZNetworkSpawnResultMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkSpawnResultMessage) == 80);

}
