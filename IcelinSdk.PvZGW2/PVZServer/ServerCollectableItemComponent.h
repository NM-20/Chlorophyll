#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EEC
   TypeInfo Kind:    ClassInfo
   ClassId:          01CF
   VfTable:          0000000000000000
   Address (Base):   00000001430DD8D0
*/
class ServerCollectableItemComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */

static_assert(sizeof(ServerCollectableItemComponent) == 176);

}
