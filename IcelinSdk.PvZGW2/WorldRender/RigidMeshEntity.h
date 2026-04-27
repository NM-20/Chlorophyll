#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/MeshEntityBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1913
   TypeInfo Kind:    ClassInfo
   ClassId:          0066
   VfTable:          0000000000000000
   Address (Base):   00000001430CF270
*/
class RigidMeshEntity : public MeshEntityBase
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */

static_assert(sizeof(RigidMeshEntity) == 144);

}
