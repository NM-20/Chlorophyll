#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/MeshEntityBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        18F5
   TypeInfo Kind:    ClassInfo
   ClassId:          0067
   VfTable:          0000000000000000
   Address (Base):   00000001430D23D0
*/
class CompositeMeshEntity : public MeshEntityBase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0090[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */

static_assert(sizeof(CompositeMeshEntity) == 176);

}
