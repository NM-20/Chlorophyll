#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AISpawnNodeBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873508
   RuntimeId:        2BC0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EA1
   VfTable:          0000000142379370
   Address (Base):   00000001430D8750
*/
#pragma pack(push, 8)
class BasicSubGroup : public AISpawnNodeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct WaveSpawnTypeSet) WaveSpawnTypeSet; /* 0x0018 */
  FB_FLOAT32 SpawnChance; /* 0x0020 */
  FB_FLOAT32 MinSpawnDistanceFromBase; /* 0x0024 */
  FB_FLOAT32 MaxSpawnDistanceFromBase; /* 0x0028 */
  FB_FLOAT32 MinDistanceFromPlayer; /* 0x002C */
  FB_FLOAT32 MaxDistanceFromPlayer; /* 0x0030 */
  char pad_0034[0x0004];
  FB_STDARRAY(FB_UINT32) NumMainSpawnPoints; /* 0x0038 */
  FB_STDARRAY(FB_INT32) MaxTotalCount; /* 0x0040 */
  FB_STDARRAY(FB_INT32) MaxHordeCount; /* 0x0048 */
  FB_STDARRAY(FB_UINT32) MaxHeroCount; /* 0x0050 */
  FB_STDARRAY(FB_UINT32) MaxBossCount; /* 0x0058 */
  FB_STDARRAY(FB_FLOAT32) SpawnPoolSize; /* 0x0060 */
  FB_INT32 UseSpecificSpawnID; /* 0x0068 */
  FB_BOOLEAN DoRollOnce; /* 0x006C */
  FB_BOOLEAN CheckPlayerZeroOnly; /* 0x006D */
  char pad_006E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(BasicSubGroup) == 112);

}
