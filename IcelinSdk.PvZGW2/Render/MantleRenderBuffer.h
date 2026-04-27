#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/IRenderBuffer.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16D0
   TypeInfo Kind:    ClassInfo
   ClassId:          00B5
   VfTable:          0000000000000000
   Address (Base):   00000001430F3970
*/
class MantleRenderBuffer : public IRenderBuffer
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0120];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0128 */

static_assert(sizeof(MantleRenderBuffer) == 296);

}
