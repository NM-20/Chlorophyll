#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849AE8
   RuntimeId:        0DE8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          116A
   VfTable:          000000014225F920
   Address (Base):   00000001430FD510
*/
#pragma pack(push, 8)
class MaterialRelationDynamicFireData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FireDamage; /* 0x0010 */
  FB_UINT32 CellDamageRadius; /* 0x0014 */
  FB_BOOLEAN CanSetFire; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MaterialRelationDynamicFireData) == 32);

}
