#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BFD
   TypeInfo Kind:    ClassInfo
   ClassId:          0218
   VfTable:          0000000000000000
   Address (Base):   00000001430CF540
*/
class ServerWaterPhysicsComponent : public PhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ServerWaterPhysicsComponent) == 104);

}
