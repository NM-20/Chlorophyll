#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/RGBRasterData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428540C8
   RuntimeId:        16F4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0698
   VfTable:          00000001422AF398
   Address (Base):   000000014310E0D0
*/
#pragma pack(push, 8)
class PathfindingRasterData : public RGBRasterData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PathfindingRasterData) == 24);

}
