#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849BA8
   RuntimeId:        0DF4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1162
   VfTable:          000000014225F8C0
   Address (Base):   00000001430DC410
*/
#pragma pack(push, 8)
class MaterialPropertyFireData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN IsBurnable; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MaterialPropertyFireData) == 24);

}
