#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/IRenderResource.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        154B
   TypeInfo Kind:    ClassInfo
   ClassId:          00B2
   VfTable:          0000000000000000
   Address (Base):   0000000143101B90
*/
class IRenderBuffer : public IRenderResource
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */

static_assert(sizeof(IRenderBuffer) == 8);

}
