#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F61
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0484
   VfTable:          0000000000000000
   Address (Base):   000000014312B470
*/
class ServerPVZStatQueryEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ServerPVZStatQueryEntity) == 72);

}
