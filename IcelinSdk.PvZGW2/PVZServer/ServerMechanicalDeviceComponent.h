#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EEF
   TypeInfo Kind:    ClassInfo
   ClassId:          01E9
   VfTable:          0000000000000000
   Address (Base):   00000001430CEDC0
*/
class ServerMechanicalDeviceComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerMechanicalDeviceComponent) == 48);

}
