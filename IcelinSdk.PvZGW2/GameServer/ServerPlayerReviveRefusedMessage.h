#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C2D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422454E0
   Address:          00000001430CA548
   Default Value:    00000001428439C8
*/
#pragma pack(push, 8)
struct ServerPlayerReviveRefusedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerPlayerReviveRefusedMessage) == 56);

}
