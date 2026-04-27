#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853980
   RuntimeId:        16B2
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7D28
*/
enum ShaderConstantSystemTexture
{
  ShaderConstantSystemTexture_DepthBufferTexture = 0,
  ShaderConstantSystemTexture_LocalIBLTextureArray = 1,
  ShaderConstantSystemTexture_LocalPRTextureArray = 2,
  ShaderConstantSystemTexture_LocalPRDepthTextureArray = 3,
  ShaderConstantSystemTexture_IESTextureArray = 4,
  ShaderConstantSystemTexture_NormalBasisGBufferTexture = 5,
  ShaderConstantSystemTexture_LightShaftTexture = 6,
  ShaderConstantSystemTextureCount = 7,
};

}
