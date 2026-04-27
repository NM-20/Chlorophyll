#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/ShaderDatabase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16C4
   TypeInfo Kind:    ClassInfo
   ClassId:          00AC
   VfTable:          0000000000000000
   Address (Base):   000000014311F2A0
*/
class Dx12ShaderDatabase : public ShaderDatabase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0290[0x00E0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0370 */

static_assert(sizeof(Dx12ShaderDatabase) == 880);

}
