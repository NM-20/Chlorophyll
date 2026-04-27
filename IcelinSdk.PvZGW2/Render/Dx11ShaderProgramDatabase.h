#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/BaseShaderProgramDatabase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16C7
   TypeInfo Kind:    ClassInfo
   ClassId:          00A5
   VfTable:          0000000000000000
   Address (Base):   000000014311F200
*/
class Dx11ShaderProgramDatabase : public BaseShaderProgramDatabase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0088[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(Dx11ShaderProgramDatabase) == 208);

}
