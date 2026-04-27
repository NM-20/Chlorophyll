#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CC5
   TypeInfo Kind:    ClassInfo
   ClassId:          017E
   VfTable:          0000000000000000
   Address (Base):   00000001430DDD30
*/
class ClientPVZCharacterWeaponSwitchingComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */

static_assert(sizeof(ClientPVZCharacterWeaponSwitchingComponent) == 136);

}
