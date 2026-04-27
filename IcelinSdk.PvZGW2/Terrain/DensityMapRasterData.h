#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/ByteRasterData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854088
   RuntimeId:        16F0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          069D
   VfTable:          00000001422AF3D8
   Address (Base):   000000014310E190
*/
#pragma pack(push, 8)
class DensityMapRasterData : public ByteRasterData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DensityMapRasterData) == 24);

}
