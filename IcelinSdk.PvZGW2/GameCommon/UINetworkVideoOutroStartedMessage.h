#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BB9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223FBC8
   Address:          00000001430CAD68
   Default Value:    00000001428453F0
*/
#pragma pack(push, 8)
struct UINetworkVideoOutroStartedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UINetworkVideoOutroStartedMessage) == 80);

}
