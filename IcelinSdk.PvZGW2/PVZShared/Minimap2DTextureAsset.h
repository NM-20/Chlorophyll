#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864FF0
   RuntimeId:        227A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0634
   VfTable:          0000000142351A88
   Address (Base):   0000000143108130
*/
#pragma pack(push, 8)
class Minimap2DTextureAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Minimap2DTile) Tiles; /* 0x0018 */
  FB_GUID ImageDataURLChunk; /* 0x0020 */
  FB_UINT32 ImageDataURLChunkSize; /* 0x0030 */
  FB_INT32 RootTileIndex; /* 0x0034 */
  FB_UINT32 OutputSize; /* 0x0038 */
  FB_UINT32 TextureTileSize; /* 0x003C */
  FB_UINT32 LowestTileResolution; /* 0x0040 */
  FB_UINT32 SkipMips; /* 0x0044 */
  FB_UINT32 LowDetailSkipMips; /* 0x0048 */
  FB_BOOLEAN UseMipMappedStaticTile; /* 0x004C */
  FB_BOOLEAN HasDetailVolumes; /* 0x004D */
  char pad_004E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(Minimap2DTextureAsset) == 80);

}
