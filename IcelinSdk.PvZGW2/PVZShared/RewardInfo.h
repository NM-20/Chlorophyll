#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873438
   RuntimeId:        2BB4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0FA8
   Default Value:    0000000142873450
*/
#pragma pack(push, 8)
struct RewardInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class RewardDestructibleSpawnData) RewardData; /* 0x0000 */
  FB_FLOAT32 SpawnChance; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(RewardInfo) == 16);

}
