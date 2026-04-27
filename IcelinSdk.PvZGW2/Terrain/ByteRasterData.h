#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/RasterQuadtreeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854028
   RuntimeId:        16EA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          069A
   VfTable:          00000001422AF408
   Address (Base):   00000001430DB090
*/
#pragma pack(push, 8)
class ByteRasterData : public RasterQuadtreeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ByteRasterData) == 24);

}
