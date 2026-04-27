#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientCharacterSpawnEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C00
   TypeInfo Kind:    EntityClassInfo
   ClassId:          030A
   VfTable:          0000000000000000
   Address (Base):   00000001431358D0
*/
class ClientPVZCharacterSpawnEntity : public ClientCharacterSpawnEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0170 */

static_assert(sizeof(ClientPVZCharacterSpawnEntity) == 368);

}
