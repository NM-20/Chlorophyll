#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        077B
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03CD
   VfTable:          0000000000000000
   Address (Base):   0000000143140A50
*/
class ObjectVariationSwitchEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ObjectVariationSwitchEntity) == 64);

}
