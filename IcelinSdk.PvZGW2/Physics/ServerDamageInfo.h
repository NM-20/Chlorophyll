#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/DamageInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1522
   TypeInfo Kind:    ClassInfo
   ClassId:          00D3
   VfTable:          0000000000000000
   Address (Base):   00000001430CF2C0
*/
class ServerDamageInfo : public DamageInfo
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00C0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(ServerDamageInfo) == 208);

}
