#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/DamageInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1523
   TypeInfo Kind:    ClassInfo
   ClassId:          00D4
   VfTable:          0000000000000000
   Address (Base):   00000001430BE9A0
*/
class ClientDamageInfo : public DamageInfo
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_00C0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(ClientDamageInfo) == 208);

}
