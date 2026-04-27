#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/IRenderTargetView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16C6
   TypeInfo Kind:    ClassInfo
   ClassId:          00B0
   VfTable:          0000000000000000
   Address (Base):   00000001431217E0
*/
class Dx11RenderTargetView : public IRenderTargetView
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */

static_assert(sizeof(Dx11RenderTargetView) == 152);

}
