#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BC9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223F7B8
   Address:          00000001430CAB88
   Default Value:    0000000142845AD0
*/
#pragma pack(push, 8)
struct UINetworkRollCreditsMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UINetworkRollCreditsMessage) == 72);

}
