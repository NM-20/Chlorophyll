#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854638
   RuntimeId:        1748
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA000
   Default Value:    0000000142853B48
*/
#pragma pack(push, 4)
struct TerrainQuadDecalAtlasTile
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 TileIndexX; /* 0x0000 */
  FB_UINT32 TileIndexY; /* 0x0004 */
  FB_UINT32 TileCountX; /* 0x0008 */
  FB_UINT32 TileCountY; /* 0x000C */
  FB_BOOLEAN FlipX; /* 0x0010 */
  FB_BOOLEAN FlipY; /* 0x0011 */
  char pad_0012[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(TerrainQuadDecalAtlasTile) == 20);

}
