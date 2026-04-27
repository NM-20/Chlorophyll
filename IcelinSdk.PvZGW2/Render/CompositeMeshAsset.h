#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/MeshAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852C60
   RuntimeId:        15EE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0625
   VfTable:          00000001422A17B0
   Address (Base):   00000001430EA840
*/
#pragma pack(push, 8)
class CompositeMeshAsset : public MeshAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(CompositeMeshAsset) == 112);

}
