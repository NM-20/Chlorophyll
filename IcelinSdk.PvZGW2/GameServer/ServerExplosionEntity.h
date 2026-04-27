#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C8E
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0291
   VfTable:          0000000000000000
   Address (Base):   0000000143120290
*/
class ServerExplosionEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0160];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */

static_assert(sizeof(ServerExplosionEntity) == 384);

}
