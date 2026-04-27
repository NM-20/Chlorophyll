#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865EE8
   RuntimeId:        2361
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1168
   VfTable:          00000001423509E0
   Address (Base):   0000000143107DD0
*/
#pragma pack(push, 8)
class MaterialPropertyPVZRoadieSprintData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) RoadieSprintEffect; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MaterialPropertyPVZRoadieSprintData) == 24);

}
