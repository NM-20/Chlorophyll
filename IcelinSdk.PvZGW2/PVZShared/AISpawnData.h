#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>
#include <IcelinSdk.PvZGW2/PVZShared/DynamicDifficultyModifiers.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868E30
   RuntimeId:        2435
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0765
   VfTable:          00000001423560D0
   Address (Base):   0000000143107B90
*/
#pragma pack(push, 8)
class AISpawnData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId Team; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class PVZCharacterBlueprint) Blueprint; /* 0x0020 */
  FB_HANDLE(class PVZCharacterSpawnTemplateData) Template; /* 0x0028 */
  DynamicDifficultyModifiers Modifiers; /* 0x0030 */
  FB_FLOAT32 OverrideMaxHealth; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(AISpawnData) == 64);

}
