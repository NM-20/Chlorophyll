#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EFA
   TypeInfo Kind:    ClassInfo
   ClassId:          01E6
   VfTable:          0000000000000000
   Address (Base):   00000001430DD6A0
*/
class ServerBuffRadiatorComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ServerBuffRadiatorComponent) == 72);

}
