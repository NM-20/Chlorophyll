#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BC8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223F808
   Address:          00000001430CABA8
   Default Value:    0000000142845A50
*/
#pragma pack(push, 8)
struct UINetworkKilledOtherPlayerMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(UINetworkKilledOtherPlayerMessage) == 128);

}
