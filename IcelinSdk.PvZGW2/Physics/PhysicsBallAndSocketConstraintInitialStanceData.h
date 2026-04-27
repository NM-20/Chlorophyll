#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsConstraintInitialStanceData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851D50
   RuntimeId:        14F8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AF2
   VfTable:          000000014227EC30
   Address (Base):   000000014310EDF0
*/
#pragma pack(push, 16)
class PhysicsBallAndSocketConstraintInitialStanceData : public PhysicsConstraintInitialStanceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PhysicsBallAndSocketConstraintInitialStanceData) == 96);

}
