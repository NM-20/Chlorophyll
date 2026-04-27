#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientControllableHealthComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B15
   TypeInfo Kind:    ClassInfo
   ClassId:          0246
   VfTable:          0000000000000000
   Address (Base):   00000001430CF720
*/
class ClientVehicleHealthComponent : public ClientControllableHealthComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0048[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B8 */

static_assert(sizeof(ClientVehicleHealthComponent) == 184);

}
