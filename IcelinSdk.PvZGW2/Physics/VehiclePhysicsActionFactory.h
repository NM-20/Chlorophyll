#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/IglooEntityFactory.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1548
   TypeInfo Kind:    ClassInfo
   ClassId:          00C4
   VfTable:          0000000000000000
   Address (Base):   000000014310EBB0
*/
#pragma pack(push, 8)
class VehiclePhysicsActionFactory : public IglooEntityFactory
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VehiclePhysicsActionFactory) == 40);

}
