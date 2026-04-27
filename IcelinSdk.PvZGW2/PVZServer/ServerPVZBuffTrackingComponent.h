#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EF0
   TypeInfo Kind:    ClassInfo
   ClassId:          01DA
   VfTable:          0000000000000000
   Address (Base):   00000001430DD7E0
*/
class ServerPVZBuffTrackingComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */

static_assert(sizeof(ServerPVZBuffTrackingComponent) == 88);

}
