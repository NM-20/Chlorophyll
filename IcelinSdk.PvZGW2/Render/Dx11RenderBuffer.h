#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/IRenderBuffer.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16CF
   TypeInfo Kind:    ClassInfo
   ClassId:          00B4
   VfTable:          0000000000000000
   Address (Base):   00000001430F39C0
*/
class Dx11RenderBuffer : public IRenderBuffer
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0078];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(Dx11RenderBuffer) == 128);

}
