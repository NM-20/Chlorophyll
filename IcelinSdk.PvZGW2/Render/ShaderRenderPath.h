#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852530
   RuntimeId:        157C
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C85A8
*/
enum ShaderRenderPath
{
  ShaderRenderPath_Dx10 = 0,
  ShaderRenderPath_Dx10Plus = 1,
  ShaderRenderPath_Dx10_1 = 2,
  ShaderRenderPath_Dx11 = 3,
  ShaderRenderPath_Dx11_1 = 4,
  ShaderRenderPath_Dx12 = 5,
  ShaderRenderPath_GLSL_410 = 6,
  ShaderRenderPath_Gen4a = 7,
  ShaderRenderPath_Gen4aDx12 = 8,
  ShaderRenderPath_Gen4b = 9,
  ShaderRenderPath_GLSL_ES_100 = 10,
  ShaderRenderPath_GLSL_ES_300 = 11,
  ShaderRenderPath_GLSL_ES_310 = 12,
  ShaderRenderPath_BLSL_1_0 = 13,
  ShaderRenderPathCount = 14,
};

}
