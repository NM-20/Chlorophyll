#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851A48
   RuntimeId:        14C8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D04
   VfTable:          000000014227F138
   Address (Base):   00000001430FBAD0
*/
#pragma pack(push, 16)
class PartPhysicsComponentData : public PhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PartPhysicsComponentData) == 144);

}
