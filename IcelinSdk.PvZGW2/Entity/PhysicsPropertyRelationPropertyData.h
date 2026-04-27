#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BCB8
   RuntimeId:        0944
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1156
   VfTable:          0000000142212470
   Address (Base):   00000001430D0EC0
*/
#pragma pack(push, 8)
class PhysicsPropertyRelationPropertyData : public MaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PhysicsPropertyRelationPropertyData) == 16);

}
