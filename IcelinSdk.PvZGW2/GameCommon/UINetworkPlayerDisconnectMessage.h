#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BB0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223FEE8
   Address:          00000001430CAE88
   Default Value:    00000001428440D0
*/
#pragma pack(push, 8)
struct UINetworkPlayerDisconnectMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UINetworkPlayerDisconnectMessage) == 88);

}
