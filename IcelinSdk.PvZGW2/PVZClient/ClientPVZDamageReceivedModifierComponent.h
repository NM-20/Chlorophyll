#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZDamageReceivedModifierComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CC6
   TypeInfo Kind:    ClassInfo
   ClassId:          012B
   VfTable:          0000000000000000
   Address (Base):   00000001430DDCE0
*/
class ClientPVZDamageReceivedModifierComponent : public PVZDamageReceivedModifierComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ClientPVZDamageReceivedModifierComponent) == 48);

}
