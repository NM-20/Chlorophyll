#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428562E8
   RuntimeId:        18E0
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9D20
*/
enum PostProcessAAMode
{
  PostProcessAAMode_None = 0,
  PostProcessAAMode_FxaaLow = 1,
  PostProcessAAMode_FxaaMedium = 2,
  PostProcessAAMode_FxaaHigh = 3,
  PostProcessAAMode_FxaaCompute = 4,
  PostProcessAAMode_FxaaComputeExtreme = 5,
  PostProcessAAMode_Smaa1x = 6,
  PostProcessAAMode_SmaaT2x = 7,
  PostProcessAAMode_TemporalAA = 8,
};

}
