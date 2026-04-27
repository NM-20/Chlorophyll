#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerControllableEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C8C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          02E4
   VfTable:          0000000000000000
   Address (Base):   00000001430B5000
*/
class ServerVehicleEntity : public ServerControllableEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_01F0[0x03B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x05A0 */

static_assert(sizeof(ServerVehicleEntity) == 1440);

}
