#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1755
   TypeInfo Kind:    ClassInfo
   ClassId:          009C
   VfTable:          0000000000000000
   Address (Base):   0000000143101A00
*/
class TerrainDecals
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0190];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */

static_assert(sizeof(TerrainDecals) == 400);

}
