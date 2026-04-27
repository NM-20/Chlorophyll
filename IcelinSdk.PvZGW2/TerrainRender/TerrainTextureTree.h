#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1761
   TypeInfo Kind:    ClassInfo
   ClassId:          0098
   VfTable:          0000000000000000
   Address (Base):   000000014311EF80
*/
class TerrainTextureTree
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0360];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0360 */

static_assert(sizeof(TerrainTextureTree) == 864);

}
