#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849C48
   RuntimeId:        0DFE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C0C
   VfTable:          000000014225F7D0
   Address (Base):   00000001430D79F0
*/
#pragma pack(push, 8)
class CharacterInVehicleScenarioEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  AntRef ScenarioAntRef; /* 0x001C */
  FB_INT32 LevelId; /* 0x0030 */
  FB_INT32 ScenarioId; /* 0x0034 */
  FB_INT32 ActorId; /* 0x0038 */
  FB_INT32 PartId; /* 0x003C */
  FB_BOOLEAN Enabled; /* 0x0040 */
  char pad_0041[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(CharacterInVehicleScenarioEntityData) == 72);

}
