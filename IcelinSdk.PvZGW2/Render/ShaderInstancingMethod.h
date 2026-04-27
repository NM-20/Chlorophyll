#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853780
   RuntimeId:        1692
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7F08
*/
enum ShaderInstancingMethod
{
  ShaderInstancingMethod_None = 0,
  ShaderInstancingMethod_DxBufferInstanceData4x2Float = 14,
  ShaderInstancingMethod_DxBufferInstanceData4x1Float = 13,
  ShaderInstancingMethod_DxBuffer = 12,
  ShaderInstancingMethod_PositionStreamAux = 11,
  ShaderInstancingMethod_PositionStream = 10,
  ShaderInstancingMethod_ObjectTranslationScaleHalfInstanceData4x2Half = 9,
  ShaderInstancingMethod_Manual = 15,
  ShaderInstancingMethod_ObjectTranslationScaleHalfInstanceData4x1Half = 8,
  ShaderInstancingMethod_PrevWorldTransform4x3FloatInstanceData4x2Half = 6,
  ShaderInstancingMethod_WorldTransform4x3FloatInstanceData4x2Half = 5,
  ShaderInstancingMethod_WorldTransform4x3Float = 4,
  ShaderInstancingMethod_ObjectTransform4x3InstanceData4x2Half = 3,
  ShaderInstancingMethod_ObjectTransform4x3InstanceData4x1Half = 2,
  ShaderInstancingMethod_ObjectTransform4x3Half = 1,
  ShaderInstancingMethod_ObjectTranslationScaleHalf = 7,
  ShaderInstancingMethodCount = 16,
};

}
