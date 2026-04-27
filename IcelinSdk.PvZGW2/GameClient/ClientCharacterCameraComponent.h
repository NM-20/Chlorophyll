#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A2D
   TypeInfo Kind:    ClassInfo
   ClassId:          016F
   VfTable:          0000000000000000
   Address (Base):   00000001430CE130
*/
class ClientCharacterCameraComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0088];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(ClientCharacterCameraComponent) == 192);

}
