#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428537A0
   RuntimeId:        1694
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7EE8
*/
enum ShaderSkinningMethod
{
  ShaderSkinningMethod_None = 0,
  ShaderSkinningMethod_Linear1Bone = 1,
  ShaderSkinningMethod_Linear2Bone = 2,
  ShaderSkinningMethod_Linear4Bone = 4,
  ShaderSkinningMethod_Linear6Bone = 6,
  ShaderSkinningMethod_Linear8Bone = 8,
  ShaderSkinningMethod_Null = 9,
  ShaderSkinningMethod_DualQuaternion4Bone = 10,
  ShaderSkinningMethodCount = 11,
};

}
