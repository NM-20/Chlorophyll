#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        07A5
   TypeInfo Kind:    EntityClassInfo
   ClassId:          056B
   VfTable:          0000000000000000
   Address (Base):   000000014313F010
*/
class IntegratorOrDifferentiatorEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(IntegratorOrDifferentiatorEntity) == 120);

}
