#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864538
   RuntimeId:        21ED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C04
   VfTable:          0000000142352628
   Address (Base):   00000001430E75A0
*/
#pragma pack(push, 8)
class PVZCharacterAreaTeleportEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterAreaTeleportEntityData) == 24);

}
