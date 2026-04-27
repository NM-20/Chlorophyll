#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerPartComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C6B
   TypeInfo Kind:    ClassInfo
   ClassId:          01C6
   VfTable:          0000000000000000
   Address (Base):   00000001430CDDC0
*/
class ServerChassisComponent : public ServerPartComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00C0[0x0140];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0200 */

static_assert(sizeof(ServerChassisComponent) == 512);

}
