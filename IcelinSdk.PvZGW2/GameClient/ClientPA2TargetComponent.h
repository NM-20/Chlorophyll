#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AEF
   TypeInfo Kind:    ClassInfo
   ClassId:          014B
   VfTable:          0000000000000000
   Address (Base):   00000001430D2A10
*/
class ClientPA2TargetComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(ClientPA2TargetComponent) == 96);

}
