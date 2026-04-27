#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2114
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142353B40
   Address:          00000001430C4C08
   Default Value:    00000001428634B0
*/
#pragma pack(push, 8)
struct PVZCommanderNetworkLeaveSeatMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZCommanderNetworkLeaveSeatMessage) == 80);

}
