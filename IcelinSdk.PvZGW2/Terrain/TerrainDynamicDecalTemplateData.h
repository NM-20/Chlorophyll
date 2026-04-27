#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderInstanceDataStruct.h>

namespace fb
{

/* TypeInfo (Array): 00000001428544E8
   RuntimeId:        1736
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          082D
   VfTable:          00000001422AF318
   Address (Base):   00000001430D05C0
*/
#pragma pack(push, 8)
class TerrainDynamicDecalTemplateData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Width; /* 0x0018 */
  FB_FLOAT32 RelativeWidthDeviation; /* 0x001C */
  FB_FLOAT32 Depth; /* 0x0020 */
  FB_FLOAT32 RelativeDepthDeviation; /* 0x0024 */
  FB_FLOAT32 RotationRandomAmount; /* 0x0028 */
  FB_FLOAT32 SlopeMax; /* 0x002C */
  FB_HANDLE(class HeightfieldDecalAsset) DepthMask; /* 0x0030 */
  SurfaceShaderInstanceDataStruct MaskShader; /* 0x0038 */
  SurfaceShaderInstanceDataStruct DisplacementShader; /* 0x0060 */
  FB_BOOLEAN TangentSpaceEnable; /* 0x0088 */
  char pad_0089[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(TerrainDynamicDecalTemplateData) == 144);

}
