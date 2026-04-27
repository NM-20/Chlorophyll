#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/VisualVectorShapeData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Terrain/TerrainQuadDecalAtlasTile.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854678
   RuntimeId:        174C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          097A
   VfTable:          00000001422AF110
   Address (Base):   000000014310DC50
*/
#pragma pack(push, 16)
class TerrainQuadDecalData : public VisualVectorShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SurfaceShaderBaseAsset) Shader2d; /* 0x0040 */
  char pad_0048[0x0008];
  Vec4 UserMasks; /* 0x0050 */
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader2dMeshScatteringMask; /* 0x0060 */
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader3dZOnly; /* 0x0068 */
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader2dDisplacement; /* 0x0070 */
  FB_HANDLE(class TerrainQuadDecalAtlasTileTemplateData) AtlasTileTemplate; /* 0x0078 */
  TerrainQuadDecalAtlasTile AtlasTile; /* 0x0080 */
  FB_BOOLEAN StickToTerrain; /* 0x0094 */
  FB_BOOLEAN TangentSpaceEnable; /* 0x0095 */
  char pad_0096[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(TerrainQuadDecalData) == 160);

}
