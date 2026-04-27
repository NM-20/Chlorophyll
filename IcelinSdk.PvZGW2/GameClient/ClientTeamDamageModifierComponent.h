#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/TeamDamageModifierComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A12
   TypeInfo Kind:    ClassInfo
   ClassId:          012E
   VfTable:          0000000000000000
   Address (Base):   00000001430DEFF0
*/
class ClientTeamDamageModifierComponent : public TeamDamageModifierComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(ClientTeamDamageModifierComponent) == 56);

}
