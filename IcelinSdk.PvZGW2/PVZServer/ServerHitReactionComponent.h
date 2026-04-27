#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ED5
   TypeInfo Kind:    ClassInfo
   ClassId:          01F6
   VfTable:          0000000000000000
   Address (Base):   00000001430DDB00
*/
class ServerHitReactionComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x00F0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */

static_assert(sizeof(ServerHitReactionComponent) == 288);

}
