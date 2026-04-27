#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsPropertyRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849B28
   RuntimeId:        0DEC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1158
   VfTable:          000000014225F900
   Address (Base):   00000001430DC2F0
*/
#pragma pack(push, 8)
class MaterialRelationTerrainDestructionData : public PhysicsPropertyRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TerrainDynamicDecalTemplateData) DynamicDecalTemplate; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MaterialRelationTerrainDestructionData) == 24);

}
