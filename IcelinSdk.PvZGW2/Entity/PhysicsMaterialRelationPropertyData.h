#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BC98
   RuntimeId:        0942
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          115C
   VfTable:          00000001422124A8
   Address (Base):   00000001430B74D0
*/
#pragma pack(push, 8)
class PhysicsMaterialRelationPropertyData : public MaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PhysicsMaterialRelationPropertyData) == 16);

}
