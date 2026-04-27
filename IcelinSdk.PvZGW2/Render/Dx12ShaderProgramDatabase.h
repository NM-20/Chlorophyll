#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/BaseShaderProgramDatabase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16CB
   TypeInfo Kind:    ClassInfo
   ClassId:          00A4
   VfTable:          0000000000000000
   Address (Base):   000000014311F1B0
*/
class Dx12ShaderProgramDatabase : public BaseShaderProgramDatabase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0088[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(Dx12ShaderProgramDatabase) == 208);

}
