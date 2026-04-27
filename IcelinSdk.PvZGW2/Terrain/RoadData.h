#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/RibbonData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428545B8
   RuntimeId:        1740
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0977
   VfTable:          00000001422AF268
   Address (Base):   000000014310DE30
*/
#pragma pack(push, 8)
class RoadData : public RibbonData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SurfaceShaderBaseAsset) Shader2d; /* 0x0048 */
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader2dMeshScatteringMask; /* 0x0050 */
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader3dZOnly; /* 0x0058 */
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader2dDisplacement; /* 0x0060 */
  FB_FLOAT32 UvTileFactor; /* 0x0068 */
  FB_BOOLEAN StickToTerrain; /* 0x006C */
  FB_BOOLEAN TangentSpaceEnable; /* 0x006D */
  char pad_006E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(RoadData) == 112);

}
