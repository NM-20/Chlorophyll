#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851948
   RuntimeId:        14B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1160
   VfTable:          000000014227F2E0
   Address (Base):   00000001430DB750
*/
#pragma pack(push, 8)
class MaterialPropertyPhysicsData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DynamicFriction; /* 0x0010 */
  FB_FLOAT32 StaticFriction; /* 0x0014 */
  FB_FLOAT32 Restitution; /* 0x0018 */
  FB_FLOAT32 DynamicFrictionModifier; /* 0x001C */
  FB_FLOAT32 StaticFrictionModifier; /* 0x0020 */
  FB_FLOAT32 RestitutionModifier; /* 0x0024 */
  FB_FLOAT32 Resistance; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MaterialPropertyPhysicsData) == 48);

}
