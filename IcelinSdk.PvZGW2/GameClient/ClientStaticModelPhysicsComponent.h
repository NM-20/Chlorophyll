#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PartPhysicsComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A45
   TypeInfo Kind:    ClassInfo
   ClassId:          0228
   VfTable:          0000000000000000
   Address (Base):   00000001430BEC70
*/
class ClientStaticModelPhysicsComponent : public PartPhysicsComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00A8[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(ClientStaticModelPhysicsComponent) == 208);

}
