#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/RasterQuadtreeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853FA8
   RuntimeId:        16E2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          069E
   VfTable:          00000001422AF428
   Address (Base):   000000014310E310
*/
#pragma pack(push, 8)
class VirtualRasterQuadtreeData : public RasterQuadtreeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VirtualRasterQuadtreeData) == 24);

}
