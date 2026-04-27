#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853720
   RuntimeId:        168C
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7F68
*/
enum SurfaceShaderType
{
  SurfaceShaderType_Opaque = 0,
  SurfaceShaderType_OpaqueAlphaTest = 1,
  SurfaceShaderType_OpaqueAlphaTestSimple = 2,
  SurfaceShaderType_Transparent = 3,
  SurfaceShaderType_TransparentDecal = 4,
  SurfaceShaderType_TransparentDepth = 5,
  SurfaceShaderType_TransparentEdge = 6,
};

}
