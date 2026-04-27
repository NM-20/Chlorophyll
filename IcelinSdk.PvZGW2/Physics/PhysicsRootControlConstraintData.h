#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsConstraintData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851D10
   RuntimeId:        14F4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C5F
   VfTable:          000000014227ED10
   Address (Base):   00000001430BFC50
*/
#pragma pack(push, 16)
class PhysicsRootControlConstraintData : public PhysicsConstraintData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PhysicsRootControlConstraintData) == 128);

}
