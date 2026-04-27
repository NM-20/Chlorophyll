#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/ClientWeapon.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BFF
   TypeInfo Kind:    ClassInfo
   ClassId:          00FD
   VfTable:          0000000000000000
   Address (Base):   0000000143101730
*/
class ClientSimpleMeleeWeapon : public ClientWeapon
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_1020[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1030 */

static_assert(sizeof(ClientSimpleMeleeWeapon) == 4144);

}
