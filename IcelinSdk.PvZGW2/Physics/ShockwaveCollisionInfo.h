#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        152A
   TypeInfo Kind:    ClassInfo
   ClassId:          00CB
   VfTable:          0000000000000000
   Address (Base):   00000001430F3BF0
*/
class ShockwaveCollisionInfo
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x00D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(ShockwaveCollisionInfo) == 208);

}
