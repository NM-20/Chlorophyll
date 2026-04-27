#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientExplosionEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CB7
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0451
   VfTable:          0000000000000000
   Address (Base):   000000014312F890
*/
class ClientPVZExplosionEntity : public ClientExplosionEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_C060[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0xC070 */

static_assert(sizeof(ClientPVZExplosionEntity) == 49264);

}
