#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BD1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223F678
   Address:          00000001430CAAA8
   Default Value:    0000000142845D70
*/
#pragma pack(push, 8)
struct UINetworkCoopPlayerMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(UINetworkCoopPlayerMessage) == 104);

}
