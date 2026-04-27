#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428525E0
   RuntimeId:        1586
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA360
*/
enum GenerateMipmapsFilterType
{
  GenerateMipmapsFilter_Box = 0,
  GenerateMipmapsFilter_BoxRgbSharpenAlpha = 1,
  GenerateMipmapsFilter_BoxRgbKeepAlphaTestCoverage = 2,
  GenerateMipmapsFilter_AlphaWeightedBox = 3,
};

}
