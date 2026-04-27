#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EBE
   TypeInfo Kind:    ClassInfo
   ClassId:          01CB
   VfTable:          0000000000000000
   Address (Base):   00000001430DDB50
*/
class ServerWeaponInputRouterComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ServerWeaponInputRouterComponent) == 104);

}
