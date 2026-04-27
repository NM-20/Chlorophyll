#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerSpawnEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CF8
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02A9
   VfTable:          0000000000000000
   Address (Base):   00000001430BE6D0
*/
class ServerCharacterSpawnEntity : public ServerSpawnEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_02A8[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02F8 */

static_assert(sizeof(ServerCharacterSpawnEntity) == 760);

}
