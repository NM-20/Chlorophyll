#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428732F8
   RuntimeId:        2BA2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0763
   VfTable:          0000000142379408
   Address (Base):   0000000143104A10
*/
#pragma pack(push, 8)
class WaveSubGroup : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct WaveSpawnTypeSet) WaveSpawnTypeSet; /* 0x0018 */
  FB_FLOAT32 SpawnChance; /* 0x0020 */
  FB_FLOAT32 MinSpawnDistanceFromBase; /* 0x0024 */
  FB_FLOAT32 MaxSpawnDistanceFromBase; /* 0x0028 */
  FB_FLOAT32 MinDistanceFromPlayer; /* 0x002C */
  FB_UINT32 NumMainSpawnPoints; /* 0x0030 */
  FB_UINT32 MaxSpawnCount; /* 0x0034 */
  FB_FLOAT32 SpawnPoolSize; /* 0x0038 */
  FB_FLOAT32 CompletePercentage; /* 0x003C */
  FB_FLOAT32 ActivationDelay; /* 0x0040 */
  char pad_0044[0x0004];
  FB_STDARRAY(struct TombstoneInfo) TombstoneInfos; /* 0x0048 */
  FB_STDARRAY(struct RewardInfo) RewardInfos; /* 0x0050 */
  FB_FLOAT32 TombstoneSpawnAtPercent; /* 0x0058 */
  FB_BOOLEAN DoRollOnce; /* 0x005C */
  FB_BOOLEAN SearchVaseOnly; /* 0x005D */
  FB_BOOLEAN SearchTransmitterOnly; /* 0x005E */
  char pad_005F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(WaveSubGroup) == 96);

}
