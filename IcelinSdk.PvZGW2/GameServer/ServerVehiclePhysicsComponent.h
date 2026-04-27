#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PartPhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C8A
   TypeInfo Kind:    ClassInfo
   ClassId:          0225
   VfTable:          0000000000000000
   Address (Base):   00000001430BEAE0
*/
class ServerVehiclePhysicsComponent : public PartPhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00A8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */

static_assert(sizeof(ServerVehiclePhysicsComponent) == 176);

}
