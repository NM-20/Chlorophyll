#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Component.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        26AC
   TypeInfo Kind:    ClassInfo
   ClassId:          024D
   VfTable:          0000000000000000
   Address (Base):   0000000143101500
*/
class SpecialModeWeaponComponent : public Component
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(SpecialModeWeaponComponent) == 32);

}
