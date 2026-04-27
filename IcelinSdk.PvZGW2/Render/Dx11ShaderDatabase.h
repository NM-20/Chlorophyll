#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/ShaderDatabase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        16D5
   TypeInfo Kind:    ClassInfo
   ClassId:          00AB
   VfTable:          0000000000000000
   Address (Base):   000000014311F110
*/
class Dx11ShaderDatabase : public ShaderDatabase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0290[0x00D0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0360 */

static_assert(sizeof(Dx11ShaderDatabase) == 864);

}
