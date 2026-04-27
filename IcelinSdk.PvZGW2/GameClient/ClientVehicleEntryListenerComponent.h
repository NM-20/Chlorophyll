#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A35
   TypeInfo Kind:    ClassInfo
   ClassId:          019E
   VfTable:          0000000000000000
   Address (Base):   00000001430B6150
*/
class ClientVehicleEntryListenerComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0308];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0340 */

static_assert(sizeof(ClientVehicleEntryListenerComponent) == 832);

}
