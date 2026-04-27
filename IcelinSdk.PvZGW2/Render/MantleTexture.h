#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/BaseTexture.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16D3
   TypeInfo Kind:    ClassInfo
   ClassId:          00B9
   VfTable:          0000000000000000
   Address (Base):   00000001430D2420
*/
class MantleTexture : public BaseTexture
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0088[0x03A8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0430 */

static_assert(sizeof(MantleTexture) == 1072);

}
