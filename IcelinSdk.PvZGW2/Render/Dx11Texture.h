#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/BaseTexture.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16C8
   TypeInfo Kind:    ClassInfo
   ClassId:          00B8
   VfTable:          0000000000000000
   Address (Base):   00000001430D2470
*/
class Dx11Texture : public BaseTexture
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0088[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C8 */

static_assert(sizeof(Dx11Texture) == 200);

}
