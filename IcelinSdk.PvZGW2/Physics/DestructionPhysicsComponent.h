#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1530
   TypeInfo Kind:    ClassInfo
   ClassId:          0220
   VfTable:          0000000000000000
   Address (Base):   0000000143121920
*/
class DestructionPhysicsComponent : public PhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(DestructionPhysicsComponent) == 208);

}
