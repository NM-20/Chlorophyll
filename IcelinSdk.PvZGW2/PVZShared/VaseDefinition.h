#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864C38
   RuntimeId:        2240
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07C1
   VfTable:          0000000142351F18
   Address (Base):   0000000143108190
*/
#pragma pack(push, 8)
class VaseDefinition : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct VaseAISpawnData) AIdata; /* 0x0018 */
  FB_STDARRAY(struct VaseRewardSpawnData) RewardData; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VaseDefinition) == 40);

}
