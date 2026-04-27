#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/Weapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BE8
   TypeInfo Kind:    ClassInfo
   ClassId:          00F2
   VfTable:          0000000000000000
   Address (Base):   00000001430BD1F0
*/
class ClientWeapon : public Weapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0300[0x0D20];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1020 */

static_assert(sizeof(ClientWeapon) == 4128);

}
