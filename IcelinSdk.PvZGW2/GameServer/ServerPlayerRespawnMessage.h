#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C25
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245560
   Address:          00000001430CA648
   Default Value:    00000001428435B8
*/
#pragma pack(push, 8)
struct ServerPlayerRespawnMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerPlayerRespawnMessage) == 56);

}
