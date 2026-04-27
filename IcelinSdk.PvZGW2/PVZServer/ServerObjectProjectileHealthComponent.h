#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameHealthComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EE2
   TypeInfo Kind:    ClassInfo
   ClassId:          0237
   VfTable:          0000000000000000
   Address (Base):   00000001430DD970
*/
class ServerObjectProjectileHealthComponent : public ServerGameHealthComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerObjectProjectileHealthComponent) == 48);

}
