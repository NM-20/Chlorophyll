#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EF8
   TypeInfo Kind:    ClassInfo
   ClassId:          01F4
   VfTable:          0000000000000000
   Address (Base):   00000001430B5EB0
*/
class ServerBuffComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x1760];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1790 */

static_assert(sizeof(ServerBuffComponent) == 6032);

}
