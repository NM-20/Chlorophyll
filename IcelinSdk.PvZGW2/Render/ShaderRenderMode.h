#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428537C0
   RuntimeId:        1696
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7EC8
*/
enum ShaderRenderMode
{
  ShaderRenderMode_Forward = 0,
  ShaderRenderMode_DebugMulti = 14,
  ShaderRenderMode_DistortionVector = 13,
  ShaderRenderMode_VelocityVector = 12,
  ShaderRenderMode_ForwardEmissive = 11,
  ShaderRenderMode_DeferredShadingGBufferLayout7 = 10,
  ShaderRenderMode_DeferredShadingGBufferLayout6 = 9,
  ShaderRenderMode_ForwardOpaque_RuntimeOnly = 15,
  ShaderRenderMode_DeferredShadingGBufferLayout5 = 8,
  ShaderRenderMode_DeferredShadingGBufferLayout3 = 6,
  ShaderRenderMode_DeferredShadingGBufferLayout2 = 5,
  ShaderRenderMode_DeferredShadingGBufferLayout1 = 4,
  ShaderRenderMode_DeferredShadingGBufferLayout0 = 3,
  ShaderRenderMode_ZOnly = 2,
  ShaderRenderMode_ForwardSimple = 1,
  ShaderRenderMode_DeferredShadingGBufferLayout4 = 7,
  ShaderRenderModeCount = 16,
};

}
