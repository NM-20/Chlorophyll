#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/RasterQuadtreeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854048
   RuntimeId:        16EC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0699
   VfTable:          00000001422AF3B8
   Address (Base):   000000014310E250
*/
#pragma pack(push, 8)
class PhysicsMaterialsRasterData : public RasterQuadtreeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PhysicsMaterialsRasterData) == 24);

}
