#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853940
   RuntimeId:        16AE
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7D68
*/
enum ShaderInterpolationType
{
  ShaderInterpolationType_Linear = 0,
  ShaderInterpolationType_Centroid = 1,
  ShaderInterpolationType_NoInterpolation = 2,
  ShaderInterpolationType_NoPerspective = 3,
  ShaderInterpolationType_Sample = 4,
  ShaderInterpolationType_Count = 5,
  ShaderInterpolationType_Mask = 255,
  ShaderInterpolationType_DomainManual = 256,
  ShaderInterpolationType_VertexOnly = 512,
  ShaderInterpolationType_VertexHullOnly = 1024,
  ShaderInterpolationType_VertexHullDomainOnly = 2048,
};

}
