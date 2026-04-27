#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873728
   RuntimeId:        2BE2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A28
   VfTable:          00000001423790E8
   Address (Base):   00000001430E19C0
*/
#pragma pack(push, 8)
class BaseWaveSpawnEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AISpawnBlueprints) Blueprints; /* 0x0018 */
  FB_BOOLEAN IsContinuousSpawn; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BaseWaveSpawnEntityData) == 40);

}
