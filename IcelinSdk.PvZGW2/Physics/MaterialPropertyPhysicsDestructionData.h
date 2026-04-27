#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851968
   RuntimeId:        14BA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          115E
   VfTable:          000000014227F298
   Address (Base):   000000014310EEB0
*/
#pragma pack(push, 8)
class MaterialPropertyPhysicsDestructionData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Density; /* 0x0010 */
  FB_FLOAT32 DestructionRadius; /* 0x0014 */
  FB_FLOAT32 Elasticity; /* 0x0018 */
  FB_FLOAT32 BreakingStrength; /* 0x001C */
  FB_FLOAT32 YieldStrength; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MaterialPropertyPhysicsDestructionData) == 40);

}
