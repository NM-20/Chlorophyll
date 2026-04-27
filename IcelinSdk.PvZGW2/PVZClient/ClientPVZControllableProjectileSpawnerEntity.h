#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B92
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0393
   VfTable:          0000000000000000
   Address (Base):   00000001431376D0
*/
class ClientPVZControllableProjectileSpawnerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ClientPVZControllableProjectileSpawnerEntity) == 48);

}
