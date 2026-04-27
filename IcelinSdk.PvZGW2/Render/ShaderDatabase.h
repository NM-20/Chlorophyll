#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/IShaderDatabase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16D4
   TypeInfo Kind:    ClassInfo
   ClassId:          00A9
   VfTable:          0000000000000000
   Address (Base):   00000001430F3920
*/
class ShaderDatabase : public IShaderDatabase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0288];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0290 */

static_assert(sizeof(ShaderDatabase) == 656);

}
