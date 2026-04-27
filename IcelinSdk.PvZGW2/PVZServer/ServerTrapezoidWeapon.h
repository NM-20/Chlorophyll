#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F71
   TypeInfo Kind:    ClassInfo
   ClassId:          00E8
   VfTable:          0000000000000000
   Address (Base):   0000000143120390
*/
class ServerTrapezoidWeapon : public ServerWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_04D0[0x1490];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1960 */

static_assert(sizeof(ServerTrapezoidWeapon) == 6496);

}
