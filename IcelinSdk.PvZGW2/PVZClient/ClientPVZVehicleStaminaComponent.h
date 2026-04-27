#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CCD
   TypeInfo Kind:    ClassInfo
   ClassId:          0195
   VfTable:          0000000000000000
   Address (Base):   00000001430DDC90
*/
class ClientPVZVehicleStaminaComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ClientPVZVehicleStaminaComponent) == 104);

}
