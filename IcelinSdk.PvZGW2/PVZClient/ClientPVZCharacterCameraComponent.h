#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientCharacterCameraComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BF1
   TypeInfo Kind:    ClassInfo
   ClassId:          0170
   VfTable:          0000000000000000
   Address (Base):   00000001430D2100
*/
class ClientPVZCharacterCameraComponent : public ClientCharacterCameraComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00C0[0x0250];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0310 */

static_assert(sizeof(ClientPVZCharacterCameraComponent) == 784);

}
