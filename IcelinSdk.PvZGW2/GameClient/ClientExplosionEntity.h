#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A4C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0450
   VfTable:          0000000000000000
   Address (Base):   00000001431243A0
*/
class ClientExplosionEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0xC040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0xC060 */

static_assert(sizeof(ClientExplosionEntity) == 49248);

}
