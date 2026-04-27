#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C30
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422454B0
   Address:          00000001430CA4E8
   Default Value:    0000000142846680
*/
#pragma pack(push, 8)
struct ServerPlayerKitPickedupMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ServerPlayerKitPickedupMessage) == 64);

}
