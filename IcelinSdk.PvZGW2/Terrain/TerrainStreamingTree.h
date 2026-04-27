#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16D6
   TypeInfo Kind:    ClassInfo
   ClassId:          00A2
   VfTable:          0000000000000000
   Address (Base):   0000000143101AF0
*/
class TerrainStreamingTree
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0128];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0128 */

static_assert(sizeof(TerrainStreamingTree) == 296);

}
