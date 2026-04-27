#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientSpawnEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B03
   TypeInfo Kind:    EntityClassInfo
   ClassId:          030B
   VfTable:          0000000000000000
   Address (Base):   0000000143122E60
*/
class ClientVehicleSpawnEntity : public ClientSpawnEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0160 */

static_assert(sizeof(ClientVehicleSpawnEntity) == 352);

}
