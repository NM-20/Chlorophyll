#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderInstanceDataStruct.h>
#include <IcelinSdk.PvZGW2/Render/ShaderTessellationType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852C80
   RuntimeId:        15F0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E0D
   VfTable:          00000001422A1758
   Address (Base):   000000014310E6D0
*/
#pragma pack(push, 8)
class MeshMaterial : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SurfaceShaderInstanceData) ShaderInstance; /* 0x0010 */
  SurfaceShaderInstanceDataStruct Shader; /* 0x0018 */
  ShaderTessellationType TessellationType; /* 0x0040 */
  FB_FLOAT32 TessellationTriangleSize; /* 0x0044 */
  FB_FLOAT32 TessellationMaxDistance; /* 0x0048 */
  FB_FLOAT32 BackFaceCullEpsilon; /* 0x004C */
  FB_FLOAT32 ShapeFactor; /* 0x0050 */
  char pad_0054[0x0004];
  FB_HANDLE(class TextureBaseAsset) DisplacementMap; /* 0x0058 */
  FB_FLOAT32 DisplacementScale; /* 0x0060 */
  FB_FLOAT32 DisplacementBias; /* 0x0064 */
  FB_UINT32 DisplacementMapTexCoord; /* 0x0068 */
  FB_BOOLEAN CastShadow; /* 0x006C */
  FB_BOOLEAN SmoothEdgeVertices; /* 0x006D */
  FB_BOOLEAN DisplacementObjectScale; /* 0x006E */
  char pad_006F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(MeshMaterial) == 112);

}
