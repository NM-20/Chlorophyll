#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        239E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234FDE8
   Address:          00000001430C40A8
   Default Value:    0000000142867040
*/
#pragma pack(push, 8)
struct PVZNetworkVirtualGameStateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkVirtualGameStateMessage) == 80);

}
