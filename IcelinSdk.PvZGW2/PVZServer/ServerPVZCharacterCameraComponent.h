#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1ED7
   TypeInfo Kind:    ClassInfo
   ClassId:          01D5
   VfTable:          0000000000000000
   Address (Base):   00000001430D1C00
*/
class ServerPVZCharacterCameraComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(ServerPVZCharacterCameraComponent) == 192);

}
