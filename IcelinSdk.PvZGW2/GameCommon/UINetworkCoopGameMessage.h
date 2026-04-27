#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BCE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223F628
   Address:          00000001430CAAE8
   Default Value:    0000000142845CC0
*/
#pragma pack(push, 8)
struct UINetworkCoopGameMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UINetworkCoopGameMessage) == 88);

}
