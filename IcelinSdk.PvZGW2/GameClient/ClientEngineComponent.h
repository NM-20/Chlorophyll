#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B0D
   TypeInfo Kind:    ClassInfo
   ClassId:          0139
   VfTable:          0000000000000000
   Address (Base):   00000001430D2970
*/
class ClientEngineComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x00A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D8 */

static_assert(sizeof(ClientEngineComponent) == 216);

}
