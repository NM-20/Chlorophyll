#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PartPhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C76
   TypeInfo Kind:    ClassInfo
   ClassId:          022B
   VfTable:          0000000000000000
   Address (Base):   00000001430BF310
*/
class ClientMissilePhysicsComponent : public PartPhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00A8[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C8 */

static_assert(sizeof(ClientMissilePhysicsComponent) == 200);

}
