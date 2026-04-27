#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1521
   TypeInfo Kind:    ClassInfo
   ClassId:          00D2
   VfTable:          0000000000000000
   Address (Base):   00000001430F3C90
*/
class DamageInfo
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x00C0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */

static_assert(sizeof(DamageInfo) == 192);

}
