#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/VisualVectorShapeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854618
   RuntimeId:        1746
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0979
   VfTable:          00000001422AF1D0
   Address (Base):   000000014310DD10
*/
#pragma pack(push, 8)
class TerrainFillDecalData : public VisualVectorShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SurfaceShaderBaseAsset) Shader2d; /* 0x0040 */
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader2dMeshScatteringMask; /* 0x0048 */
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader3dZOnly; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(TerrainFillDecalData) == 88);

}
