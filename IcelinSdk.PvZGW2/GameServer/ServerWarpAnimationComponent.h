#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C5B
   TypeInfo Kind:    ClassInfo
   ClassId:          01E8
   VfTable:          0000000000000000
   Address (Base):   00000001430DE7D0
*/
class ServerWarpAnimationComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0250];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0280 */

static_assert(sizeof(ServerWarpAnimationComponent) == 640);

}
