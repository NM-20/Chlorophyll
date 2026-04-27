#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/DamageModifierComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BED
   TypeInfo Kind:    ClassInfo
   ClassId:          012C
   VfTable:          0000000000000000
   Address (Base):   0000000143101F00
*/
class TeamDamageModifierComponent : public DamageModifierComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */

static_assert(sizeof(TeamDamageModifierComponent) == 56);

}
