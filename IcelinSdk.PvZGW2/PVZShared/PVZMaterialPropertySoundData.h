#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428745C8
   RuntimeId:        2C66
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1169
   VfTable:          00000001423787B8
   Address (Base):   00000001430F4F90
*/
#pragma pack(push, 8)
class PVZMaterialPropertySoundData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ReflectionCoefficient; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZMaterialPropertySoundData) == 24);

}
