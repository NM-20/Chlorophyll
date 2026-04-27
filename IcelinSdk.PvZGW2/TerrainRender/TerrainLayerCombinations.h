#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1756
   TypeInfo Kind:    ClassInfo
   ClassId:          009B
   VfTable:          0000000000000000
   Address (Base):   00000001431019B0
*/
class TerrainLayerCombinations
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0078];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(TerrainLayerCombinations) == 120);

}
