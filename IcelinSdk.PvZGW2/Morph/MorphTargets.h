#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FE88
   RuntimeId:        1353
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          065C
   VfTable:          0000000142276FB0
   Address (Base):   00000001431100B0
*/
#pragma pack(push, 8)
class MorphTargets : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MeshVariationEntry) Variations; /* 0x0018 */
  FB_RESOURCEREF MorphTargetsResource; /* 0x0020 */
  FB_REFARRAY(class MorphPreset) Presets; /* 0x0028 */
  FB_HANDLE(class MorphShapes) Shapes; /* 0x0030 */
  FB_HANDLE(class MorphSliders) FeatureBlends; /* 0x0038 */
  FB_REFARRAY(class MeshAsset) HeadMeshAssets; /* 0x0040 */
  FB_REFARRAY(class MeshAsset) HairMeshAssets; /* 0x0048 */
  FB_REFARRAY(class MeshAsset) BeardMeshAssets; /* 0x0050 */
  FB_REFARRAY(class SliderShaderParameterTemplate) SliderShaderParameterTemplates; /* 0x0058 */
  FB_REFARRAY(class ChannelShaderParameterTemplate) ChannelShaderParameterTemplates; /* 0x0060 */
  FB_REFARRAY(class ColorShaderParameterTemplate) ColorShaderParameterTemplates; /* 0x0068 */
  FB_REFARRAY(class TextureShaderParameterTemplate) TextureShaderParameterTemplates; /* 0x0070 */
  FB_FLOAT32 EditorVerticalOffset; /* 0x0078 */
  FB_BOOLEAN DisableAdditiveBoneOffsets; /* 0x007C */
  char pad_007D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(MorphTargets) == 128);

}
