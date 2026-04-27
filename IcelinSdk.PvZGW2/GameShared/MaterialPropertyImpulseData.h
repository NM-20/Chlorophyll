#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsPropertyRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849AA8
   RuntimeId:        0DE4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1159
   VfTable:          000000014225F910
   Address (Base):   00000001430DC350
*/
#pragma pack(push, 8)
class MaterialPropertyImpulseData : public PhysicsPropertyRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ImpulseAbsorptionMultiplier; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MaterialPropertyImpulseData) == 24);

}
