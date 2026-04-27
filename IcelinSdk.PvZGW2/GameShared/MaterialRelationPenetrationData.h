#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsPropertyRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849B68
   RuntimeId:        0DF0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          115B
   VfTable:          000000014225F8B0
   Address (Base):   00000001430DC5F0
*/
#pragma pack(push, 8)
class MaterialRelationPenetrationData : public PhysicsPropertyRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN NeverPenetrate; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MaterialRelationPenetrationData) == 24);

}
