#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F83
   TypeInfo Kind:    ClassInfo
   ClassId:          01CE
   VfTable:          0000000000000000
   Address (Base):   00000001430DD240
*/
class ServerTrapezoidDamageComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x14A8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x14D8 */

static_assert(sizeof(ServerTrapezoidDamageComponent) == 5336);

}
