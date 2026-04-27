#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponentEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CA6
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02D9
   VfTable:          0000000000000000
   Address (Base):   00000001431300B0
*/
class ClientPVZCommanderEntity : public ClientGameComponentEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0060[0x05A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0600 */

static_assert(sizeof(ClientPVZCommanderEntity) == 1536);

}
