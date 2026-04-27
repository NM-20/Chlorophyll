#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873348
   RuntimeId:        2BA6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0FE8
   Default Value:    00000001428729D8
*/
#pragma pack(push, 8)
struct DestructibleSpawnType
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class AISpawnData) SpawnData; /* 0x0000 */
  FB_FLOAT32 SubgroupCompletionWeight; /* 0x0008 */
  FB_INT32 SpawnCount; /* 0x000C */
  FB_BOOLEAN RefillPoolOnEmpty; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DestructibleSpawnType) == 24);

}
