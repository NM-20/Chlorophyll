#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ED3
   TypeInfo Kind:    ClassInfo
   ClassId:          01F5
   VfTable:          0000000000000000
   Address (Base):   00000001430D1C50
*/
class ServerBoneCollisionComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x00E8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0118 */

static_assert(sizeof(ServerBoneCollisionComponent) == 280);

}
