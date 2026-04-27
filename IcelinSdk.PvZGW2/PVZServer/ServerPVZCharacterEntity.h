#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerCharacterEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ED2
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02E3
   VfTable:          0000000000000000
   Address (Base):   00000001430B5380
*/
class ServerPVZCharacterEntity : public ServerCharacterEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0480[0x0880];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0D00 */

static_assert(sizeof(ServerPVZCharacterEntity) == 3328);

}
