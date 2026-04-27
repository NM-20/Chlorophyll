#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SpecialModeWeaponComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F7F
   TypeInfo Kind:    ClassInfo
   ClassId:          024F
   VfTable:          0000000000000000
   Address (Base):   00000001430DD2E0
*/
class ServerSpecialModeWeaponComponent : public SpecialModeWeaponComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(ServerSpecialModeWeaponComponent) == 32);

}
