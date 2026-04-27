#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PartPhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EE1
   TypeInfo Kind:    ClassInfo
   ClassId:          0226
   VfTable:          0000000000000000
   Address (Base):   00000001430CEE60
*/
class ServerExplosionPackPhysicsComponent : public PartPhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00A8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */

static_assert(sizeof(ServerExplosionPackPhysicsComponent) == 176);

}
