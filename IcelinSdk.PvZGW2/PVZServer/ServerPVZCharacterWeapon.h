#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F6F
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02DD
   VfTable:          0000000000000000
   Address (Base):   00000001430CE1D0
*/
class ServerPVZCharacterWeapon : public ServerGameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x0118];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0178 */

static_assert(sizeof(ServerPVZCharacterWeapon) == 376);

}
