#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameHealthComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EE0
   TypeInfo Kind:    ClassInfo
   ClassId:          0238
   VfTable:          0000000000000000
   Address (Base):   00000001430DD9C0
*/
class ServerExplosionPackHealthComponent : public ServerGameHealthComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerExplosionPackHealthComponent) == 48);

}
