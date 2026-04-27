#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/RasterQuadtreeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853FE8
   RuntimeId:        16E6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0696
   VfTable:          00000001422AF3E8
   Address (Base):   000000014310E2B0
*/
#pragma pack(push, 8)
class HeightfieldRasterData : public RasterQuadtreeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(HeightfieldRasterData) == 24);

}
