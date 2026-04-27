#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1525
   TypeInfo Kind:    ClassInfo
   ClassId:          0224
   VfTable:          0000000000000000
   Address (Base):   00000001430BCB00
*/
class PartPhysicsComponent : public PhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */

static_assert(sizeof(PartPhysicsComponent) == 168);

}
