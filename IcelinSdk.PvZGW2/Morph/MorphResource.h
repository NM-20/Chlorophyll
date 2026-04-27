#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1304
   TypeInfo Kind:    ClassInfo
   ClassId:          00DE
   VfTable:          0000000000000000
   Address (Base):   00000001430F3D30
*/
class MorphResource
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0120];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */

static_assert(sizeof(MorphResource) == 288);

}
