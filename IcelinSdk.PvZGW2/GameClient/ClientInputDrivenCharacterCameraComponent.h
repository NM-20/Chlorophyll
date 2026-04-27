#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientCharacterCameraComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A33
   TypeInfo Kind:    ClassInfo
   ClassId:          0171
   VfTable:          0000000000000000
   Address (Base):   00000001430DEE60
*/
class ClientInputDrivenCharacterCameraComponent : public ClientCharacterCameraComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00C0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(ClientInputDrivenCharacterCameraComponent) == 208);

}
