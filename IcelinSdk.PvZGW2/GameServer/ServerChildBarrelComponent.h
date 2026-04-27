#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerChildComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C6C
   TypeInfo Kind:    ClassInfo
   ClassId:          01B9
   VfTable:          0000000000000000
   Address (Base):   00000001430D2740
*/
class ServerChildBarrelComponent : public ServerChildComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */

static_assert(sizeof(ServerChildBarrelComponent) == 320);

}
