#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F72
   TypeInfo Kind:    ClassInfo
   ClassId:          01DE
   VfTable:          0000000000000000
   Address (Base):   00000001430DD560
*/
class ServerPVZCharacterWeaponSwitchingComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(ServerPVZCharacterWeaponSwitchingComponent) == 128);

}
