#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873258
   RuntimeId:        2B98
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AE1
   VfTable:          0000000142379430
   Address (Base):   00000001430E1600
*/
#pragma pack(push, 8)
class AISpawnControlEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AICharacterSetUnlockAsset) AICharacterSets; /* 0x0018 */
  FB_UINT32 MaxBotsPerTeam; /* 0x0020 */
  FB_UINT32 SelectedAICharacterSetZombiesUnlockId; /* 0x0024 */
  FB_UINT32 SelectedAICharacterSetPlantsUnlockId; /* 0x0028 */
  FB_BOOLEAN Enabled; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(AISpawnControlEntityData) == 48);

}
