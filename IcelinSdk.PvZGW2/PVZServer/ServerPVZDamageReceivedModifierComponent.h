#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZDamageReceivedModifierComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F74
   TypeInfo Kind:    ClassInfo
   ClassId:          012A
   VfTable:          0000000000000000
   Address (Base):   00000001430DD4C0
*/
class ServerPVZDamageReceivedModifierComponent : public PVZDamageReceivedModifierComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerPVZDamageReceivedModifierComponent) == 48);

}
