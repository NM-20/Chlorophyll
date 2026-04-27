#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/ServerWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EBA
   TypeInfo Kind:    ClassInfo
   ClassId:          00EF
   VfTable:          0000000000000000
   Address (Base):   000000014311E170
*/
class ServerSimpleMeleeWeapon : public ServerWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_04D0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x04E0 */

static_assert(sizeof(ServerSimpleMeleeWeapon) == 1248);

}
