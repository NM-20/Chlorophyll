#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerCharacterSpawnEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EBB
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02AA
   VfTable:          0000000000000000
   Address (Base):   00000001430D81D0
*/
class ServerPVZCharacterSpawnEntity : public ServerCharacterSpawnEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_02F8[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0308 */

static_assert(sizeof(ServerPVZCharacterSpawnEntity) == 776);

}
