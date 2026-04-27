#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2376
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423503B8
   Address:          00000001430C4508
   Default Value:    0000000142866240
*/
#pragma pack(push, 8)
struct PVZNetworkRespawnMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkRespawnMessage) == 72);

}
