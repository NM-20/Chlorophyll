#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/GroupPhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A43
   TypeInfo Kind:    ClassInfo
   ClassId:          0233
   VfTable:          0000000000000000
   Address (Base):   00000001430BD3D0
*/
class ClientStaticModelGroupPhysicsComponent : public GroupPhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00A0[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C8 */

static_assert(sizeof(ClientStaticModelGroupPhysicsComponent) == 200);

}
