#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/Weapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CF8
   TypeInfo Kind:    ClassInfo
   ClassId:          00E5
   VfTable:          0000000000000000
   Address (Base):   00000001430BD1A0
*/
class ServerWeapon : public Weapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0300[0x01D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x04D0 */

static_assert(sizeof(ServerWeapon) == 1232);

}
