#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/BaseShaderProgramDatabase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16D2
   TypeInfo Kind:    ClassInfo
   ClassId:          00A6
   VfTable:          0000000000000000
   Address (Base):   000000014311F160
*/
class MantleShaderProgramDatabase : public BaseShaderProgramDatabase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0088[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(MantleShaderProgramDatabase) == 208);

}
