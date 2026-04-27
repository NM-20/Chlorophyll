#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BC0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223FA88
   Address:          00000001430CAC88
   Default Value:    00000001428456F0
*/
#pragma pack(push, 8)
struct UINetworkHudScoringMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0098];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */
#pragma pack(pop)

static_assert(sizeof(UINetworkHudScoringMessage) == 152);

}
