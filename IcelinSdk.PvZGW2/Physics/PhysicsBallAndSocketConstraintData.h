#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsConstraintData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851CD0
   RuntimeId:        14F0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C5D
   VfTable:          000000014227ECA0
   Address (Base):   00000001430DB570
*/
#pragma pack(push, 16)
class PhysicsBallAndSocketConstraintData : public PhysicsConstraintData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PhysicsBallAndSocketConstraintData) == 128);

}
