#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/ITexture.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16CD
   TypeInfo Kind:    ClassInfo
   ClassId:          00B7
   VfTable:          0000000000000000
   Address (Base):   00000001430F3A10
*/
class BaseTexture : public ITexture
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */

static_assert(sizeof(BaseTexture) == 136);

}
