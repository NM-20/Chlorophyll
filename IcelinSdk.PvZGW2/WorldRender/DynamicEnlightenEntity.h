#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        18F6
   TypeInfo Kind:    EntityClassInfo
   ClassId:          028D
   VfTable:          0000000000000000
   Address (Base):   0000000143138350
*/
class DynamicEnlightenEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(DynamicEnlightenEntity) == 144);

}
