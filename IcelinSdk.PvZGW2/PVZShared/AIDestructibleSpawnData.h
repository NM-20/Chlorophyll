#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>
#include <IcelinSdk.PvZGW2/GameShared/Difficulty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873368
   RuntimeId:        2BA8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          075A
   VfTable:          00000001423794A0
   Address (Base):   00000001431049B0
*/
#pragma pack(push, 8)
class AIDestructibleSpawnData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct DestructibleSpawnType) SpawnTypes; /* 0x0018 */
  FB_UINT32 MaxSimultaneousAI; /* 0x0020 */
  FB_FLOAT32 TimeToLive; /* 0x0024 */
  FB_UINT32 DestroyAfterNumSpawns; /* 0x0028 */
  FB_FLOAT32 SpawnerWeight; /* 0x002C */
  FB_FLOAT32 SpawnCost; /* 0x0030 */
  FB_FLOAT32 RespawnDelay; /* 0x0034 */
  Difficulty DifficultyInclusionLevel; /* 0x0038 */
  FB_BOOLEAN SpawnMaxAtStart; /* 0x003C */
  FB_BOOLEAN WaitForSpawnerCreation; /* 0x003D */
  FB_BOOLEAN StaggerRespawns; /* 0x003E */
  char pad_003F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(AIDestructibleSpawnData) == 64);

}
