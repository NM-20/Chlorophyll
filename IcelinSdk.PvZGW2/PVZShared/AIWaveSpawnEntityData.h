#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873688
   RuntimeId:        2BD8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C0F
   VfTable:          0000000142379268
   Address (Base):   00000001430E14E0
*/
#pragma pack(push, 8)
class AIWaveSpawnEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AISpawnerTreeBase) SpawnTree; /* 0x0018 */
  FB_HANDLE(class AIWaveDifficulty) WaveDifficulty; /* 0x0020 */
  FB_INT32 PlayerCount; /* 0x0028 */
  FB_INT32 WaveNumber; /* 0x002C */
  FB_INT32 TeamIDOverride; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AIWaveSpawnEntityData) == 56);

}
