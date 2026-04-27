#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerCharacterCameraComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C58
   TypeInfo Kind:    ClassInfo
   ClassId:          01E3
   VfTable:          0000000000000000
   Address (Base):   00000001430DE870
*/
class ServerInputDrivenCharacterCameraComponent : public ServerCharacterCameraComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0080[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(ServerInputDrivenCharacterCameraComponent) == 144);

}
