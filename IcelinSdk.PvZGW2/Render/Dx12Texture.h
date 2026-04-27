#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/BaseTexture.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16CC
   TypeInfo Kind:    ClassInfo
   ClassId:          00BA
   VfTable:          0000000000000000
   Address (Base):   00000001430F3A60
*/
class Dx12Texture : public BaseTexture
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0088[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */

static_assert(sizeof(Dx12Texture) == 240);

}
