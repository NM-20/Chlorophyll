#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>
#include <IcelinSdk.PvZGW2/GameShared/Difficulty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873418
   RuntimeId:        2BB2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          074B
   VfTable:          0000000142379360
   Address (Base):   00000001431048F0
*/
#pragma pack(push, 8)
class RewardDestructibleSpawnData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct RewardSpawnType) SpawnTypes; /* 0x0018 */
  FB_FLOAT32 SpawnerWeight; /* 0x0020 */
  FB_FLOAT32 SpawnCost; /* 0x0024 */
  Difficulty DifficultyInclusionLevel; /* 0x0028 */
  char pad_002C[0x0004];
  FB_HANDLE(class AIDestructibleSpawnData) FailTombstoneData; /* 0x0030 */
  FB_BOOLEAN WaitForSpawnerCreation; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(RewardDestructibleSpawnData) == 64);

}
