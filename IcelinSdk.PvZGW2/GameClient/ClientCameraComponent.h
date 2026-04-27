#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AFE
   TypeInfo Kind:    ClassInfo
   ClassId:          018B
   VfTable:          0000000000000000
   Address (Base):   00000001430BF4F0
*/
class ClientCameraComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0148];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */

static_assert(sizeof(ClientCameraComponent) == 384);

}
