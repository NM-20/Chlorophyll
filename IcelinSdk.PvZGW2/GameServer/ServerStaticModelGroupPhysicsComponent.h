#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/GroupPhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D05
   TypeInfo Kind:    ClassInfo
   ClassId:          0232
   VfTable:          0000000000000000
   Address (Base):   00000001430BCBA0
*/
class ServerStaticModelGroupPhysicsComponent : public GroupPhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00A0[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */

static_assert(sizeof(ServerStaticModelGroupPhysicsComponent) == 168);

}
