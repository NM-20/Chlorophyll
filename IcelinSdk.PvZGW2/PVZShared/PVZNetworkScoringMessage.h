#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23D9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234EBD8
   Address:          00000001430C39C8
   Default Value:    0000000142868360
*/
#pragma pack(push, 8)
struct PVZNetworkScoringMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkScoringMessage) == 144);

}
