#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>
#include <IcelinSdk.PvZGW2/PVZShared/SpawnClass.h>
#include <IcelinSdk.PvZGW2/PVZShared/TargetCharacterIconType.h>
#include <IcelinSdk.PvZGW2/GameShared/Difficulty.h>

namespace fb
{

/* TypeInfo (Array): 00000001428732B8
   RuntimeId:        2B9E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          074F
   VfTable:          00000001423793F8
   Address (Base):   0000000143104A70
*/
#pragma pack(push, 8)
class WaveSpawnType : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AISpawnData) SpawnDatas; /* 0x0018 */
  FB_FLOAT32 SubgroupCompletionWeight; /* 0x0020 */
  FB_INT32 Count; /* 0x0024 */
  FB_FLOAT32 SpawnChanceWeight; /* 0x0028 */
  FB_FLOAT32 SpawnCost; /* 0x002C */
  FB_FLOAT32 OverrideMaxHealth; /* 0x0030 */
  SpawnClass SpawnClass; /* 0x0034 */
  FB_FLOAT32 InitialSpawnDelay; /* 0x0038 */
  FB_FLOAT32 SpawnDelay; /* 0x003C */
  FB_CSTRING BossID; /* 0x0040 */
  TargetCharacterIconType TrackedPlayerIconType; /* 0x0048 */
  Difficulty DifficultInclusionLevel; /* 0x004C */
  FB_BOOLEAN IsBoss; /* 0x0050 */
  FB_BOOLEAN IsTrackedPlayer; /* 0x0051 */
  char pad_0052[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(WaveSpawnType) == 88);

}
