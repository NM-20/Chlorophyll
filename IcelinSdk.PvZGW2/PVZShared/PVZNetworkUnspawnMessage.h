#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2377
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423502C8
   Address:          00000001430C44E8
   Default Value:    00000001428662A0
*/
#pragma pack(push, 8)
struct PVZNetworkUnspawnMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkUnspawnMessage) == 72);

}
