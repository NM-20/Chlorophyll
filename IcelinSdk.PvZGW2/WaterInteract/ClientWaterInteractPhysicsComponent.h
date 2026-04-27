#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2E1E
   TypeInfo Kind:    ClassInfo
   ClassId:          0219
   VfTable:          0000000000000000
   Address (Base):   00000001430CED20
*/
class ClientWaterInteractPhysicsComponent : public PhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(ClientWaterInteractPhysicsComponent) == 144);

}
