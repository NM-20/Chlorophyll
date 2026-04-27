#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2379
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142350278
   Address:          00000001430C44A8
   Default Value:    00000001428663B0
*/
#pragma pack(push, 8)
struct PVZNetworkAwardGainedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkAwardGainedMessage) == 112);

}
