#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BC7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223F8F8
   Address:          00000001430CABC8
   Default Value:    00000001428459B0
*/
#pragma pack(push, 8)
struct UINetworkOwnPlayerKilledMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x00A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(UINetworkOwnPlayerKilledMessage) == 160);

}
