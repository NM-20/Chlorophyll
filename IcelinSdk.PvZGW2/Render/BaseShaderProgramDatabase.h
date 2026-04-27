#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16CE
   TypeInfo Kind:    ClassInfo
   ClassId:          00A3
   VfTable:          0000000000000000
   Address (Base):   00000001430DE320
*/
class BaseShaderProgramDatabase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0088];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */

static_assert(sizeof(BaseShaderProgramDatabase) == 136);

}
