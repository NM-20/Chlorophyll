#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/ByteRasterData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854408
   RuntimeId:        1728
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          069C
   VfTable:          00000001422AF348
   Address (Base):   000000014310DF50
*/
#pragma pack(push, 8)
class PathfindingMaskRasterData : public ByteRasterData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PathfindingMaskRasterData) == 24);

}
