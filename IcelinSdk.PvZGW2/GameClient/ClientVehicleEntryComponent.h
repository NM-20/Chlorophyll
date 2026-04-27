#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientPlayerEntryComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B14
   TypeInfo Kind:    ClassInfo
   ClassId:          015D
   VfTable:          0000000000000000
   Address (Base):   00000001430B7860
*/
class ClientVehicleEntryComponent : public ClientPlayerEntryComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_05B0[0x0110];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x06C0 */

static_assert(sizeof(ClientVehicleEntryComponent) == 1728);

}
