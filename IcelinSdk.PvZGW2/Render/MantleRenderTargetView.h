#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/IRenderTargetView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16D1
   TypeInfo Kind:    ClassInfo
   ClassId:          00AF
   VfTable:          0000000000000000
   Address (Base):   0000000143121740
*/
class MantleRenderTargetView : public IRenderTargetView
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x01D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01D8 */

static_assert(sizeof(MantleRenderTargetView) == 472);

}
