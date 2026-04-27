#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853450
   RuntimeId:        1660
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8188
*/
enum ShaderValueParameterType
{
  SvptLiteral = 0,
  SvptExternalStatic = 1,
  SvptExternalPermutation = 2,
  SvptExternalConstant = 3,
  SvptExternalSubMaterial = 4,
};

}
