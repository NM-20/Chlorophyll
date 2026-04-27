#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C23
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422455C0
   Address:          00000001430CA688
   Default Value:    0000000142846440
*/
#pragma pack(push, 8)
struct ServerPlayerCreatedForConnectionMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ServerPlayerCreatedForConnectionMessage) == 64);

}
