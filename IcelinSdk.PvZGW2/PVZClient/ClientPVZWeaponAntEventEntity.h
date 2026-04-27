#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientAntEventEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BC4
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03CF
   VfTable:          0000000000000000
   Address (Base):   00000001431364B0
*/
class ClientPVZWeaponAntEventEntity : public ClientAntEventEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C8 */

static_assert(sizeof(ClientPVZWeaponAntEventEntity) == 200);

}
