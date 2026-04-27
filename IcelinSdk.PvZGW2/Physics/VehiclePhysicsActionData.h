#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsActionData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851038
   RuntimeId:        1430
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C7D
   VfTable:          000000014227F710
   Address (Base):   00000001430DB870
*/
#pragma pack(push, 8)
class VehiclePhysicsActionData : public PhysicsActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VehiclePhysicsActionData) == 24);

}
