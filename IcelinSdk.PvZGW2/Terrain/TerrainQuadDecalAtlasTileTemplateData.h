#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Terrain/TerrainQuadDecalAtlasTile.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854658
   RuntimeId:        174A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0706
   VfTable:          00000001422AF100
   Address (Base):   000000014310DCB0
*/
#pragma pack(push, 8)
class TerrainQuadDecalAtlasTileTemplateData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TerrainQuadDecalAtlasTile AtlasTile; /* 0x0018 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TerrainQuadDecalAtlasTileTemplateData) == 48);

}
