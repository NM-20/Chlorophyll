#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/MeshAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852C20
   RuntimeId:        15EA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0624
   VfTable:          00000001422A1790
   Address (Base):   00000001430DB0F0
*/
#pragma pack(push, 8)
class RigidMeshAsset : public MeshAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(RigidMeshAsset) == 112);

}
