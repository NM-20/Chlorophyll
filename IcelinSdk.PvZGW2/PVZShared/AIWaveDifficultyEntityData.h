#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/WaveDifficultyOperation.h>

namespace fb
{

/* TypeInfo (Array): 00000001428734C8
   RuntimeId:        2BBC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AEC
   VfTable:          00000001423793C0
   Address (Base):   00000001430E1540
*/
#pragma pack(push, 8)
class AIWaveDifficultyEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AIWaveDifficulty) DefaultValue; /* 0x0018 */
  WaveDifficultyOperation Operation; /* 0x0020 */
  char pad_0024[0x0004];
  FB_HANDLE(class AIWaveDifficulty) ModifierValue; /* 0x0028 */
  FB_FLOAT32 GlobalResistance; /* 0x0030 */
  FB_FLOAT32 GlobalDamage; /* 0x0034 */
  FB_FLOAT32 GlobalHealth; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(AIWaveDifficultyEntityData) == 64);

}
