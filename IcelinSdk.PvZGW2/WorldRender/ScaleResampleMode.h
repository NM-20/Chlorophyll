#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428562C8
   RuntimeId:        18DE
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9D40
*/
enum ScaleResampleMode
{
  ScaleResampleMode_Point = 0,
  ScaleResampleMode_Linear = 1,
  ScaleResampleMode_Bicubic = 2,
  ScaleResampleMode_Lanczos = 3,
  ScaleResampleMode_LanczosSeparable = 4,
  ScaleResampleMode_BicubicSharp = 5,
  ScaleResampleMode_BicubicSharpSeparable = 6,
};

}
