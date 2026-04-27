#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CD5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252B78
   Address:          00000001430C9A28
   Default Value:    0000000142847970
*/
#pragma pack(push, 8)
struct ServerLevelSpawnEntitiesBeginMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerLevelSpawnEntitiesBeginMessage) == 48);

}
