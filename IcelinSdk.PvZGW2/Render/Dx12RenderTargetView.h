#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/IRenderTargetView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16CA
   TypeInfo Kind:    ClassInfo
   ClassId:          00AE
   VfTable:          0000000000000000
   Address (Base):   0000000143121790
*/
class Dx12RenderTargetView : public IRenderTargetView
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B8 */

static_assert(sizeof(Dx12RenderTargetView) == 184);

}
