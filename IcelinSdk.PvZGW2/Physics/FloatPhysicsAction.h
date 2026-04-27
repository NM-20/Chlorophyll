#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsAction.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1538
   TypeInfo Kind:    EntityClassInfo
   ClassId:          037F
   VfTable:          0000000000000000
   Address (Base):   0000000143123F40
*/
class FloatPhysicsAction : public PhysicsAction
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0040[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(FloatPhysicsAction) == 72);

}
