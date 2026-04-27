#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BB2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223FDF8
   Address:          00000001430CAE48
   Default Value:    0000000142BA07E0
*/
#pragma pack(push, 8)
struct UINetworkPlayVideoMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0108];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0108 */
#pragma pack(pop)

static_assert(sizeof(UINetworkPlayVideoMessage) == 264);

}
