#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BC3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223F9E8
   Address:          00000001430CAC28
   Default Value:    0000000142845860
*/
#pragma pack(push, 8)
struct UINetworkEndOfRoundBonusMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(UINetworkEndOfRoundBonusMessage) == 104);

}
