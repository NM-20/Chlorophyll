#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BDF
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04BA
   VfTable:          0000000000000000
   Address (Base):   000000014313B370
*/
class PhysicsDrivenAnimationEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x08B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x08D0 */

static_assert(sizeof(PhysicsDrivenAnimationEntity) == 2256);

}
