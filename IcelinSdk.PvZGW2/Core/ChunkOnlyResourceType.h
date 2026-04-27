#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        00CC
   TypeInfo Kind:    ClassInfo
   ClassId:          1294
   VfTable:          0000000000000000
   Address (Base):   000000014311F840
*/
class ChunkOnlyResourceType
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */

static_assert(sizeof(ChunkOnlyResourceType) == 16);

}
