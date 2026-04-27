#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/IRenderBuffer.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16C9
   TypeInfo Kind:    ClassInfo
   ClassId:          00B3
   VfTable:          0000000000000000
   Address (Base):   00000001430F3AB0
*/
class Dx12RenderBuffer : public IRenderBuffer
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0078];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(Dx12RenderBuffer) == 128);

}
