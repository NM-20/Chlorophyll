#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1752
   TypeInfo Kind:    ClassInfo
   ClassId:          009D
   VfTable:          0000000000000000
   Address (Base):   0000000143101A50
*/
class ITerrain
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */

static_assert(sizeof(ITerrain) == 8);

}
