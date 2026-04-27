#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EDE
   TypeInfo Kind:    ClassInfo
   ClassId:          01E4
   VfTable:          0000000000000000
   Address (Base):   00000001430D1BB0
*/
class ServerRagdollComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0230];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0260 */

static_assert(sizeof(ServerRagdollComponent) == 608);

}
