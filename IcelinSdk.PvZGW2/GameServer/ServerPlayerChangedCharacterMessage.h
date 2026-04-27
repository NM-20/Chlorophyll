#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C2E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245510
   Address:          00000001430CA528
   Default Value:    00000001428465B0
*/
#pragma pack(push, 8)
struct ServerPlayerChangedCharacterMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ServerPlayerChangedCharacterMessage) == 80);

}
