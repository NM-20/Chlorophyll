#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CD6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252BA8
   Address:          00000001430C9A08
   Default Value:    00000001428479A0
*/
#pragma pack(push, 8)
struct ServerLevelSpawnEntitiesEndMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerLevelSpawnEntitiesEndMessage) == 48);

}
