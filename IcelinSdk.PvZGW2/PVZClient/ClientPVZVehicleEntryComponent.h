#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientVehicleEntryComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CBB
   TypeInfo Kind:    ClassInfo
   ClassId:          015E
   VfTable:          0000000000000000
   Address (Base):   00000001430D1E80
*/
class ClientPVZVehicleEntryComponent : public ClientVehicleEntryComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_06C0[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x06F0 */

static_assert(sizeof(ClientPVZVehicleEntryComponent) == 1776);

}
