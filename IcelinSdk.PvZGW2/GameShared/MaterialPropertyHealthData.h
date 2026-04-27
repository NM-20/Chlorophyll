#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsPropertyRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849A88
   RuntimeId:        0DE2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1157
   VfTable:          000000014225F950
   Address (Base):   00000001430C00D0
*/
#pragma pack(push, 8)
class MaterialPropertyHealthData : public PhysicsPropertyRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Health; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MaterialPropertyHealthData) == 24);

}
