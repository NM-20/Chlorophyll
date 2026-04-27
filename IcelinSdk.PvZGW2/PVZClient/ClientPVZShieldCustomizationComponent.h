#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CCC
   TypeInfo Kind:    ClassInfo
   ClassId:          0134
   VfTable:          0000000000000000
   Address (Base):   00000001430D1D90
*/
class ClientPVZShieldCustomizationComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x00D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0108 */

static_assert(sizeof(ClientPVZShieldCustomizationComponent) == 264);

}
