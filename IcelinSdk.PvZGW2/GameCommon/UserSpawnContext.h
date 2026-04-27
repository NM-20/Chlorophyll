#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BFB
   TypeInfo Kind:    ClassInfo
   ClassId:          00E0
   VfTable:          0000000000000000
   Address (Base):   00000001430F3E20
*/
class UserSpawnContext
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */

static_assert(sizeof(UserSpawnContext) == 16);

}
