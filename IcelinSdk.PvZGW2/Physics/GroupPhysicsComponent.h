#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1520
   TypeInfo Kind:    ClassInfo
   ClassId:          0231
   VfTable:          0000000000000000
   Address (Base):   0000000143101CD0
*/
class GroupPhysicsComponent : public PhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */

static_assert(sizeof(GroupPhysicsComponent) == 160);

}
