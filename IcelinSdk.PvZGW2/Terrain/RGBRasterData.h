#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/RasterQuadtreeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854008
   RuntimeId:        16E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0697
   VfTable:          00000001422AF3F8
   Address (Base):   00000001430FB650
*/
#pragma pack(push, 8)
class RGBRasterData : public RasterQuadtreeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(RGBRasterData) == 24);

}
