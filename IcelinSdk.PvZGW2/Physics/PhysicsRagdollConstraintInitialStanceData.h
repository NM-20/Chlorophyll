#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsConstraintInitialStanceData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851D90
   RuntimeId:        14FC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AF4
   VfTable:          000000014227EBA0
   Address (Base):   000000014310ED30
*/
#pragma pack(push, 16)
class PhysicsRagdollConstraintInitialStanceData : public PhysicsConstraintInitialStanceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PhysicsRagdollConstraintInitialStanceData) == 96);

}
