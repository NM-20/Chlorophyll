#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C60
   TypeInfo Kind:    ClassInfo
   ClassId:          01C9
   VfTable:          0000000000000000
   Address (Base):   00000001430DE730
*/
class ServerDriverStaticObjectComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x02B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02E0 */

static_assert(sizeof(ServerDriverStaticObjectComponent) == 736);

}
