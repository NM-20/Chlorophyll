#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EDD
   TypeInfo Kind:    ClassInfo
   ClassId:          01EC
   VfTable:          0000000000000000
   Address (Base):   00000001430B6390
*/
class ServerPVZCharacterWeaponsComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0D50];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0D80 */

static_assert(sizeof(ServerPVZCharacterWeaponsComponent) == 3456);

}
