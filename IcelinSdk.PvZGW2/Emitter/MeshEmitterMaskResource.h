#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0685
   TypeInfo Kind:    ClassInfo
   ClassId:          05D8
   VfTable:          0000000000000000
   Address (Base):   00000001430F4050
*/
class MeshEmitterMaskResource
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(MeshEmitterMaskResource) == 48);

}
