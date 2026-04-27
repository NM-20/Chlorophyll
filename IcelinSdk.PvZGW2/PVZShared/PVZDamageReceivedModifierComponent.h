#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/DamageModifierComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        26AB
   TypeInfo Kind:    ClassInfo
   ClassId:          0129
   VfTable:          0000000000000000
   Address (Base):   0000000143101550
*/
class PVZDamageReceivedModifierComponent : public DamageModifierComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(PVZDamageReceivedModifierComponent) == 48);

}
